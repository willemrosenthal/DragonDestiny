package ;

class SimpleMap {

	public static var map:Array<Array<Int>>;
	public static var baseInt:Int = 1;

	static public function newMap(Width:Int, Height:Int):String {
		map = new Array();

		for (n in 0...Height) {
			map.push(new Array());
			for (q in 0...Width) {
				map[n].push(baseInt);
			}
		}

		return mapToString();
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


	public function new() {
	}
}
