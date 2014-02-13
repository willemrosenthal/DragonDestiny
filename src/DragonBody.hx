package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;

class DragonBody extends FlxSprite
{
	public var position:Int = 0;

	private var bTimer:Int = 0;

	private var broken:Bool = false;


	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/dragon_body.png", false, false, 15,15);

        //offset.y += height * 0.5;
        //offset.x += width * 0.5;
	}

	override public function update():Void {
		super.update();

		if (broken)
		    return;

	    y =  Global.posY[position];
        /*
        if (bTimer == Global.blurEmitSpeed) {
           Global.blur.add(new DragonCarcass(x,y));
           bTimer = 0;
        }
        bTimer++;
        */

	}

	public function breakBody():Void {
	    broken = true;
	    acceleration.y = 300;
        acceleration.x = 50;
        maxVelocity.y = 500;
        maxVelocity.x = 200;
        velocity.x = Math.random() * 180 + Math.random() * -50;
        velocity.y = Math.random() * -220 + Math.random() * 50;
	}
}