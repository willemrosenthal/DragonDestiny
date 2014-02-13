package ;

import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.events.TouchEvent;
import flash.ui.Multitouch;
import flash.ui.MultitouchInputMode;

import org.flixel.FlxCamera;
import org.flixel.FlxG;
import org.flixel.util.FlxPoint;

class MultitouchField extends Sprite
{

	private var s:Sprite;
	private var ignoreRange:Float = 28;

	public function new()
	{
		super();
		Multitouch.inputMode = MultitouchInputMode.TOUCH_POINT;

		s = new Sprite();
		s.graphics.beginFill(0x000ff0,1);
		s.graphics.drawRect(0,0,FlxG.width * FlxCamera.defaultZoom,FlxG.height * FlxCamera.defaultZoom);
		s.graphics.endFill();
		addChild(s);

		s.addEventListener(TouchEvent.TOUCH_BEGIN, onBegin);
		s.addEventListener(TouchEvent.TOUCH_MOVE, onMove);
		s.addEventListener(TouchEvent.TOUCH_END, onEnd);
		s.alpha = 0;
	}

	private function onBegin(e:TouchEvent):Void
	{
		if (Global.firstTouchId != -1 && Global.secondTouchId != -1)
			return;

		if (Global.firstTouchId == -1)
		{
			Global.firstTouchId = e.touchPointID;
			Global.moveTouched = true;
			Global.firstTouch = new FlxPoint(e.stageX,e.stageY);
			Global.firstTouchTo = new FlxPoint(e.stageX,e.stageY);
		}
		else if (Global.firstTouchId != -1 && e.touchPointID != Global.firstTouchId && Global.secondTouchId == -1)
		{
			if (e.stageX < Global.firstTouchTo.x + ignoreRange && e.stageX > Global.firstTouchTo.x - ignoreRange && e.stageY < Global.firstTouchTo.y + ignoreRange && e.stageY > Global.firstTouchTo.y - ignoreRange)
				return;
			Global.secondTouchId = e.touchPointID;
			Global.dash = true;
		}

		//trace("firstTouchId:" + Global.firstTouchId + "  firstTouchPoint:" +Global.firstTouch);
		//trace("firstTouchId:" + Global.firstTouchId + "  firstTouchPoint:" +Global.firstTouch);
		//FlxG.log("touchStart");
		//FlxG.log(e.touchPointID);
	}


	private function onMove(e:TouchEvent):Void
	{
		if (e.touchPointID != Global.firstTouchId)
			return;

		Global.firstTouchTo.x = e.stageX;
		Global.firstTouchTo.y = e.stageY;
		//FlxG.log("touchMove");
	}

	private function onEnd(e:TouchEvent):Void
	{
		if (e.touchPointID == Global.firstTouchId)
		{
			Global.firstTouchId = -1;
			Global.moveTouched = false;
			Global.firstTouch = new FlxPoint(-10,-10);
		}
		else if (e.touchPointID == Global.secondTouchId)
		{
			Global.secondTouchId = -1;
			Global.dash = false;
		}
		//FlxG.log("touchEnd");
	}

	public function kill():Void
	{
		//trace("killed touch object");
		s.removeEventListener(TouchEvent.TOUCH_BEGIN, onBegin);
		s.removeEventListener(TouchEvent.TOUCH_MOVE, onMove);
		s.removeEventListener(TouchEvent.TOUCH_END, onEnd);

		removeChild(s);
	}
}
