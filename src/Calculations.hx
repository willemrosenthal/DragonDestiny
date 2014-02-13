package ;
import flixel.util.FlxPoint;
import flixel.FlxG;

class Calculations {

	static public function plusOrMinus(Value:Float=1):Float
	{
		return ((Math.round(Math.random()) * 2) - 1) * Value;
	}



	public function new() {

	}
}
