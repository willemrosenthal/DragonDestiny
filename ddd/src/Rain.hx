package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Rain extends WeatherParticle
{

    var timer:Int = 0;
    var timerMax:Int = 130;

	public function new(X:Float, Y:Float, Spd:Float = 20)
	{
		super(X, Y);


        if (Math.random() < 0.75)
		    loadGraphic("assets/fall/rain1.png", false, false, 8,16);
        else loadGraphic("assets/fall/rain2.png", false, false, 16,32);

        velocity.y = 2 * Spd;
        velocity.x = -1 * Spd;

        timer = Math.round(Math.random() * timerMax);
		moves = true;
	}



	override public function update():Void
	{
		super.update();

		if (onScreen(FlxG.camera)) {
		    timer++;
		    if (timer >= timerMax) {
			    visible = false;
			    timer = Math.round(Math.random() * timerMax) + 5;
			}
		}
		else if (!visible)
		    visible = true;
	}


}