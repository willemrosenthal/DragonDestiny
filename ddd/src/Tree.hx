package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.util.FlxRect;

class Tree extends FlxSprite
{

    public var tree:String;

	public function new(X:Float, Y:Float, Type:Array<String>)
	{
		super(X, Y);


		var image:String = "";

		tree = Type[Math.round(Math.random() * (Type.length - 1))];

		var lr:FlxRect = Global.cMap.getBounds();

		if (tree == "summer1") {
			image = "assets/tree_green.png";
			if (Math.random()<0.5)
				image = "assets/tree_orange.png";
			loadGraphic(image, false, false, 28,52);
		}
		if (tree == "cherry") {
			image = "assets/spring/cherry_tree_big.png";
			loadGraphic(image, false, false, 65,74);
			//loadGraphic(image, false, false, 43,49);
		}
		if (tree == "cattail1") {
			image = "assets/fall/cattail1.png";
			loadGraphic(image, false, false, 10,41);
			while (!onlyOnTheseTiles(x,y,Global.waterTiles))  {
			    x = Math.random()*lr.width + lr.x;
			    y = Math.random()*lr.height + lr.y;
			}
		}
		if (tree == "cattail2") {
			image = "assets/fall/cattail2.png";
			loadGraphic(image, false, false, 8,41);
			while (!onlyOnTheseTiles(x,y,Global.waterTiles))  {
			    x = Math.random()*lr.width + lr.x;
			    y = Math.random()*lr.height + lr.y;
			}

		}
		if (tree == "palm") {
			image = "assets/summer/palm2.png";
			loadGraphic(image, false, false, 62,67);
			while (!onlyOnTheseTiles(x,y,Global.groundSetA) || !onlyOnTheseTiles(x+16,y,Global.groundSetA)) {// && x > FlxG.worldBounds.width * .8 && onlyOnTheseTiles(x,y,Global.waterTiles))  {
			    x = Math.random()*lr.width + lr.x;
			    y = Math.random()*lr.height + lr.y;
			}
		}

		//scale= new FlxPoint(1.5,1.5);
		offset.y += height;
		offset.x += width * 0.5;


		moves = false;
		immovable = true;
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

	override public function update():Void
	{
		super.update();
	}
}