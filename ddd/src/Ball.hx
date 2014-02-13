package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Ball extends FlxSprite
{

    public var stickToScreen = false;
    public var friction:Float = -0.8; //-0.87; //-0.8;

    public var maxSpeed:Float = 1000;
    public var maxSpeedMod:Float = 0;
    public var speedMulti:Float =  3;

	private var mouseDown:Bool = false;
    private var mouseA:FlxPoint;
    private var mouseB:FlxPoint;
    private var ignoreRange:Float = 10;

    public var justHit:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		mouseA = new FlxPoint();
		mouseB = new FlxPoint();

		loadGraphic("assets/ball.png", false, false, 32,32);

		acceleration.y = 600;
        //acceleration.x = -50;
        //maxVelocity.y = 500;
        //maxVelocity.x = 500;

        moves = true;

        Global.ballLast = new FlxPoint(x,y);
        Global.ballNow = new FlxPoint(x,y);
	}


	override public function update():Void
	{
		super.update();

		Global.ballx = x;
		Global.bally = y;

		if (justHit > 0)
		    justHit --;

        if (Math.abs(velocity.x) < 8)
            velocity.x = 0;
        if (Math.abs(velocity.y) < 8)
            velocity.y = 0;

        if (x < FlxG.worldBounds.x && velocity.x < 0)
            velocity.x *= friction;

        if (x > FlxG.worldBounds.x + FlxG.worldBounds.width - width && velocity.x > 0)
            velocity.x *= friction;

        if (y < FlxG.worldBounds.y && velocity.y < 0)
            velocity.y *= friction;

        if (y > FlxG.worldBounds.y + FlxG.worldBounds.height - height && velocity.y > 0) {
            velocity.y *= friction;
            if (Global.ballLeft)
                Global.blueScore ++;
            if (!Global.ballLeft)
                Global.redScore ++;
            y = FlxG.height - height;
            }

        if (Global.playerAtouching > 0)
            fingerControls();

        if (x < FlxG.worldBounds.x + FlxG.worldBounds.width * 0.5 - width * 0.5)
            Global.ballLeft = true;
        else {Global.ballLeft = false;}

      Global.ballLast = Global.ballNow;
      Global.ballNow = new FlxPoint(x,y);

	}

	private function pressRightSide():Bool {
	    if (Global.ballLeft && FlxG.stage.mouseX < FlxG.stage.width * 0.5)
	        return true;
	    if (!Global.ballLeft && FlxG.stage.mouseX > FlxG.stage.width * 0.5)
	        return true;
	    return false;
	}

	private function fingerControls():Void {
	    if (FlxG.mouse.justPressed && !mouseDown && pressRightSide()) {
    	    mouseDown = true;
    	    mouseA.x = FlxG.stage.mouseX;
    	    mouseA.y = FlxG.stage.mouseY;
    	    }
    	if (FlxG.mouse.justReleased && pressRightSide()) {
    		mouseDown = false;
    	    mouseB.x = FlxG.stage.mouseX;
    	    mouseB.y = FlxG.stage.mouseY;
    		throwBall();
    		}
    	justHit = 8;
	}


    private var xDif:Float;
    private var yDif:Float;
    private var hyp:Float;
    private var xSpeed:Float;
    private var ySpeed:Float;
	private function throwBall():Void {
		xDif = mouseA.x - mouseB.x;
		yDif = mouseA.y - mouseB.y;

		hyp = Math.sqrt(Math.abs(xDif*xDif) + Math.abs(yDif*yDif));

		if (hyp < ignoreRange)
			return;

		if (xDif==0 || yDif==0) {
			xSpeed = xDif * -1;
			ySpeed = yDif * -1;
			addVelocity(xSpeed,ySpeed);
			return;
		}

		if (Math.abs(hyp) < maxSpeed + maxSpeedMod) {
			xSpeed = hyp/(maxSpeed + maxSpeedMod) * (xDif * ((maxSpeed + maxSpeedMod)/hyp) * -1);
			ySpeed = hyp/(maxSpeed + maxSpeedMod) * (yDif * ((maxSpeed + maxSpeedMod)/hyp) * -1);
			addVelocity(xSpeed,ySpeed);
			return;
		}

		xSpeed = xDif * ((maxSpeed + maxSpeedMod)/hyp) * -1;
		ySpeed = yDif * ((maxSpeed + maxSpeedMod)/hyp) * -1;
		addVelocity(xSpeed,ySpeed);
	}

	private function addVelocity(xSpeed:Float, ySpeed:Float):Void {
	    velocity.x = xSpeed * speedMulti * 1.6;

	    if (ySpeed > 0)
	        velocity.y = ySpeed * speedMulti * 2;
	    else {velocity.y = ySpeed * speedMulti * 1.2;}

	    /*
	    if ((velocity.x > 0 && xSpeed > 0) || (velocity.x < 0 && xSpeed < 0))
	       velocity.x +=  xSpeed;
	    else {velocity.x = xSpeed;}
	    if ((velocity.y > 0 && ySpeed > 0) || (velocity.y < 0 && ySpeed < 0))
	       velocity.y +=  ySpeed;
	    else {velocity.y = ySpeed;}
	    */
	}
}