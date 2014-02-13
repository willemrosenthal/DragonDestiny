package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class LevelButton extends Button
{

    public var plusState:Bool = true;
    public var level:String = "";

	public function new(X:Float, Y:Float, Level:String)
	{
		super(X, Y);

		loadGraphic("assets/levels.png", true, false, 53,53);
		animation.add("spring", [0]);
		animation.add("fall", [1]);
		animation.add("summer", [2]);
		animation.add("winter", [3]);
		animation.add("lake", [4]);
		animation.add("magic", [5]);

		level = Level;

		if (level == "spring1")
		    animation.play("spring");
		if (level == "fall1")
		    animation.play("fall");
		if (level == "summer1")
		    animation.play("summer");
		if (level == "winter")
		    animation.play("winter");
		if (level == "lake")
		    animation.play("lake");
		if (level == "magic")
		    animation.play("magic");
	}


	override public function update():Void
	{
		super.update();

        if (released && visible && Global.UIopen) {
            Global.UIopen = false;
            FlxG.switchState(new PlayState(level));
        }
	}
}