package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Star extends WeatherParticle
{

    var speedArray:Array<Float>;
    var alphaArray:Array<Float>;
    var scaleArray:Array<Float>;
    var speed:Float = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/star.png", false, false, 1,1);

		moves = true;
        stickToScreen = true;

        speedArray = [-200,-125,-50];
        alphaArray = [1,0.7,0.33,0.5,0.2];
        scaleArray = [1,2];

        var type:Int = Std.int(Math.round(Math.random() * (speedArray.length - 1)));
        speed = speedArray[type];
        alpha = alphaArray[type];

        type = Std.int(Math.round(Math.random() * (scaleArray.length - 1)));
        scale.x = scaleArray[type];
        scale.y = scale.x;
	}


	override public function update():Void
	{
		super.update();

		velocity.x = speed;
	}
}