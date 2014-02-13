package;

import flash.Lib;
import flixel.FlxG;
import flixel.util.FlxRect;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.addons.tile.FlxTilemapExt;
import flixel.addons.tile.FlxTileSpecial;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;


#if cpp
import openfl.ui.Accelerometer;
#end

class PlayState extends FlxState
{

	private var ball:Ball;
	private var player:PlayerA;
	private var player2:PlayerB;
	private var net:Net;


	private var UI:FlxGroup;
	private var redScore:FlxText;
	private var blueScore:FlxText;




    public function new(Level:String = "summer1") {
        super();
	    clearData();
    }

    private function clearData():Void {
        //trace("cleared");
    }

	override public function create():Void {

        var worldBounds:FlxRect = new FlxRect((1136 * -0.1), (640 * -0.25), 1136 * 1.2, 640 * 1.25);

	    player = new PlayerA(worldBounds.x + (worldBounds.width * 0.25), 200);
	    add(player);
	    player2 = new PlayerB(worldBounds.x + (worldBounds.width * 0.75), 200);
	    add(player2);

	    ball = new Ball(player2.x, 180);
	    add(ball);

	    net = new Net(worldBounds.x + (worldBounds.width * 0.5), worldBounds.y + (worldBounds.height));
	    add(net);

		FlxG.camera.bounds = worldBounds;
		FlxG.worldBounds.copyFrom(worldBounds);
		FlxG.camera.follow(ball, 1, new FlxPoint(), 4);

		// deadzone alterations
		var deadWidthPlus:Float =  200;
		var deadHeightPlus:Float = 150;
		FlxG.camera.deadzone.x += deadWidthPlus * -0.5;
		FlxG.camera.deadzone.y += deadHeightPlus * -0.5;
		FlxG.camera.deadzone.width += deadWidthPlus;
		FlxG.camera.deadzone.height += deadHeightPlus;

		addUI();
	}

    private function addUI():Void {
        UI = new FlxGroup();
        add(UI);

        redScore = new FlxText(30, 20, 80, "0", 20);
        redScore.setFormat(null, 32, 0xff0000);
		UI.add(redScore);

        blueScore = new FlxText(FlxG.stage.width - 60, 20, 80, "0", 20);
        blueScore.setFormat(null, 32, 0x1b4bff);
		UI.add(blueScore);

		UI.setAll("scrollFactor", new FlxPoint(0, 0));
		UI.setAll("cameras", [FlxG.camera]);
    }

	override public function update():Void
	{
		super.update();
		FlxG.overlap(ball, player, touchBall);
		FlxG.overlap(ball, player2, touchBall);
		FlxG.overlap(ball,net, netHit);
		if (Global.playerAtouching > 0)
		    Global.playerAtouching--;

		redScore.text = Std.string(Global.redScore);
		blueScore.text = Std.string(Global.blueScore);
	}

	private function touchBall(ball:Ball,player:FlxSprite):Void {
	    if (!Global.ballLeft && Std.is(player, PlayerA))
	        return;
	    if (Global.ballLeft && Std.is(player, PlayerB))
	        return;
	    Global.playerAtouching = 2;
	    player.velocity.x *= 0.9;
	    player.velocity.y *= 0.9;
	    // alt
	    if (player.velocity.x < ball.velocity.x)
	        player.velocity.x += 10;
	    if (player.velocity.x > ball.velocity.x)
	        player.velocity.x -= 10;
	    if (player.velocity.y < ball.velocity.y)
	        player.velocity.y += 10;
	    if (player.velocity.y > ball.velocity.y)
	        player.velocity.y -= 10;

	    if (ball.justHit == 0) {
	        ball.velocity.x *= 0.9;
	        ball.velocity.y *= 0.9;
	    }
	    if (player.velocity.y > 800) {
	        ball.velocity.y -= 80;
	        }
	}

	private function netHit(ball:Ball,net:Net):Void {
	    if (ball.x > net.x && ball.velocity.x < 0)
	        ball.velocity.x *= -0.8;
	    if (ball.x < net.x && ball.velocity.x > 0)
	        ball.velocity.x *= -0.8;

	    if (ball.y < net.y && ball.velocity.y > 0)
	        ball.velocity.y *= -0.8;
	}

}