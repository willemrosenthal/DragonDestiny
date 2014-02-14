package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Cloud extends FlxSprite
{

    public var speed:Float = 0;
    public var xVariation:Float = 200;
    public var type:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		//loadGraphic("assets/cloud.png", false, false, 160,32);
		loadGraphic("assets/cloud_big.png", false, false, 192,64);
		//loadGraphic("assets/cloud_big_line.png", false, false, 192,64);

        moves = true;

        var speedArray:Array<Float> = [-240,-160,-80];
        var colorArray:Array<Int> = [0x244976,0x133149,0x0c1a26];
        //colorArray = [0x00eeff,0x00eeff,0x00eeff];
        colorArray = [0x00000,0x00000,0x00000];
        var alphaArray:Array<Float> = [1,0.7,0.33,0.5,0.2];
        var scaleArray:Array<Float> = [1,2];

        type = Std.int(Math.round(Math.random() * (speedArray.length - 1)));
        speed = speedArray[type];
        color = colorArray[type];
        //alpha = alphaArray[type];

        //type = Std.int(Math.round(Math.random() * (scaleArray.length - 1)));
        //scale.x = scaleArray[type];
        //scale.y = scale.x;

        speed *= 0.25;
	}


	override public function update():Void
	{
		super.update();

        if (x + width < -10 && speed < 0) {
            x = FlxG.width + Math.random() * xVariation;
            y = Math.random() * FlxG.height;
            }

        if (x > FlxG.width + 10 && speed > 0) {
            x = Math.random() * xVariation * -1 + width;
            y = Math.random() * FlxG.height;
            }

        x += speed * FlxG.elapsed;

        /*
        if (y < -10)
            y = FlxG.height + 10;
        if (y > FlxG.height + 10)
            y = -10;
        */

	}
}