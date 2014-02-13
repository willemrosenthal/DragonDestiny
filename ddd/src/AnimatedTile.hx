package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class AnimatedTile extends FlxSprite
{
	public function new(X:Float, Y:Float, Type:Int, Level:String)
	{
		super(X, Y);

		var image:String = "";
		if (Level == "fall1") {
            if (Type == 43) {
                image = "assets/fall/water/water_anim1.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0, 1, 2, 1], 2);
            }
            if (Type == 48) {
                image = "assets/fall/water/water_anim_lf_rt.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0, 2, 4, 2], 2);
            }
            if (Type == 49) {
                image = "assets/fall/water/water_anim_lf_rt.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1, 3, 5, 3], 2);
            }
            if (Type == 55) {
                image = "assets/fall/water/water_anim_ends.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0, 2, 4, 2], 2);
            }
            if (Type == 56) {
                image = "assets/fall/water/water_anim_ends.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1, 3, 5, 3], 2);
            }
		}
		if (Level == "summer1") {
            if (Type == 38) {
                image = "assets/summer/wave.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,1,2,3,4,5,6,7,8,9,10,11,12,12,13,14,15,16,17,18,19,20,21,22,23,24,25,25], 5);
            }

            // down
            if (Type == 42) {
                image = "assets/summer/wave_corner_dn.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,2,4,6,8,10,12,14,16,18,20,22,24,24,26,28,30,32,34,36,38,40,42,44,46,48,50,50], 5);
            }
            if (Type == 41) {
                image = "assets/summer/wave_corner_dn.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1,3,5,7,9,11,13,15,17,19,21,23,25,25,27,29,31,33,35,37,39,41,43,45,47,49,51,51], 5);
            }
            if (Type == 40) {
                image = "assets/summer/wave_inner_dn.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,2,4,6,8,10,12,14,16,18,20,22,24,24,26,28,30,32,34,36,38,40,42,44,46,48,50,50], 5);
            }
            if (Type == 43) {
                image = "assets/summer/wave_inner_dn.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1,3,5,7,9,11,13,15,17,19,21,23,25,25,27,29,31,33,35,37,39,41,43,45,47,49,51,51], 5);
            }

            // up
            if (Type == 46) {
                image = "assets/summer/wave_corner_up.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,2,4,6,8,10,12,14,16,18,20,22,24,24,26,28,30,32,34,36,38,40,42,44,46,48,50,50], 5);
            }
            if (Type == 45) {
                image = "assets/summer/wave_corner_dn.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1,3,5,7,9,11,13,15,17,19,21,23,25,25,27,29,31,33,35,37,39,41,43,45,47,49,51,51], 5);
            }
            if (Type == 44) {
                image = "assets/summer/wave_inner_up.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,2,4,6,8,10,12,14,16,18,20,22,24,24,26,28,30,32,34,36,38,40,42,44,46,48,50,50], 5);
            }
            if (Type == 47) {
                image = "assets/summer/wave_inner_up.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [1,3,5,7,9,11,13,15,17,19,21,23,25,25,27,29,31,33,35,37,39,41,43,45,47,49,51,51], 5);
            }
            if (Type == 48) {
                image = "assets/summer/shimmer1.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,1,2,1], 2);
            }

            // blue water
            if (Type == 51) {
                image = "assets/summer/shimmer2.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,1,2,1], 3);
            }
            if (Type == 49) { // left water
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [0,2,4,6,6,4,2,0], 3);
            }
            if (Type == 57) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [8,10,12,14,14,12,10,8], 3);
            }
            if (Type == 53) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [18,18,20,22,22,20,18,18], 3);
            }
            if (Type == 59) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [24,26,28,30,30,28,26,24], 3);
            }
            if (Type == 55) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [44,44,42,40,40,42,44,44], 3);
            }
            if (Type == 63) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [38,36,34,32,32,34,36,38,], 3);
            }
            if (Type == 61) {
                image = "assets/summer/wave_blue.png";
                loadGraphic(image, true, false, 16,16);
                animation.add("animate",   [52,50,48,46,46,48,50,52], 3);
            }
		}

		animation.play("animate");

		moves = false;
		immovable = true;
	}
}