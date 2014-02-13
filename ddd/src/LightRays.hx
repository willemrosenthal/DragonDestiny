package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class LightRays extends FlxSprite
{
    private var timer:Float = 0;
    private var alphaChange:Float = 0.01;
    private var up:Bool;

	public function new(X:Float, Y:Float, Type:Int = 0)
	{
		super(X, Y);

		var image:String = "assets/summer/rays1.png";
		if (Type == 1) {
			image = "assets/summer/rays2.png";
			timer = 0.5 / alphaChange;
		}

	    loadGraphic(image, false, false, 808,227);

		moves = false;
		immovable = true;
	}

	override public function update():Void
	{
		super.update();
		if (timer > 0) {
		    timer--;
		    return;
		}
		if (up) {
		    alpha += alphaChange;
		    if (alpha >= 1)
		        up = false;
		}
		if (!up) {
		    alpha -= alphaChange;
		    if (alpha <= 0)
		        up = true;
		}
	}
}