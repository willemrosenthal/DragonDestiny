package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;

class DragonCarcass extends FlxSprite
{
	public var mSpeed:Float;
	public var fSpeed:Float;


	public function new(X:Float, Y:Float, Head:Bool = false, Angle:Float = 0, ScaleX:Float = 1, ScaleY:Float = 1)
	{
		super(X, Y);

		mSpeed = Global.dragSpeed;
		fSpeed = Global.fadeSpeed;

		alpha = 0.5;
		scale.x = ScaleX;
		scale.y = ScaleY;

		angle = Angle;

        if (Head)
            loadGraphic("assets/dragon_head.png", false, false, 34,18);
		else {loadGraphic("assets/dragon_body.png", false, false, 15,15);}

        offset.y += height * 0.5;
        offset.x += width * 0.5;
	}


	override public function update():Void {
		super.update();
	    x -= mSpeed;
	    alpha -= fSpeed;

	    if (alpha < 0.2)
	        destroy();
	}
}