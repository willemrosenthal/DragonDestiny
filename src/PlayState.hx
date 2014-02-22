package;

import flash.Lib;
import flixel.FlxG;
import flixel.util.FlxRect;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;
import flixel.system.FlxSound;


import flixel.util.FlxSave;
import flash.net.SharedObject;
import flash.net.SharedObjectFlushStatus;


import flixel.tweens.FlxTween;
import flixel.tweens.FlxTween.TweenOptions;
import flixel.util.FlxColor;

#if cpp
import openfl.ui.Accelerometer;
#end

class PlayState extends FlxState
{


	private var UI:FlxGroup;
	private var redScore:FlxText;
	private var blueScore:FlxText;

	private var dragon:DragonHead;
	private var dragonBodies:Array<DragonBody>;



	private var stars:Array<Star>;
	private var clouds:Array<Cloud>;

	private var space:FlxGroup;

	private var one:FlxGroup;
	private var two:FlxGroup;
	private var three:FlxGroup;

    private var csa:Array<Float>; // cloud spacing array
    private var cspeed:Array<Float>; // cloud speed array
	private var cloudsFG:Parallax;
	private var cloudsMG:Parallax;
	private var cloudsBG:Parallax;

	private var walls:FlxGroup;
	private var blur:FlxGroup;
	private var body:FlxGroup;
	private var head:FlxGroup;

	private var numBodies:Int = 16;
    private var dbDistance:Float = 8;
    private var dbLast:Int = 4;

	private var _tween:FlxTween;
	private var _sprite:FlxSprite;



    private var wallsTop:Array<Wall>;
    private var wallsBottom:Array<Wall>;
	private var wallSpacing:Int = 120;
    private var numWalls:Int = 4;
    private var fp:Float = 20;  // first padding
    private var spaceSize:Float = 50;
    private var spaceSizeMin:Float = 25;
    private var spaceSizeRange:Float = 30;

    private var maxStep:Float = 50;
    private var change:Float = 0;
    private var last:Float = 0;
    private var current:Float = 0;

    private var speedUpRate:Float = 3.5;

    private var scoreTxt:FlxText;
    private var title:FlxSprite;
    private var subtitle:FlxSprite;

    private var showScore:Bool = false;
    private var lastScore:FlxText;
    private var bestScore:FlxText;

    // sway effect
    private var wiggle:Bool = false;
    private var angleMax:Float = 0.2;
    private var angleSpeed:Float = 0;
    private var angleChange:Float = 0.001;
    private var angleDir:Float = 1;

    // lightning effect
    private var lightning:Bool = false;
    private var maxLightningTime:Int = 100;
    private var lightningTimer:Int = 30;


    // clouds effect
    private var cloudsOn:Bool = false;
    private var totalClouds:Int = 0;

    public function new() {
        super();

        Global.gameOver = false;
        Global.total = 0;
        Global.speed = Global.initialSpeed;
        dbLast = Global.dbLast;
        Global.game = this;
    }

	override public function create():Void {
		//FlxG.cameras.bgColor = 0x11000000;
	    //Global.game = this;

	    space = new FlxGroup();
	    add(space);
	    addStars(Math.round(Math.random() * 45 + 20));

        if (cloudsOn)
        {
            one = new FlxGroup();
            two = new FlxGroup();
            three = new FlxGroup();
            space.add(three);
            space.add(two);
            space.add(one);
            addClouds(totalClouds);
        }

        //csa = [FlxG.height * 0.62,FlxG.height * 0.7,FlxG.height * 0.84];
        csa = [FlxG.height * 0.55,FlxG.height * 0.62,FlxG.height * 0.75];


        //cspeed = [-25, -50, -75];
        cspeed = [-30, -75, -105];

        cloudsBG = new Parallax(csa[0],"assets/clouds/cloud_back.png",156,100);
        cloudsBG.speed = cspeed[0];
        add(cloudsBG);

        cloudsMG = new Parallax(csa[1],"assets/clouds/cloud_mid.png",134,100);
        cloudsMG.speed = cspeed[1];
        add(cloudsMG);

        cloudsFG = new Parallax(csa[2],"assets/clouds/cloud_front.png",132,100);
        cloudsFG.speed = cspeed[2];
        add(cloudsFG);

	    body = new FlxGroup();
	    add(body);

	    head = new FlxGroup();
	    add(head);

        //stars = new Stars(dragon.x, dragon.y);
        //add(stars);

	    walls = new FlxGroup();
	    add(walls);

        if (!Global.title)
            gameStart();
        else titleSetup();

        setMusic();

	    // speed up for testing
	    /*
	    for (i in 0...35){
	        speedUp();
	    }
	    */
	}

	private function setMusic():Void
	{
	    if (Math.random() < 0.5)
	        playMusic("assets/music/robosmack.mp3");     //ogg  //mp3
	    else
	        playMusic("assets/music/blindspot.mp3");     //ogg  //mp3
	}

	private var music:FlxSound;
	private function playMusic(Music:String):Void
    {
        music = new FlxSound();
        add(music);

        music.loadEmbedded(Music, true);
        music.survive = true;
        music.fadeIn(0.5);
        music.play();
    }


    private function titleSetup():Void
    {
        cloudsFG.yPos += 5;
        title = new FlxSprite(0, FlxG.height * 0.28);
        //title.loadGraphic("assets/title.png", false, false, 260, 21);
        title.loadGraphic("assets/dragondestiny.png", false, false, 278, 21);

        title.x = (FlxG.width - title.width) * 0.5;
        add(title);


        subtitle = new FlxSprite(0, title.y + title.height + 29);
        //subtitle.loadGraphic("assets/destiny.png", false, false, 89, 9);
        subtitle.loadGraphic("assets/forever.png", false, false, 93, 9);
        subtitle.x = (FlxG.width - subtitle.width) * 0.5;
        subtitle.alpha = 0;
        add(subtitle);

        loadScore();
    }

    private function gameStart():Void
    {
        FlxG.camera.flash(0x000000,0.5);

        //dragon = new DragonHead(Global.dragonHeadX,80, numBodies, dbLast);
        dragon = new DragonHead(-50,80, numBodies, dbLast);
        head.add(dragon);

	    dragonBodies = [];
	    addBody(numBodies);


	    addWalls();
	    setupUI();
	    addTutorial();
    }

    var tutorialHand:Hand;
    var tutorialLines:FlxSprite;
    var tutorial:Bool = true;
    private function addTutorial():Void
    {

	    tutorialLines = new FlxSprite(FlxG.width - 51, 0);
        tutorialLines.loadGraphic("assets/instructions.png", false, false, 12, 82);
        tutorialLines.y = (FlxG.height - tutorialLines.height) * 0.5;
        tutorialLines.alpha = 0.9;
        add(tutorialLines);

        tutorialHand = new Hand(FlxG.width - 48, FlxG.height * 0.5 - 2);
        add(tutorialHand);
    }

    private function dragonAdvances():Void
    {
        dragon.x += 1;
        for (i in 0...dragonBodies.length)
        {
            dragonBodies[i].x += 1;
        }
    }


	private function setupUI():Void
	{
        scoreTxt = new FlxText(0, 4, FlxG.width, "0", 20, true);
        scoreTxt.alignment = "center";
        scoreTxt.color = 0xffffff; //0xf5f40b;
        scoreTxt.font = "assets/visitor.ttf";
        scoreTxt.setBorderStyle(2, 0x000000, 1, 1);
    	add(scoreTxt);


    	if (wiggle)
    	{
            FlxG.camera.width += 40;
            FlxG.camera.height += 40;
            FlxG.camera.x -= 20;
            FlxG.camera.y -= 20;
        }
	}

	private function addBody(num:Int = 3):Void
	{
        for (i in 0...num)
        {
            dragonBodies.push(new DragonBody(dragon.x - (i * dbDistance) - dbDistance, dragon.y));
            dragonBodies[i].position = (i * dbLast) + dbLast;
            body.add(dragonBodies[i]);
        }

	}


	private function addClouds(num:Int = 50):Void
	{
	    clouds = [];
        for (i in 0...num)
        {
            clouds.push(new Cloud((Math.random() * FlxG.width + 20) - 10, (Math.random() * FlxG.height + 20) - 10));
            if (clouds[i].type == 0)
                one.add(clouds[i]);
            if (clouds[i].type == 1)
                two.add(clouds[i]);
            if (clouds[i].type == 2)
                three.add(clouds[i]);
        }

	}


	private function addStars(num:Int = 50):Void
	{
	    stars = [];
        for (i in 0...num)
        {
            stars.push(new Star((Math.random() * FlxG.width + 20) - 10, (Math.random() * FlxG.height + 20) - 10));
            space.add(stars[i]);
        }

	}

	private function addWalls():Void
	{
	    wallsTop = [];
	    wallsBottom = [];
	    last = FlxG.height * 0.5;

        numWalls = Math.ceil(FlxG.width / wallSpacing);

        for (i in 0...numWalls)
        {
            wallsTop.push(new Wall(FlxG.width + fp + (i * wallSpacing) + 300, (FlxG.height * 0.5) - spaceSize - 160));
            wallsBottom.push(new Wall(FlxG.width + fp + (i * wallSpacing) + 300, (FlxG.height * 0.5) + spaceSize, false));

            walls.add(wallsTop[i]);
            walls.add(wallsBottom[i]);

            change = Calculations.plusOrMinus(Math.random() * maxStep);
            if (last + change > FlxG.height - spaceSize || last + change < spaceSize)
                change *= -1;
            last = last + change;
            wallsTop[i].y = last - spaceSize - 160;
            wallsBottom[i].y = last + spaceSize;
            spaceSize = spaceSizeMin  + (Math.random() * spaceSizeRange);
        }

	}


	override public function update():Void {
		super.update();

		if (Global.title)
		{
		    gameStartButton();
		    return;
	    }

	    wallPlacer();

        if (!Global.gameOver) {
		    FlxG.overlap(dragon, walls, touchWall);
		    scoreTxt.text = Std.string(Global.total);
		}
		if (Global.gameOver)
		{
		    if (!showScore)
		        showScores();
		    Global.speed *= 0.97;
		    if (Global.speed < 5 && FlxG.mouse.justReleased)
		    {
                FlxG.switchState(new PlayState());
            }
		}

        if (dragon.y <= FlxG.height)
		    cloudYmove();

        if (dragon.x < Global.dragonHeadX)
            dragonAdvances();

        if (tutorial)
        {
            if (tutorialHand.timer > 100)
                {
                    tutorialHand.alpha -= 0.02;
                    tutorialLines.alpha -= 0.02;
                }
            if (tutorialHand.alpha <= 0)
                {
                    tutorialHand.destroy();
                    tutorialLines.destroy();
                }
        }

		//dumbEffects();
	}

	private function showScores():Void
	{
	    showScore = true;

    	scoreTxt.alpha = 0;

	    var scoreTitle:FlxSprite = new FlxSprite(0, FlxG.height * 0.24);
	    if (Global.total <= Global.best)
            scoreTitle.loadGraphic("assets/currentscore.png", false, false, 102, 5);
	    if (Global.total > Global.best)
            scoreTitle.loadGraphic("assets/newtopscore.png", false, false, 107, 5);
        scoreTitle.x = (FlxG.width - scoreTitle.width) * 0.5;
        add(scoreTitle);

        lastScore = new FlxText(0, scoreTitle.y + 5, FlxG.width, Std.string(Global.total), 80, true);
        lastScore.alignment = "center";
        lastScore.color = 0xffffff;
        lastScore.font = "assets/visitor.ttf";
    	add(lastScore);

        if (Global.total > Global.best) {
    	    Global.best = Global.total;
            saveScore();
            return;
        }

	    var bestScoreTitle:FlxSprite = new FlxSprite(0, scoreTitle.y + 98);
        bestScoreTitle.loadGraphic("assets/topscore.png", false, false, 70, 5);
        bestScoreTitle.x = (FlxG.width - bestScoreTitle.width) * 0.5;
        add(bestScoreTitle);

        bestScore = new FlxText(0, bestScoreTitle.y + 9, FlxG.width, Std.string(Global.best), 20, true);
        bestScore.alignment = "center";
        bestScore.color = 0xffffff;
        bestScore.font = "assets/visitor.ttf";
    	add(bestScore);
	}

    var hdiff:Float = 0;
    var yAdder:Float = 12;
	private function cloudYmove():Void
	{
	    hdiff = (FlxG.height - dragon.y)/FlxG.height;

	    cloudsFG.yPos = cloudsFG.initialY + (20 * hdiff) - 12 * hdiff;
	    cloudsMG.yPos = cloudsMG.initialY - (0 * hdiff) - 10 * hdiff;
	    cloudsBG.yPos = cloudsBG.initialY - (7 * hdiff) - 8 * hdiff;
	    if (Global.gameOver && yAdder > 0)
	    {
	        cloudsBG.initialY += 0.12;
	        yAdder -= 0.12;
	    }


	}

    var destinyTimer:Int = 30;
	private function gameStartButton():Void
	{
	    destinyTimer--;
	    if (subtitle.alpha < 0.30 && destinyTimer <= 0)
	    {
	        subtitle.alpha += 0.004;
	        subtitle.y -= .3 - subtitle.alpha;
	    }
        if (FlxG.mouse.justReleased)
        {
            title.destroy();
            subtitle.destroy();
            FlxG.camera.flash(0x000000,0.5);
            Global.title = false;
            gameStart();
	    }
	}

	private function dumbEffects():Void
	{
        if (lightning)
        {
            lightningTimer --;
            if (lightningTimer < -4)
            {
                 lightningTimer = Std.int(Math.random() * maxLightningTime);
                 FlxG.cameras.bgColor = 0xff000000;
            }
            if (lightningTimer == 0)
            {
                FlxG.cameras.bgColor = 0xffffffff;
            }
        }

        if (wiggle)
            {
            if (FlxG.camera.angle < angleMax * -1 && angleDir < 0)
                angleDir *= -1;
            if (FlxG.camera.angle > angleMax && angleDir > 0)
                angleDir *= -1;

            angleSpeed += angleChange * angleDir;
            FlxG.camera.angle += angleSpeed;

            if (FlxG.camera.angle < angleMax * -1)
                FlxG.camera.angle += angleChange * 4;

            if (FlxG.camera.angle > angleMax)
                FlxG.camera.angle -= angleChange * 3;
            }
	}


    private function wallPlacer():Void
    {
        for (i in 0...wallsTop.length)
                {
                    if (wallsTop[i].x < -40)
                    {
                        if (i != 0) {
                            wallsTop[i].x =  wallsTop[i-1].x +  wallSpacing;
                            wallsBottom[i].x =  wallsTop[i].x;
                        }
                        if (i == 0) {
                            wallsTop[i].x =  wallsTop[wallsTop.length - 1].x +  wallSpacing;
                            wallsBottom[i].x =  wallsTop[i].x;
                        }
                        change = Calculations.plusOrMinus(Math.random() * maxStep);
                        if (last + change > FlxG.height - spaceSize || last + change < spaceSize)
                            change *= -1;
                        last = last + change;
                        wallsTop[i].y = last - spaceSize - 160;
                        wallsBottom[i].y = last + spaceSize;
                        spaceSize = spaceSizeMin  + (Math.random() * spaceSizeRange);

                        speedUp();
                    }
                }
    }


    var oldSpeedWay:Bool = false;
    var speedRatio:Float = 0;

    private function speedUp():Void {
        if (Global.total > 40)
            return;

        Global.speed += speedUpRate;


        if (!oldSpeedWay)
        {
            dragon.speed += .15;
            dragon.maxSpeed += 1;

            // adds speed to clouds
            if (!Global.gameOver)
            {
                speedRatio = Global.speed / Global.initialSpeed;
                cloudsFG.speed = cspeed[2] * speedRatio;
                cloudsMG.speed = cspeed[1] * speedRatio;
                cloudsBG.speed = cspeed[0] * speedRatio;
            }

        }
        else // old
        {
            dbLast += Std.int((Global.dbLast/(Global.initialSpeed * 0.75)) * speedUpRate);
            dragon.speed = 4 + dbLast;
        }
	}


    private function touchWall(d:FlxSprite, wall:FlxSprite):Void {
	    Global.gameOver = true;
	    //FlxG.play("bump1",0.5,true);

		FlxG.sound.play("assets/sfx/bump2_edit2.wav", 1, false); //bump2_edit2 //bump3 //bump2_combo

	    for (i in 0...dragonBodies.length)
	    {
	        dragonBodies[i].breakBody();
	    }
	    dragon.breakHead();
	}

	private var so:SharedObject;
    private function saveScore():Void
    {
    	so = SharedObject.getLocal( "FlappyDragonSave" );

    	so.data.best = Global.best;

    	// Prepare to save.. with some checks
    	#if ( cpp || neko )
    			// Android didn't wanted SharedObjectFlushStatus not to be a String
    			var flushStatus:SharedObjectFlushStatus = null;
    	#else
    	// Flash wanted it very much to be a String
    			var flushStatus:String = null;
    	#end

    	try
    	{
    		flushStatus = so.flush() ;      // Save the object
    	}
    	catch ( e:Dynamic )
    	{
    		//trace("couldnt write...");
    	}

    	if ( flushStatus != null )
    	{
    		switch( flushStatus )
    		{
    			case SharedObjectFlushStatus.PENDING:
    				//trace('requesting permission to save');
    			case SharedObjectFlushStatus.FLUSHED:
    				//trace('value saved');
    		}
    	}
    }


	private function loadScore():Void
	{
		so = SharedObject.getLocal( "FlappyDragonSave" );
		if (so.data.best == null)
		{
			so.data.best = 0;
			Global.best = 0;
		}
        else
        {
		    Global.best = so.data.best;
		}
	}

}