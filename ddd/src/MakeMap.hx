package ;

class MakeMap {

	public static var map:Array<Array<Int>>;
	public static var baseInt:Int = 14;
	public static var seedInt:Int = 16;

	static public function newMap(Width:Int, Height:Int, MinPatches:Int = 0, MaxPatches:Int = 0, PatchDepth:Int = 1, PatchSpread:Float = 1):String {
		map = new Array();

		// builds map with all 0s
		for (n in 0...Height) {
			map.push(new Array());
			for (q in 0...Width) {
				map[n].push(baseInt);
			}
		}

		// make ground patches
		if (MinPatches != 0 && MaxPatches != 0)
			makePatces(MinPatches,MaxPatches,PatchDepth,PatchSpread);

		//trace(mapToString());
		return mapToString();
	}

	static function makePatces(MinPatches:Int, MaxPatches:Int, PatchDepth:Int, PatchSpread:Float):Void {
		var patchNo:Int = Math.round(Math.random() * (MaxPatches - MinPatches)) + MinPatches;

		var growthPercent:Float = 0;
		var percentArray:Array<Float> = new Array();
		for (s in 0...PatchDepth) {
			percentArray.push(1/(s * PatchSpread + 1));
		}

		// places patch seeds on map
		dispersePatches(patchNo);

		// grows patches from there
		for (n in 0...PatchDepth) {
			growthPercent = 0;
			for (m in 0...percentArray.length - 1) {
				growthPercent += percentArray[m];
			}
			growthPercent = growthPercent/PatchDepth;
			//trace(growthPercent + " gp!!!!");
			patcheGrowth(growthPercent);
			percentArray.shift();
		}
		patcheGrowth(1,true); // put edges around grass
	}

	static function patcheGrowth(GrowthAmount:Float, Final:Bool = false):Void {
		var temp:Int = -1;
		for (n in 0...map.length) {
			for (q in 0...map[0].length) {
				if (map[n][q] == seedInt) {
					checkSurrounding(n,q,GrowthAmount,temp);
				}
			}
		}
		for (n in 0...map.length) {
			for (q in 0...map[0].length) {
				if (map[n][q] == temp) {
					if (!Final)
						map[n][q] = seedInt;
					if (Final)
						blendEdge(n,q);
				}
			}
		}
	}


	static function checkSurrounding(N:Int, Q:Int, GrowthAmount:Float, temp:Int):Void {
		var up:Bool = false;
		var lf:Bool = false;
		var rt:Bool = false;
		var dn:Bool = false;

		if (N - 1 >= 0) up = true;
		if (N + 1 < map.length) dn = true;
		if (Q - 1 >= 0) lf = true;
		if (Q + 1 < map[0].length) rt = true;

		if (up && lf && map[N-1][Q-1] == baseInt && Math.random() < GrowthAmount) // top lf
			map[N-1][Q-1] = temp;

		if (up && map[N-1][Q] == baseInt && Math.random() < GrowthAmount) // top
			map[N-1][Q] = temp;

		if (up && rt && map[N-1][Q+1] == baseInt && Math.random() < GrowthAmount) // top rt
			map[N-1][Q+1] = temp;

		if (lf && map[N][Q-1] == baseInt && Math.random() < GrowthAmount) // lf
			map[N][Q-1] = temp;

		if (rt && map[N][Q+1] == baseInt && Math.random() < GrowthAmount) // rt
			map[N][Q+1] = temp;

		if (dn && lf && map[N+1][Q-1] == baseInt && Math.random() < GrowthAmount) // bot lf
			map[N+1][Q-1] = temp;

		if (dn && map[N+1][Q] == baseInt && Math.random() < GrowthAmount) // bot
			map[N+1][Q] = temp;

		if (dn && rt && map[N+1][Q+1] == baseInt && Math.random() < GrowthAmount) // bot rt
			map[N+1][Q+1] = temp;
	}

	static function blendEdge(N:Int, Q:Int):Void {
		var up:Int = 0;
		var lf:Int = 0;
		var rt:Int = 0;
		var dn:Int = 0;

		if (N - 1 < 0) up = -1;
		if (N + 1 >= map.length) dn = -1;
		if (Q - 1 < 0) lf = -1;
		if (Q + 1 >= map[0].length) rt = -1;



		if (up != -1 && map[N-1][Q] != baseInt ) // top
			up = 1;
		if (lf != -1 && map[N][Q-1] != baseInt ) // lf
			lf = 1;
		if (rt != -1 && map[N][Q+1] != baseInt ) // rt
			rt = 1;
		if (dn != -1 && map[N+1][Q] != baseInt ) // down
			dn = 1;


		if (up == 1 && lf == 1 && rt == 1 && dn == 1)
			map[N][Q] = 16;
		else if (up == 1 && lf == 1 && rt == 1 && dn == 0)
			map[N][Q] = 4;
		else if (up == 1 && lf == 1 && rt == 0 && dn == 1)
			map[N][Q] = 2;
		else if (up == 1 && lf == 0 && rt == 1 && dn == 1)
			map[N][Q] = 3;
		else if (up == 0 && lf == 1 && rt == 1 && dn == 1)
			map[N][Q] = 1;
		else if (up == 1 && lf == 1 && rt == 0 && dn == 0)
			map[N][Q] = 6;
		else if (up == 1 && lf == 0 && rt == 1 && dn == 0)
			map[N][Q] = 11;
		else if (up == 0 && lf == 1 && rt == 1 && dn == 0)
			map[N][Q] = 5;
		else if (up == 1 && lf == 0 && rt == 0 && dn == 1)
			map[N][Q] = 9;
		else if (up == 0 && lf == 1 && rt == 0 && dn == 1)
			map[N][Q] = 8;
		else if (up == 0 && lf == 0 && rt == 1 && dn == 1)
			map[N][Q] = 7;
		else if (up == 0 && lf == 0 && rt == 0 && dn == 1)
			map[N][Q] = 10;
		else if (up == 0 && lf == 0 && rt == 1 && dn == 0)
			map[N][Q] = 15;
		else if (up == 0 && lf == 1 && rt == 0 && dn == 0)
			map[N][Q] = 12;
		else if (up == 1 && lf == 0 && rt == 0 && dn == 0)
			map[N][Q] = 13;
		else map[N][Q] = 1;

	}

	static function dispersePatches(PatchNo:Int):Void {
		for (n in 0...PatchNo) {
			map[Std.int(Math.round(Math.random() * (map.length - 1)))][Std.int(Math.round(Math.random() * (map[0].length - 1)))] = seedInt;
		}
	}

	static function mapToString():String {
		var mapString:String = "";
		for (n in 0...map.length) {
			mapString += map[n].join(",");
			if (n < map.length - 1)
				mapString +='\n';
		}
		return mapString;
	}

	static public function plusOrMinus(Value:Float=1):Float {
		return ((Math.round(Math.random()) * 2) - 1) * Value;
	}

	public function new() {
	}
}
