package;
import flixel.group.FlxGroup;
import flixel.FlxBasic;
import flixel.FlxObject;

class ObjectsGroup extends FlxGroup {

	public function new() {
		super();
	}

	public function zSort(Order:Int=-1):Void
	{
		_sortOrder = Order;
		members.sort(zSortHandler);
	}


	function zSortHandler(Obj1:FlxBasic,Obj2:FlxBasic):Int
	{
		//var prop1 = Reflect.getProperty(Obj1, "y") - Reflect.getProperty(Obj1, "yOffset");
		//var prop2 = Reflect.getProperty(Obj2, "y") - Reflect.getProperty(Obj2, "yOffset");

		if (cast(Obj1, FlxObject).y < cast(Obj2, FlxObject).y)
		{
			return _sortOrder;
		}
		else if (cast(Obj1, FlxObject).y > cast(Obj2, FlxObject).y)
		{
			return -_sortOrder;
		}
		else return 0;
	}
}