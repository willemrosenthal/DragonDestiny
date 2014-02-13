package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Button extends FlxSprite
{

    public var mDown = false;
    public var pressed = false;
    public var released = false;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		moves = false;
	}


	override public function update():Void
	{
		super.update();

        released = false;

		if (FlxG.mouse.justPressed && !mDown)
			mDown = true;
		if (FlxG.mouse.justReleased)
			mDown = false;

        if (FlxG.mouse.screenX > x && FlxG.mouse.screenX < x + width && FlxG.mouse.screenY > y && FlxG.mouse.screenY < y + width && mDown)
            pressed = true;

        if (FlxG.mouse.screenX > x && FlxG.mouse.screenX < x + width && FlxG.mouse.screenY > y && FlxG.mouse.screenY < y + width && FlxG.mouse.justReleased)
            released = true;
	}
}