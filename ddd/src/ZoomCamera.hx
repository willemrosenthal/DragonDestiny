package ;
import flixel.util.FlxPoint;
import flixel.FlxG;
import flixel.FlxBasic;
import flixel.util.FlxPoint;
import flash.Lib;

class ZoomCamera extends FlxBasic {

	public var maxZoomOut:Float = 3;
	public var zoomSpeed:Float = 0.005;
	private var zoomTo:Array<Float>;
	private var zooming:Bool = false;
	private var player:Player;
	public var nextZoom:Float;


	public function new(PlayerRef:Player) {
		super();
		player = PlayerRef;
		zoomTo = [];
	}

	public function setZoom(ZoomTo:Float, ZoomSpeed:Float):Void
	{
		zoomSpeed = ZoomSpeed;
		zoomTo.unshift(ZoomTo);
		zooming = true;
	}

	private function zoom():Void
	{
		if (FlxG.camera.zoom > zoomTo[zoomTo.length -1])
			FlxG.camera.zoom -= zoomSpeed;
		if (FlxG.camera.zoom < zoomTo[zoomTo.length -1]) {
			FlxG.camera.zoom = zoomTo[zoomTo.length -1];
			zoomTo.pop();
		}
		if (zoomTo.length == 0)
			zooming = false;
		// don't let it zoom out too far!
		if (FlxG.camera.zoom < maxZoomOut)
			FlxG.camera.zoom = maxZoomOut;

		FlxG.camera.width = Math.ceil(Lib.current.stage.stageWidth/FlxG.camera.zoom);
		FlxG.camera.height = Math.ceil(Lib.current.stage.stageHeight/FlxG.camera.zoom);
	}

	private function pointAtPlayer():Void {
		FlxG.camera.scroll.x = player.x - FlxG.camera.width * 0.5;// (player.x  - FlxG.camera.scroll.x) / FlxG.camera.zoom;
		FlxG.camera.scroll.y = player.y - FlxG.camera.height * 0.5;// (player.y  - FlxG.camera.scroll.y) / FlxG.camera.zoom;
	}


	override public function update():Void {
		super.update();

		pointAtPlayer();

		if (zoomTo.length > 0)
			nextZoom = zoomTo[0];
		else nextZoom = FlxG.camera.zoom;

		if (zooming)
			zoom();
	}
}


