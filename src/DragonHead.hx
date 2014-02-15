package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;

class DragonHead extends FlxSprite
{
	public var maxSpeed:Float = 120;
	public var speed:Float = 8;

	private var maxrot:Float = 50;


	public var music:FlxEmitter;

	private var mouseDown:Bool = false;

	private var bTimer:Int = 0;

    private var lastY:Float;

	private var broken:Bool = false;
	private var brokenSpin:Float = 6;

	public function new(X:Float, Y:Float, NumBodies:Int, FollowDistance:Int)
	{
		super(X, Y);

		lastY = FlxG.height * 0.5;

		Global.posY = new Array();

        // fills array
        while (Global.posY.length < NumBodies * FollowDistance + 1)
        {
            Global.posY.push(y);
        }

		loadGraphic("assets/dragon_head.png", false, false, 34,18);

        //offset.y += height * 0.6;
        //offset.x += width * 0.5;
        scale.x = 1.25;
        scale.y = 1.25;
        width *= 0.7;
        height *= 0.8;
        offset.y += 5;
        offset.x += 5;

	}

	override public function update():Void {
		super.update();

		if (broken)
		{
		    //scale.x *= 1.005;
		    //scale.y = scale.x;
		    angle += brokenSpin;
		    return;
		}


		if (FlxG.mouse.justPressed && !mouseDown)
		    mouseDown = true;
		if (FlxG.mouse.justReleased)
            mouseDown = false;

		if (mouseDown)
		{
            if (y < FlxG.stage.mouseY/Global.ratio)
                velocity.y += speed;

            if (y > FlxG.stage.mouseY/Global.ratio)
                velocity.y -= speed;
            lastY = FlxG.stage.mouseY/Global.ratio;
		}

		else
		{
            if (y < lastY)
                velocity.y += speed;

            if (y > lastY)
                velocity.y -= speed;
		}

		angle =  velocity.y * 0.14;

        if (velocity.y < maxSpeed * -1)
            velocity.y = maxSpeed * -1;
        if (velocity.y > maxSpeed)
            velocity.y = maxSpeed;

		if (velocity.y != 0)
		{
			Global.posY.unshift(y);
			Global.posY.pop();
		}

        /*
        if (bTimer == Global.blurEmitSpeed) {
           Global.blur.add(new DragonCarcass(x,y,true,angle,scale.x,scale.y));
           bTimer = 0;
        }
        bTimer++;
        */
	}


	public function breakHead():Void {
	    broken = true;
	    acceleration.y = 300;
        acceleration.x = 50;
        maxVelocity.y = 500;
        maxVelocity.x = 200;
        velocity.x = Math.random() * 180 + Math.random() * -50;
        velocity.y = Math.random() * -220 + Math.random() * 50;
	}

}