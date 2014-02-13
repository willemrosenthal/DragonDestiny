package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.util.FlxRect;

class RainDrop extends WeatherParticle
{

    var lr:FlxRect;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		lr = Global.cMap.getBounds();

		loadGraphic("assets/fall/rain_splash.png", false, false, 10,10);

		animation.add("splash",   [3, 0, 1, 2, 3], 8, false);
		animation.add("sw1",      [3, 3], 8, false);
		animation.add("sw2",      [3, 3, 3], 8, false);
		animation.add("sw3",      [3, 3, 3, 3], 8, false);

		var choose:Int = Math.round(Math.random() * 3);
		if (choose == 0)
		   animation.play("splash");
		if (choose == 1)
		   animation.play("sw1");
		if (choose == 2)
		   animation.play("sw2");
		if (choose == 3)
		   animation.play("sw3");

		moves = false;
	}


	override public function update():Void
	{
		super.update();

		if (animation.finished) {
			x = Math.random()*lr.width + lr.x;
			y = Math.random()*lr.height + lr.y;
			animation.play("splash");
		}
	}
}