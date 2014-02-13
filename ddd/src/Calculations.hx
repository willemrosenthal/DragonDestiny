package ;
import flixel.util.FlxPoint;
import flixel.FlxG;

class Calculations {

	static public function plusOrMinus(Value:Float=1):Float
	{
		return ((Math.round(Math.random()) * 2) - 1) * Value;
	}

    static public function lineIntersect(p1:FlxPoint,p2:FlxPoint,p3:FlxPoint,p4:FlxPoint):FlxPoint
    {
       // lengthens all lines
       /*
       var lengthenBy:Int = 5;
       p1.x *= lengthenBy;
       p1.y *= lengthenBy;
       p2.x *= lengthenBy;
       p2.y *= lengthenBy;
       p3.x *= lengthenBy;
       p3.y *= lengthenBy;
       p4.x *= lengthenBy;
       p5.y *= lengthenBy;
       */

       // calculate differences
       var xD1:Float = p2.x-p1.x;
       var xD2:Float = p4.x-p3.x;
       var yD1:Float = p2.y-p1.y;
       var yD2:Float = p4.y-p3.y;
       var xD3:Float = p1.x-p3.x;
       var yD3:Float = p1.y-p3.y;

       // calculate the lengths of the two lines
       var len1:Float = Math.sqrt(xD1*xD1+yD1*yD1);
       var len2:Float = Math.sqrt(xD2*xD2+yD2*yD2);

       // calculate angle between the two lines.
       var dot:Float = (xD1*xD2+yD1*yD2); // dot product
       var deg:Float = dot/(len1*len2);

       // if abs(angle)==1 then the lines are parallell,
       // so no intersection is possible
       if(Math.abs(deg)==1) return null;

       // find intersection Pt between two lines
       var pt:FlxPoint = new FlxPoint();
       var div:Float = yD2*xD1-xD2*yD1;
       var ua:Float =(xD2*yD3-yD2*xD3)/div;
       var ub:Float =(xD1*yD3-yD1*xD3)/div;
       pt.x=p1.x+ua*xD1;
       pt.y=p1.y+ua*yD1;

       //if the point is Nan, return Null
       if (pt.x/2 != pt.x/2 || pt.y/2 != pt.y/2)
       {
           return null;
       }

       return pt;
    }


	public function new() {
	}
}
