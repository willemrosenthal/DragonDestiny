#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxRect::new","flixel/util/FlxRect.hx",37);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(38)
	this->x = X;
	HX_STACK_LINE(39)
	this->y = Y;
	HX_STACK_LINE(40)
	this->width = Width;
	HX_STACK_LINE(41)
	this->height = Height;
}
;
	return null();
}

FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String FlxRect_obj::toString( ){
	HX_STACK_PUSH("FlxRect::toString","flixel/util/FlxRect.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	int p = ::flixel::FlxG_obj::debugger->precision;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(201)
	return ((((((((HX_CSTRING("(x: ") + ::flixel::util::FlxMath_obj::roundDecimal(this->x,p)) + HX_CSTRING(" | y: ")) + ::flixel::util::FlxMath_obj::roundDecimal(this->y,p)) + HX_CSTRING(" | w: ")) + ::flixel::util::FlxMath_obj::roundDecimal(this->width,p)) + HX_CSTRING(" | h: ")) + ::flixel::util::FlxMath_obj::roundDecimal(this->height,p)) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

::flixel::util::FlxRect FlxRect_obj::_union( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::union","flixel/util/FlxRect.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(187)
	Float minX = ::Math_obj::min(this->x,Rect->x);		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(188)
	Float minY = ::Math_obj::min(this->y,Rect->y);		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(189)
	Float maxX = ::Math_obj::max(this->get_right(),Rect->get_right());		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(190)
	Float maxY = ::Math_obj::max(this->get_bottom(),Rect->get_bottom());		HX_STACK_VAR(maxY,"maxY");
	struct _Function_1_1{
		inline static ::flixel::util::FlxRect Block( ::flixel::util::FlxRect_obj *__this,Float &minY,Float &maxY,Float &minX,Float &maxX){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",192);
			{
				HX_STACK_LINE(192)
				__this->x = minX;
				HX_STACK_LINE(192)
				__this->y = minY;
				HX_STACK_LINE(192)
				__this->width = (maxX - minX);
				HX_STACK_LINE(192)
				__this->height = (maxY - minY);
				HX_STACK_LINE(192)
				return __this;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	return _Function_1_1::Block(this,minY,maxY,minX,maxX);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

bool FlxRect_obj::containsFlxPoint( ::flixel::util::FlxPoint Point){
	HX_STACK_PUSH("FlxRect::containsFlxPoint","flixel/util/FlxRect.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_LINE(174)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(Point->x,Point->y,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsFlxPoint,return )

bool FlxRect_obj::overlaps( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::overlaps","flixel/util/FlxRect.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(163)
	return (bool((bool((bool(((Rect->x + Rect->width) > this->x)) && bool((Rect->x < (this->x + this->width))))) && bool(((Rect->y + Rect->height) > this->y)))) && bool((Rect->y < (this->y + this->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

::flash::geom::Rectangle FlxRect_obj::copyToFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyToFlash","flixel/util/FlxRect.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(150)
	FlashRect->x = this->x;
	HX_STACK_LINE(151)
	FlashRect->y = this->y;
	HX_STACK_LINE(152)
	FlashRect->width = this->width;
	HX_STACK_LINE(153)
	FlashRect->height = this->height;
	HX_STACK_LINE(154)
	return FlashRect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

::flixel::util::FlxRect FlxRect_obj::copyFromFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyFromFlash","flixel/util/FlxRect.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(136)
	this->x = FlashRect->x;
	HX_STACK_LINE(137)
	this->y = FlashRect->y;
	HX_STACK_LINE(138)
	this->width = FlashRect->width;
	HX_STACK_LINE(139)
	this->height = FlashRect->height;
	HX_STACK_LINE(140)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::flixel::util::FlxRect FlxRect_obj::copyTo( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyTo","flixel/util/FlxRect.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(122)
	Rect->x = this->x;
	HX_STACK_LINE(123)
	Rect->y = this->y;
	HX_STACK_LINE(124)
	Rect->width = this->width;
	HX_STACK_LINE(125)
	Rect->height = this->height;
	HX_STACK_LINE(126)
	return Rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::util::FlxRect FlxRect_obj::copyFrom( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyFrom","flixel/util/FlxRect.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(108)
	this->x = Rect->x;
	HX_STACK_LINE(109)
	this->y = Rect->y;
	HX_STACK_LINE(110)
	this->width = Rect->width;
	HX_STACK_LINE(111)
	this->height = Rect->height;
	HX_STACK_LINE(112)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::util::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_PUSH("FlxRect::set","flixel/util/FlxRect.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
{
		HX_STACK_LINE(94)
		this->x = X;
		HX_STACK_LINE(95)
		this->y = Y;
		HX_STACK_LINE(96)
		this->width = Width;
		HX_STACK_LINE(97)
		this->height = Height;
		HX_STACK_LINE(98)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_PUSH("FlxRect::get_bottom","flixel/util/FlxRect.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_PUSH("FlxRect::get_top","flixel/util/FlxRect.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_PUSH("FlxRect::get_right","flixel/util/FlxRect.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_PUSH("FlxRect::get_left","flixel/util/FlxRect.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )


FlxRect_obj::FlxRect_obj()
{
}

void FlxRect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRect);
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxRect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp ? get_top() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp ? get_left() : left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp ? get_right() : right; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp ? get_bottom() : bottom; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsFlxPoint") ) { return containsFlxPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("union"),
	HX_CSTRING("containsFlxPoint"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("bottom"),
	HX_CSTRING("get_top"),
	HX_CSTRING("top"),
	HX_CSTRING("get_right"),
	HX_CSTRING("right"),
	HX_CSTRING("get_left"),
	HX_CSTRING("left"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

Class FlxRect_obj::__mClass;

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxRect"), hx::TCanCast< FlxRect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxRect_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
