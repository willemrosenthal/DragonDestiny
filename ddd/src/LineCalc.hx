/*
--DESCRIPTION--
    Checks if lines between two pairs of dots intersect
--PARAMETERS--
    lineOne:Object    = Coordinates for line A
    lineTwo:Object    = Coordinates for line B
---RETURNS---
    Null            = Null if no intersection
    x:Number        = x Coordinate of intersection
    y:Number         = y Coordinate of intersection
---EXAMPLE---
    trace(lineIntersect({lineOne:{aX:250, aY:120, bX:180, bY:300}, lineTwo:{aX:-10, aY:210, bX:210, bY:60}}));
    --Null
*/
private function lineIntersect(o:Object)
{
    //create point objects
    var p1:Object = {x:o.lineOne.aX, y:o.lineOne.aY};
    var p2:Object = {x:o.lineOne.bX, y:o.lineOne.bY};
    var p3:Object = {x:o.lineTwo.aX, y:o.lineTwo.aY};
    var p4:Object = {x:o.lineTwo.bX, y:o.lineTwo.bY};

   // calculate differences
   var xD1:Number = p2.x-p1.x;
   var xD2:Number = p4.x-p3.x;
   var yD1:Number = p2.y-p1.y;
   var yD2:Number = p4.y-p3.y;
   var xD3:Number = p1.x-p3.x;
   var yD3:Number = p1.y-p3.y;

   // calculate the lengths of the two lines
   var len1:Number = Math.sqrt(xD1*xD1+yD1*yD1);
   var len2:Number = Math.sqrt(xD2*xD2+yD2*yD2);

   // calculate angle between the two lines.
   var dot:Number = (xD1*xD2+yD1*yD2); // dot product
   var deg:Number = dot/(len1*len2);

   // if abs(angle)==1 then the lines are parallell,
   // so no intersection is possible
   if(Math.abs(deg)==1) return null;

   // find intersection Pt between two lines
   var pt:Object = {x:0, y:0};
   var div:Number = yD2*xD1-xD2*yD1;
   var ua:Number =(xD2*yD3-yD2*xD3)/div;
   var ub:Number =(xD1*yD3-yD1*xD3)/div;
   pt.x=p1.x+ua*xD1;
   pt.y=p1.y+ua*yD1;

   // calculate the combined length of the two segments
   // between Pt-p1 and Pt-p2
   xD1=pt.x-p1.x;
   xD2=pt.x-p2.x;
   yD1=pt.y-p1.y;
   yD2=pt.y-p2.y;
   var segmentLen1:Number = Math.sqrt(xD1*xD1+yD1*yD1)+Math.sqrt(xD2*xD2+yD2*yD2);

   // calculate the combined length of the two segments
   // between Pt-p3 and Pt-p4
   xD1=pt.x-p3.x;
   xD2=pt.x-p4.x;
   yD1=pt.y-p3.y;
   yD2=pt.y-p4.y;
   var segmentLen2:Number = Math.sqrt(xD1*xD1+yD1*yD1)+Math.sqrt(xD2*xD2+yD2*yD2);

   // if the lengths of both sets of segments are the same as
   // the lenghts of the two lines the point is actually
   // on the line segment.

   // if the point isn’t on the line, return null
   if(Math.abs(len1-segmentLen1)>0.01 || Math.abs(len2-segmentLen2)>0.01)
   {
     return null;
   }

   // if the point is on the start or end of the line, return null
   if ((Math.round(pt.x) == Math.round(p1.x) && Math.round(pt.y) == Math.round(p1.y)) || (Math.round(pt.x) == Math.round(p2.x) && Math.round(pt.y) == Math.round(p2.y)))
   {
       return null;
   }
   //if the point is Nan, return Null
   if (pt.x/2 != pt.x/2 || pt.y/2 != pt.y/2)
   {
       return null;
   }

   return pt;
}