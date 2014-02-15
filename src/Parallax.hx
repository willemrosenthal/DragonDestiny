package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxBasic;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.group.FlxGroup;

class Parallax extends FlxGroup
{
	public var image:String = "";
    public var speed:Float = -10;
    public var iWidth:Int;
    public var iHeight:Int;
    public var yPos:Float;
    public var initialY:Float;

    // overlaps the pieces a bit to prevent gaps
    public var safety:Float = 2;

    private var totalWide:Int;
    private var pieces:Array<FlxSprite>;


	public function new(Y:Float, Image:String, Width:Int, Height:Int)
	{
		super();

		yPos = Y;
        image = Image;
        iWidth = Width;
        iHeight = Height;

        initialY = Y;

        buildRow();
	}


	private function buildRow():Void
	{
        pieces = [];

        totalWide = Math.ceil((FlxG.width + safety) / iWidth) + 1;

        for (i in 0...totalWide)
        {
            pieces.push(new FlxSprite(i * iWidth - i * safety, yPos));
            pieces[i].loadGraphic(image, false, false, iWidth, iHeight);
            add(pieces[i]);
        }
	}

	override public function update():Void {
		super.update();
	    //forEach(move);

	    scroll();
	}


	private function scroll():Void
	{
	    for (i in 0...pieces.length)
	    {
	        pieces[i].x += speed * FlxG.elapsed;
	        pieces[i].y = yPos;
	    }

	    for (i in 0...pieces.length)
	    {
	        if (pieces[i].x + iWidth <= 0)
	        {
	            if (i > 0)
	                pieces[i].x = pieces[i - 1].x + iWidth - safety;
	            if (i == 0)
	                pieces[i].x = pieces[pieces.length - 1].x + iWidth - safety;
	        }
	    }
	}


    /*
    var m:FlxSprite;
	private function move(member:FlxBasic):Void
	{
	    m = cast(member, FlxSprite);
	    m.x += speed * FlxG.elapsed;
	    if (m.x + iWidth <= 0)
	        m.x =
	}
	*/
}