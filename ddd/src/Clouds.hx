package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Clouds extends WeatherParticle
{

    var timer:Int = 0;
    var timerMax:Int = 50;

	public function new(X:Float, Y:Float, Spd:Float = 20)
	{
		super(X, Y);


		loadGraphic("assets/fall/cloud_big.png", false, false, 469,251);
		//loadGraphic("assets/fall/cloud.png", false, false, 183,128);

        velocity.y = 2 * Spd;
        velocity.x = -1 * Spd;

		moves = true;
	}
}