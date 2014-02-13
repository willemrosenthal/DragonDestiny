package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Music extends FlxSprite
{
    var timer:Int = 0;
    var timerMax:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/music.png", true, false, 8,8);

		animation.add("0", [0]);
		animation.add("1", [1]);
		animation.add("2", [2]);
		animation.add("3", [3]);
		animation.add("4", [4]);
		animation.add("5", [5]);
		animation.add("6", [6]);

		play(Std.string(Math.round(Math.random() * 6)));

        //acceleration.y = 300;
        //acceleration.x = -50;
        //maxVelocity.y = Math.random() * 25 + 10;
        //maxVelocity.x = Math.random() * 15 + 10;

		moves = true;
	}


	override public function update():Void
	{
		super.update();

		if (acceleration.y < 10)
		    acceleration.y +=  Math.random() * 20;

        timer ++;
        if (timer == timerMax) {
           destroy();
        }
	}
}