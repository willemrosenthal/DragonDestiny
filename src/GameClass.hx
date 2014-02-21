package;

import flash.Lib;
import flixel.FlxGame;
import flixel.FlxG;

class GameClass extends FlxGame
{	
	public function new()
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		//var ratioX:Float = stageWidth / 1136;
		//var ratioY:Float = stageHeight / 640;
		//var ratio:Float = Math.min(ratioX, ratioY);
        var scale:Float = 3;

		var ratioX:Float = stageWidth / (1136/scale);
		var ratioY:Float = stageHeight / (640/scale);
		var ratio:Float = Math.min(ratioX, ratioY);

		Global.ratio = ratio;
		var fps:Int = 60;

		super(Math.ceil(stageWidth / ratio), Math.ceil(stageHeight / ratio), PlayState, ratio, fps, fps, true);

		//FlxG.debugger.visualDebug = true;   // dont forget to turn debugging on in the nmml file!!!
	}
}