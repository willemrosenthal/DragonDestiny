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
    }

	override public function create():Void {

	    space = new FlxGroup();
	    add(space);
	    addStars(45);

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
        csa = [FlxG.height * 0.6,FlxG.height * 0.65,FlxG.height * 0.75];

        //cspeed = [-25, -50, -75];
        cspeed = [-25, -75, -125];

        cloudsBG = new Parallax(csa[0],"assets/clouds/cloud_back.png",156,80);
        cloudsBG.speed = cspeed[0];
        add(cloudsBG);

        cloudsMG = new Parallax(csa[1],"assets/clouds/cloud_mid.png",134,70);
        cloudsMG.speed = cspeed[1];
        add(cloudsMG);

        cloudsFG = new Parallax(csa[2],"assets/clouds/cloud_front.png",132,80);
        cloudsFG.speed = cspeed[2];
        add(cloudsFG);

	    blur = new FlxGroup();
	    add(blur);
	    Global.blur = blur;

	    body = new FlxGroup();
	    add(body);

		//FlxG.cameras.bgColor = 0x11000000;
	    Global.game = this;


        dragon = new DragonHead(Global.dragonHeadX,80, numBodies, dbLast);
        add(dragon);

	    dragonBodies = [];
	    addBody(numBodies);

        //stars = new Stars(dragon.x, dragon.y);
        //add(stars);

	    walls = new FlxGroup();
	    add(walls);

	    wallsTop = [];
	    wallsBottom = [];
	    addWalls();

	    setupUI();

	    // speed up for testing
	    /*
	    for (i in 0...35){
	        speedUp();
	    }
	    */
	}


	private function setupUI():Void
	{
        scoreTxt = new FlxText(0, 4, FlxG.width, "0", 16);
        scoreTxt.alignment = "center";
        scoreTxt.color = 0xf5f40b;
        scoreTxt.setBorderStyle(2, 0x000000, 1, 1);
    	add(scoreTxt);


    	if (wiggle)
    	{
            FlxG.camera.width += 40;
            FlxG.camera.height += 40;
            FlxG.camera.x -= 20;
            FlxG.camera.y -= 20;
        }

        //FlxG.worldBounds = new FlxRect(0, 0, map.width, map.height);
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
	    last = FlxG.height * 0.5;

        numWalls = Math.ceil(FlxG.width / wallSpacing);

        for (i in 0...numWalls)
        {
            wallsTop.push(new Wall(FlxG.width + fp + (i * wallSpacing), (FlxG.height * 0.5) - spaceSize - 160));
            wallsBottom.push(new Wall(FlxG.width + fp + (i * wallSpacing), (FlxG.height * 0.5) + spaceSize, false));

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
	    wallPlacer();

        if (!Global.gameOver) {
		    FlxG.overlap(dragon, walls, touchWall);
		    scoreTxt.text = Std.string(Global.total);
		}
		if (Global.gameOver)
		{
		    Global.speed *= 0.97;
		    if (Global.speed < 5 && FlxG.mouse.justReleased)
                FlxG.switchState(new PlayState());
		}

        if (dragon.y <= FlxG.height)
		    cloudYmove();

		//dumbEffects();
	}

    var hdiff:Float = 0;
	private function cloudYmove():Void
	{
	    hdiff = (FlxG.height - dragon.y)/FlxG.height;

	    cloudsFG.yPos = cloudsFG.initialY + (20 * hdiff);
	    cloudsMG.yPos = cloudsMG.initialY - (10 * hdiff);
	    cloudsBG.yPos = cloudsBG.initialY - (25 * hdiff);
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

    private function speedUp():Void {
        if (Global.total > 40)
            return;

        Global.speed += speedUpRate;


        if (!oldSpeedWay)
        {
            dragon.speed += .15;
            dragon.maxSpeed += 1;
        }
        else // old
        {
            dbLast += Std.int((Global.dbLast/(Global.initialSpeed * 0.75)) * speedUpRate);
            dragon.speed = 4 + dbLast;
        }
	}


    private function touchWall(d:FlxSprite, wall:FlxSprite):Void {
	    Global.gameOver = true;
	    for (i in 0...dragonBodies.length)
	    {
	        dragonBodies[i].breakBody();
	    }
	    dragon.breakHead();
	}



}