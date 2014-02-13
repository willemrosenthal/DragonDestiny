#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouch
#include <flixel/system/input/touch/FlxTouch.h>
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

Void FlxMath_obj::__construct()
{
	return null();
}

FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_PUSH("FlxMath::roundDecimal","flixel/util/FlxMath.hx",22);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Precision,"Precision");
	HX_STACK_LINE(23)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		while(((_g < Precision))){
			HX_STACK_LINE(24)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(26)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(28)
	return (Float(::Math_obj::round((Value * mult))) / Float(mult));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxMath::bound","flixel/util/FlxMath.hx",41);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(42)
	Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(43)
	return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_PUSH("FlxMath::lerp","flixel/util/FlxMath.hx",55);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_ARG(Ratio,"Ratio");
	HX_STACK_LINE(55)
	return (Min + (Ratio * ((Max - Min))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxMath::inBounds","flixel/util/FlxMath.hx",68);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(68)
	return (bool((Value > Min)) && bool((Value < Max)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

Float FlxMath_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_PUSH("FlxMath::computeVelocity","flixel/util/FlxMath.hx",82);
	HX_STACK_ARG(Velocity,"Velocity");
	HX_STACK_ARG(Acceleration,"Acceleration");
	HX_STACK_ARG(Drag,"Drag");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(83)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(84)
		hx::AddEq(Velocity,(Acceleration * ::flixel::FlxG_obj::elapsed));
	}
	else{
		HX_STACK_LINE(87)
		if (((Drag != (int)0))){
			HX_STACK_LINE(89)
			Float drag = (Drag * ::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(90)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(91)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(94)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(95)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(99)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(103)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(104)
		if (((Velocity > Max))){
			HX_STACK_LINE(106)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(109)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(110)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(114)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,computeVelocity,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_PUSH("FlxMath::isOdd","flixel/util/FlxMath.hx",125);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(125)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(127)
		return true;
	}
	else{
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(125)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_PUSH("FlxMath::isEven","flixel/util/FlxMath.hx",144);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(144)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(146)
		return false;
	}
	else{
		HX_STACK_LINE(150)
		return true;
	}
	HX_STACK_LINE(144)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_PUSH("FlxMath::numericComparison","flixel/util/FlxMath.hx",164);
	HX_STACK_ARG(num1,"num1");
	HX_STACK_ARG(num2,"num2");
	HX_STACK_LINE(165)
	if (((num2 > num1))){
		HX_STACK_LINE(166)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(169)
		if (((num1 > num2))){
			HX_STACK_LINE(170)
			return (int)1;
		}
	}
	HX_STACK_LINE(173)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_PUSH("FlxMath::pointInCoordinates","flixel/util/FlxMath.hx",189);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rectX,"rectX");
	HX_STACK_ARG(rectY,"rectY");
	HX_STACK_ARG(rectWidth,"rectWidth");
	HX_STACK_ARG(rectHeight,"rectHeight");
	HX_STACK_LINE(190)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(191)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(193)
			return true;
		}
	}
	HX_STACK_LINE(197)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::pointInFlxRect","flixel/util/FlxMath.hx",209);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(210)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(211)
		return true;
	}
	HX_STACK_LINE(214)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::mouseInFlxRect","flixel/util/FlxMath.hx",227);
	HX_STACK_ARG(useWorldCoords,"useWorldCoords");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(228)
	if (((rect == null()))){
		HX_STACK_LINE(229)
		return true;
	}
	HX_STACK_LINE(233)
	if ((useWorldCoords)){
		HX_STACK_LINE(234)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(::Math_obj::floor(::flixel::FlxG_obj::mouse->x),::Math_obj::floor(::flixel::FlxG_obj::mouse->y),rect);
	}
	else{
		HX_STACK_LINE(238)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(233)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect){
	HX_STACK_PUSH("FlxMath::pointInRectangle","flixel/util/FlxMath.hx",253);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(254)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(255)
		return true;
	}
	HX_STACK_LINE(258)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_PUSH("FlxMath::maxAdd","flixel/util/FlxMath.hx",272);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min,"min");
{
		HX_STACK_LINE(273)
		hx::AddEq(value,amount);
		HX_STACK_LINE(275)
		if (((value > max))){
			HX_STACK_LINE(276)
			value = max;
		}
		else{
			HX_STACK_LINE(279)
			if (((value <= min))){
				HX_STACK_LINE(280)
				value = min;
			}
		}
		HX_STACK_LINE(284)
		return value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::wrapValue","flixel/util/FlxMath.hx",297);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(298)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(300)
	value = ::Std_obj::_int(::Math_obj::abs(value));
	HX_STACK_LINE(301)
	amount = ::Std_obj::_int(::Math_obj::abs(amount));
	HX_STACK_LINE(302)
	max = ::Std_obj::_int(::Math_obj::abs(max));
	HX_STACK_LINE(304)
	diff = hx::Mod(((value + amount)),max);
	HX_STACK_LINE(306)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_PUSH("FlxMath::dotProduct","flixel/util/FlxMath.hx",320);
	HX_STACK_ARG(ax,"ax");
	HX_STACK_ARG(ay,"ay");
	HX_STACK_ARG(bx,"bx");
	HX_STACK_ARG(by,"by");
	HX_STACK_LINE(320)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_PUSH("FlxMath::vectorLength","flixel/util/FlxMath.hx",333);
	HX_STACK_ARG(dx,"dx");
	HX_STACK_ARG(dy,"dy");
	HX_STACK_LINE(333)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::getDistance( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_PUSH("FlxMath::getDistance","flixel/util/FlxMath.hx",345);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(346)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(347)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(348)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_PUSH("FlxMath::distanceBetween","flixel/util/FlxMath.hx",359);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_LINE(360)
	Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(361)
	Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(362)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceWithin","flixel/util/FlxMath.hx",376);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(377)
		Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(378)
		Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(380)
		if ((IncludeEqual)){
			HX_STACK_LINE(381)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(383)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(380)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target){
	HX_STACK_PUSH("FlxMath::distanceToPoint","flixel/util/FlxMath.hx",395);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_LINE(396)
	Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(397)
	Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(398)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToPointWithin","flixel/util/FlxMath.hx",413);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(414)
		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(415)
		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(417)
		if ((IncludeEqual)){
			HX_STACK_LINE(418)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(420)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(417)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxMath::distanceToMouse","flixel/util/FlxMath.hx",431);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(432)
	Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(433)
	Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(434)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToMouseWithin","flixel/util/FlxMath.hx",447);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(448)
		Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(449)
		Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(451)
		if ((IncludeEqual)){
			HX_STACK_LINE(452)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(454)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(451)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::system::input::touch::FlxTouch Touch){
	HX_STACK_PUSH("FlxMath::distanceToTouch","flixel/util/FlxMath.hx",467);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_LINE(468)
	Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(469)
	Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(470)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::system::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToTouchWithin","flixel/util/FlxMath.hx",483);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(484)
		Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(485)
		Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(487)
		if ((IncludeEqual)){
			HX_STACK_LINE(488)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(490)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(487)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_PUSH("FlxMath::getDecimals","flixel/util/FlxMath.hx",501);
	HX_STACK_ARG(Number,"Number");
	HX_STACK_LINE(502)
	Array< ::String > helperArray = ::Std_obj::string(Number).split(HX_CSTRING("."));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(503)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(505)
	if (((helperArray->length > (int)1))){
		HX_STACK_LINE(506)
		decimals = helperArray->__get((int)1).length;
	}
	HX_STACK_LINE(510)
	return decimals;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(0.00001);
	HX_STACK_PUSH("FlxMath::equal","flixel/util/FlxMath.hx",514);
	HX_STACK_ARG(aValueA,"aValueA");
	HX_STACK_ARG(aValueB,"aValueB");
	HX_STACK_ARG(aDiff,"aDiff");
{
		HX_STACK_LINE(514)
		return (::Math_obj::abs((aValueA - aValueB)) <= aDiff);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )


FlxMath_obj::FlxMath_obj()
{
}

void FlxMath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMath);
	HX_MARK_END_CLASS();
}

void FlxMath_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { return inBounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"getDecimals") ) { return getDecimals_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { return roundDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { return distanceToTouch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { return isDistanceWithin_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { return isDistanceToPointWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { return isDistanceToMouseWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { return isDistanceToTouchWithin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("roundDecimal"),
	HX_CSTRING("bound"),
	HX_CSTRING("lerp"),
	HX_CSTRING("inBounds"),
	HX_CSTRING("computeVelocity"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("isDistanceWithin"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("isDistanceToPointWithin"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("isDistanceToMouseWithin"),
	HX_CSTRING("distanceToTouch"),
	HX_CSTRING("isDistanceToTouchWithin"),
	HX_CSTRING("getDecimals"),
	HX_CSTRING("equal"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
};

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMath_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
