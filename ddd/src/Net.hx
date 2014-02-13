package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Net extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		loadGraphic("assets/net.png", false, false, 30,240);

        y -= height;
        x -= width * 0.5;
        moves = false;
		immovable = true;
	}
}