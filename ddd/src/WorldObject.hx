package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class WorldObject extends FlxSprite
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);
	}

    private function onlyOnTheseTiles(X:Float, Y:Float, ta:Array<Int>):Bool {
        if (ta.length == 0)
              return false;
        var loc:Int = Global.cMap.getTile(Math.floor(X/16),Math.floor(Y/16));

        for (t in ta) {
                if( t == loc ) {
                    return true;
                }
            }
        return false;
    }

}