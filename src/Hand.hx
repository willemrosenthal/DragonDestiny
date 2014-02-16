package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;

class Hand extends FlxSprite
{
    public var timer:Int = 0;
    private var speed:Float = 8;
    private var startY:Float = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		loadGraphic("assets/finger.png", false, false, 14,17);
		startY = y;
		y += 20;
		origin.y -= 7;
		moves = true;
	}

	override public function update():Void
	{
		super.update();

        timer++;

        if (y < startY)
            velocity.y += speed;
        if (y > startY)
            velocity.y -= speed;

		angle =  velocity.y * -0.2 - 35;
	}
}