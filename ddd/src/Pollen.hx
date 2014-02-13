package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Pollen extends WeatherParticle
{
    var timer:Int = 0;
    var timerMax:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/spring/pollen.png", false, false, 4,4);

        acceleration.y = 300;
        acceleration.x = -50;
        maxVelocity.y = Math.random() * 25 + 10;
        maxVelocity.x = Math.random() * 15 + 10;

        timerMax = Math.round(Math.random() * 200 + 100);

		moves = true;
	}


	override public function update():Void
	{
		super.update();

		if (acceleration.y < 10)
		    acceleration.y +=  Math.random() * 20;

        timer ++;
        if (timer == timerMax) {
           acceleration.y = Math.random() * -200 - 200;
           acceleration.x = Calcs.plusOrMinus(Math.random() * 80);
           timerMax = Math.round(Math.random() * 200 + 100);
           timer = 0;
        }
	}
}