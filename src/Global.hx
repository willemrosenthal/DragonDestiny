package ;
import flixel.util.FlxPoint;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;

class Global {

	static public var ini:Bool;

	static public var zeroPoint:FlxPoint;

	static public var music:String = "";


	static public var gameZoom:Float;
	static public var game:FlxGroup;

    static public var speed:Float = 100;
    static public var initialSpeed:Float = 100;
    static public var dbLast:Int = 4;

    static public var ratio:Float = 3;

	static public var posX:Array<Float> = [];
	static public var posY:Array<Float> = [];

	static public var dragSpeed:Float = 3;
	static public var fadeSpeed:Float = 0.05;
	static public var blurEmitSpeed:Int = 3;
	static public var blur:FlxGroup;

	static public var gameOver:Bool = false;
	static public var total:Int = 0;

    static public var dragonHeadX:Float = 124;

    static public var title:Bool = true;

/*
	static public function playMusic(Music:String):Void
	{
		if (music != Music) {
			FlxG.playMusic(Music);
		}
		music = Music;
	}
	*/


}
