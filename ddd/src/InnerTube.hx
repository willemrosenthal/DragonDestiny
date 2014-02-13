package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.util.FlxRect;

class InnerTube extends WorldObject
{

    public var bounce:Float;
    private var sink:Bool;

	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		loadGraphic("assets/summer/inner_tube.png", true, false, 23,16);
		animation.add("float", [0,1], 2);
		animation.add("dry", [2]);

		offset.y += 3;

		var lr:FlxRect = Global.cMap.getBounds();


        /*
		while (!onlyOnTheseTiles(x,y,Global.waterTiles))  {
		    x = Math.random()*lr.width + lr.x;
		    y = Math.random()*lr.height + lr.y;
		}
		*/

        bounce = Math.random() * 0.3 + 0.3;

		animation.play("float");
		moves = true;
	}


	override public function update():Void
	{
		super.update();
		velocity.x *= 0.997;
		velocity.y *= 0.997;

		if (x < -10)
		    velocity.x = 30;
		if (x > FlxG.worldBounds.width - width * 0.5)
		    velocity.x = -30;
		if (y < -10)
		    velocity.y = 30;
		if (y > FlxG.worldBounds.height - height * 0.5)
		    velocity.y = -30;

		swimCheck();
	}

    var loc:Int;
    private function swimCheck():Void {
        if (Global.waterTiles.length == 0)
            return;
        loc = Global.cMap.getTile(Math.floor((x+13)/16),Math.floor((y+8)/16));

        for (t in Global.waterTiles) {
            if( t == loc ) {
                sink = true;
                break;
            }
            sink = false;
        }
        if (sink)
            animation.play("float");
        if (!sink) {
            animation.play("dry");
            velocity.x *= 0.90;
            velocity.y *= 0.90;
         }

    }


}