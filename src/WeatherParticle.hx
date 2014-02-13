package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class WeatherParticle extends FlxSprite
{

    public var stickToScreen = false;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
	}


	override public function update():Void
	{
		super.update();

        if (stickToScreen) {
            if (x < -10)
                x = FlxG.width + 10;
            if (x > FlxG.width + 10)
               x = -10;
            if (y > FlxG.height + 10)
                y = -10;
            if (y < -10)
                y = FlxG.height + 10;
        }

        if (!stickToScreen) {
            if (x < -10)
                 x = FlxG.width + 10;
            if (y < -10)
                 y = FlxG.height + 10;
            if (y > FlxG.height + 10)
                 y = -10;
		}
	}
}