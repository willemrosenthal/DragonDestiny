package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class CollideShadow extends FlxSprite
{
    private var type:String;

	public function new(X:Float, Y:Float, Type:String)
	{
		super(X, Y);

        type = Type;

		var image:String = "";
		if (Type == "summer") {
			image = "assets/tree_green.png";
			if (Math.random()<0.5)
				image = "assets/tree_orange.png";
			loadGraphic(image, false, false, 28,52);
		}
		if (Type == "cherry") {
			image = "assets/spring/tree_shadow.png";
			loadGraphic(image, false, false, 17,9);
		}
		if (Type == "cattail1" || Type == "cattail2") {
			image = "assets/fall/cattail_shadow_still.png";  //assets/fall/cattail_shadow.png
			loadGraphic(image, true, false, 6,4);
		    //animation.add("flow",   [0, 1], 1);
		    //animation.play("flow");
		}
		if (Type == "palm") {
			image = "assets/summer/palm_shadow.png";
			loadGraphic(image, false, false, 19,8);
		}

		x -= width * 0.5;
		y -= height * 0.5;

        adjustments();

		moves = false;
		immovable = true;
	}

    private function adjustments():Void {
		if (type == "palm") {
			//y -= 1;
		}
    }

	override public function update():Void
	{
		super.update();
	}
}