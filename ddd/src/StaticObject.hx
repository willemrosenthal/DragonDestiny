package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class StaticObject extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		scale.x = 2;
		scale.y = 2;
		loadGraphic("assets/ball.png", false, false, 32,32);
		alpha = 0.5;


        moves = false;
	}
}