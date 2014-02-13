package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;

class Joystick extends FlxSprite {

	public var maxDistance:Float = 20;
	public var moveIgnoreRange:Int = 3;
	public var moveSpeed:Float = 50;

	private var originPoint:FlxPoint;
	private var xDif:Float = 0;
	private var yDif:Float = 0;
	private var hyp:Float = 0;
	private var moveDirs:FlxPoint;
	private var mouseDown:Bool = false;
	private var gameZoom:Float = 1;

	public function new(X:Float, Y:Float, GameZoom) {
		super(X, Y);
		gameZoom = GameZoom;
		originPoint = new FlxPoint(X,Y);
		moveDirs = new FlxPoint(0,0);

		loadGraphic("assets/joystick2.png", false, false, 20,20);
		offset.y = height * 0.5;
		offset.x = width * 0.5;
	}

	override public function update():Void {
		super.update();


		if (FlxG.mouse.justPressed && !mouseDown)
			mouseDown = true;
		if (FlxG.mouse.justReleased)
			mouseDown = false;


		if (noMove())
		   return;

		if (!mouseDown) {
			x = originPoint.x;
			y = originPoint.y;
			Global.move.x = 0;
			Global.move.y = 0;
			return;
		}


		Global.move = calculateJoystick();
		positionJostick();
	}

	private function calculateJoystick():FlxPoint {
		xDif = originPoint.x - FlxG.stage.mouseX / gameZoom;
		yDif = originPoint.y - FlxG.stage.mouseY / gameZoom;

		moveDirs.x = 0;
		moveDirs.y = 0;

		if (xDif==0 || yDif==0) {
			moveDirs.x = xDif * -1;
			moveDirs.y = yDif * -1;
			return moveDirs;
		}

		hyp = Math.sqrt(Math.abs(xDif*xDif) + Math.abs(yDif*yDif));

		if (hyp < moveIgnoreRange)
			return moveDirs;

		if (Math.abs(hyp) < maxDistance) {
			moveDirs.x = hyp/maxDistance * (xDif * (moveSpeed/hyp) * -1);
			moveDirs.y = hyp/maxDistance * (yDif * (moveSpeed/hyp) * -1);
			return moveDirs;
		}

		moveDirs.x = xDif * (moveSpeed/hyp) * -1;
		moveDirs.y = yDif * (moveSpeed/hyp) * -1;


//		if (xDif < 0)
//			moveDirs.x * -1;
//		if (yDif < 0)
//			moveDirs.y * -1;
		return moveDirs;
	}

	private function positionJostick():Void {
		if (Math.abs(hyp) < maxDistance) {
			x = FlxG.stage.mouseX / gameZoom;
			y = FlxG.stage.mouseY / gameZoom;
		}
		else {
			x = maxDistance/hyp * xDif * -1 + originPoint.x;
			y = maxDistance/hyp * yDif * -1 + originPoint.y;
		}
	}

	private function noMove():Bool {
		if (Global.UIopen) {
		    Global.move.x = 0;
		    Global.move.y = 0;
		    mouseDown = false;
		    return true;
		}

		// for + button
		if (FlxG.mouse.screenX > 113 && FlxG.mouse.screenX < 113 + 11 && FlxG.mouse.screenY > 4 && FlxG.mouse.screenY < 4 + 11) {
		   return true;
        }
        return false;
	}

}