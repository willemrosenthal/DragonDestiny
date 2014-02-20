package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;

class Wall extends FlxSprite
{
	public var count:Bool = false;
	public var top:Bool = false;

	private var bTimer:Int = 0;


	public function new(X:Float, Y:Float, Top:Bool = true)
	{
		super(X, Y);

		top = Top;

		loadGraphic("assets/walls.png", true, false, 32,160);
		//loadGraphic("assets/walls_clear.png", true, false, 32,160);
		//loadGraphic("assets/walls_solid.png", true, false, 32,160);
		animation.add("puff", [0,1,2,2,1,0],12);
		animation.play("puff");
		height -= 10;
		offset.y += 5;
	}

	override public function update():Void {
		super.update();
	    x -= Global.speed * FlxG.elapsed;
	    if (top)
	    {
            if (x < Global.dragonHeadX && !count && !Global.gameOver)
            {
                count = true;
                Global.total ++;
		        FlxG.sound.play("assets/sfx/point.wav", 0.08, false); //6 //7 //8
            }
            if (x > Global.dragonHeadX && count)
                count = false;
        }
	}
}