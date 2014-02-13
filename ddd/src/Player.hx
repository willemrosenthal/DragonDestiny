package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Player extends FlxSprite
{

    public var stickToScreen = false;
    public var friction:Float = -0.8;

    public var maxSpeed:Float = 500;
    public var maxSpeedMod:Float = 0;
    public var speedMulti:Float =  2;

	private var mouseDown:Bool = false;
    private var mouseA:FlxPoint;
    private var mouseB:FlxPoint;
    private var ignoreRange:Float = 10;

    private var jumping:Bool = false;
    public var spiking:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		mouseA = new FlxPoint();
		mouseB = new FlxPoint();

		loadGraphic("assets/red_player.png", true, true, 61,82);
		animation.add("stand", [0]);
		animation.add("jump", [1]);
		animation.add("hit", [2]);

		width = width * scale.x * 2.5;
		height = height * scale.y * 1.75;
		offset.x = width * -0.15;
		offset.y = height * -0.15;

		scale.x = 2;
		scale.y = 2;

		acceleration.y = 500;
        //acceleration.x = -50;
        //maxVelocity.y = 500;
        //maxVelocity.x = 500;

        moves = true;
	}


	override public function update():Void
	{
		super.update();

		if (spiking > 0)
		    spiking --;

        if (Math.abs(velocity.x) < 8)
            velocity.x = 0;
        if (Math.abs(velocity.y) < 8)
            velocity.y = 0;

        if (x < 0 && velocity.x < 0)
            velocity.x = 0;

        if (x > FlxG.width - width * scale.y && velocity.x > 0)
            velocity.x = 0;

        if (y > FlxG.height - height && velocity.y > 0) {
            velocity.y = 0;
            velocity.x = 0;
            y = FlxG.height - height;
            if (spiking == 0)
                animation.play("stand");
            jumping = false;
            }
        if (velocity.y < 0) {
            if (spiking == 0)
                animation.play("jump");
            jumping = true;
            }

        if (Global.playerAtouching == 0)
            fingerControls();
        if (Global.playerAtouching > 0)
            spike();
	}


	private function spike():Void {
	    if (FlxG.mouse.justPressed && !mouseDown)
    	    mouseDown = true;
    	if (FlxG.mouse.justReleased) {
    		animation.play("hit");
    		spiking = 10;
    		}
	}

	private function fingerControls():Void {
	    if (FlxG.mouse.justPressed && !mouseDown) {
    	    mouseDown = true;
    	    mouseA.x = FlxG.stage.mouseX;
    	    mouseA.y = FlxG.stage.mouseY;
    	    }
    	if (FlxG.mouse.justReleased) {
    		mouseDown = false;
    	    mouseB.x = FlxG.stage.mouseX;
    	    mouseB.y = FlxG.stage.mouseY;
    		jump();
    		}

    		trace(FlxG.stage.mouseX);
	}

    private var jumpTo:FlxPoint;
	private function jump():Void {
		jumpTo = Calculations.lineIntersect(mouseA,mouseB,Global.ballLast,Global.ballNow);
		x = jumpTo.x - width * 0.5;
		y = jumpTo.y - height * 0.5;
	}

}