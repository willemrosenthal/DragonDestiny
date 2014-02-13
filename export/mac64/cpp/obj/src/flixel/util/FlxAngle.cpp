#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxAngle_obj::__construct()
{
	return null();
}

FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Array< Float > FlxAngle_obj::cosTable;

Array< Float > FlxAngle_obj::sinTable;

Float FlxAngle_obj::TO_DEG;

Float FlxAngle_obj::TO_RAD;

::flixel::util::FlxPoint FlxAngle_obj::rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxAngle::rotatePoint","flixel/util/FlxAngle.hx",43);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PivotX,"PivotX");
	HX_STACK_ARG(PivotY,"PivotY");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(44)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(45)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(46)
	Float radians = (Angle * -(::flixel::util::FlxAngle_obj::TO_RAD));		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(47)
	while(((radians < -(::Math_obj::PI)))){
		HX_STACK_LINE(48)
		hx::AddEq(radians,(::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(51)
	while(((radians > ::Math_obj::PI))){
		HX_STACK_LINE(52)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(56)
	if (((radians < (int)0))){
		HX_STACK_LINE(58)
		sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
		HX_STACK_LINE(59)
		if (((sin < (int)0))){
			HX_STACK_LINE(60)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(64)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	else{
		HX_STACK_LINE(70)
		sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(71)
		if (((sin < (int)0))){
			HX_STACK_LINE(72)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(76)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	HX_STACK_LINE(81)
	hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
	HX_STACK_LINE(82)
	if (((radians > ::Math_obj::PI))){
		HX_STACK_LINE(83)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(86)
	if (((radians < (int)0))){
		HX_STACK_LINE(88)
		cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
		HX_STACK_LINE(89)
		if (((cos < (int)0))){
			HX_STACK_LINE(90)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(94)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	else{
		HX_STACK_LINE(100)
		cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(101)
		if (((cos < (int)0))){
			HX_STACK_LINE(102)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(106)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	HX_STACK_LINE(111)
	Float dx = (X - PivotX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(114)
	Float dy = (Y - PivotY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(115)
	if (((point == null()))){
		HX_STACK_LINE(116)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(119)
	point->set_x(((PivotX + (cos * dx)) - (sin * dy)));
	HX_STACK_LINE(120)
	point->set_y(((PivotY - (sin * dx)) - (cos * dy)));
	HX_STACK_LINE(121)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxAngle_obj,rotatePoint,return )

Float FlxAngle_obj::getAngle( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2,hx::Null< bool >  __o_Round){
bool Round = __o_Round.Default(false);
	HX_STACK_PUSH("FlxAngle::getAngle","flixel/util/FlxAngle.hx",132);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_ARG(Round,"Round");
{
		HX_STACK_LINE(133)
		Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(134)
		Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(135)
		if ((Round)){
			HX_STACK_LINE(137)
			x = ::Math_obj::fround(x);
			HX_STACK_LINE(138)
			y = ::Math_obj::fround(y);
		}
		HX_STACK_LINE(140)
		Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(141)
		if (((bool((x != (int)0)) || bool((y != (int)0))))){
			HX_STACK_LINE(143)
			Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(144)
			Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(145)
			Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(146)
			if (((x >= (int)0))){
				HX_STACK_LINE(147)
				angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
			}
			else{
				HX_STACK_LINE(151)
				angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
			}
			HX_STACK_LINE(154)
			angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ::flixel::util::FlxAngle_obj::TO_DEG);
			HX_STACK_LINE(155)
			if (((angle > (int)90))){
				HX_STACK_LINE(156)
				angle = (angle - (int)270);
			}
			else{
				HX_STACK_LINE(160)
				hx::AddEq(angle,(int)90);
			}
		}
		HX_STACK_LINE(165)
		return angle;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getAngle,return )

Void FlxAngle_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(1.0);
Float cosAmplitude = __o_cosAmplitude.Default(1.0);
Float frequency = __o_frequency.Default(1.0);
	HX_STACK_PUSH("FlxAngle::sinCosGenerator","flixel/util/FlxAngle.hx",183);
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(sinAmplitude,"sinAmplitude");
	HX_STACK_ARG(cosAmplitude,"cosAmplitude");
	HX_STACK_ARG(frequency,"frequency");
{
		HX_STACK_LINE(184)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(185)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(186)
		Float frq = (Float((frequency * ::Math_obj::PI)) / Float(length));		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(188)
		::flixel::util::FlxAngle_obj::cosTable = Array_obj< Float >::__new();
		HX_STACK_LINE(189)
		::flixel::util::FlxAngle_obj::sinTable = Array_obj< Float >::__new();
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while(((_g < length))){
				HX_STACK_LINE(191)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(193)
				hx::SubEq(cos,(sin * frq));
				HX_STACK_LINE(194)
				hx::AddEq(sin,(cos * frq));
				HX_STACK_LINE(196)
				::flixel::util::FlxAngle_obj::cosTable[c] = cos;
				HX_STACK_LINE(197)
				::flixel::util::FlxAngle_obj::sinTable[c] = sin;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAngle_obj,sinCosGenerator,(void))

int FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_PUSH("FlxAngle::wrapAngle","flixel/util/FlxAngle.hx",210);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(211)
	int result = ::Std_obj::_int(angle);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(213)
	if (((angle > (int)180))){
		HX_STACK_LINE(214)
		result = (int)-180;
	}
	else{
		HX_STACK_LINE(217)
		if (((angle < (int)-180))){
			HX_STACK_LINE(218)
			result = (int)180;
		}
	}
	HX_STACK_LINE(222)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

int FlxAngle_obj::angleLimit( int angle,int min,int max){
	HX_STACK_PUSH("FlxAngle::angleLimit","flixel/util/FlxAngle.hx",235);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(236)
	int result = angle;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(238)
	if (((angle > max))){
		HX_STACK_LINE(239)
		result = max;
	}
	else{
		HX_STACK_LINE(242)
		if (((angle < min))){
			HX_STACK_LINE(243)
			result = min;
		}
	}
	HX_STACK_LINE(247)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_PUSH("FlxAngle::asDegrees","flixel/util/FlxAngle.hx",258);
	HX_STACK_ARG(radians,"radians");
	HX_STACK_LINE(258)
	return (radians * ::flixel::util::FlxAngle_obj::TO_DEG);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_PUSH("FlxAngle::asRadians","flixel/util/FlxAngle.hx",270);
	HX_STACK_ARG(degrees,"degrees");
	HX_STACK_LINE(270)
	return (degrees * ::flixel::util::FlxAngle_obj::TO_RAD);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetween","flixel/util/FlxAngle.hx",284);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(285)
		Float dx = ((SpriteB->x + SpriteB->origin->x) - ((SpriteA->x + SpriteA->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(286)
		Float dy = ((SpriteB->y + SpriteB->origin->y) - ((SpriteA->y + SpriteA->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(288)
		if ((AsDegrees)){
			HX_STACK_LINE(289)
			return (::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG);
		}
		else{
			HX_STACK_LINE(291)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(288)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenPoint","flixel/util/FlxAngle.hx",304);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(305)
		Float dx = (Target->x - ((Sprite->x + Sprite->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(306)
		Float dy = (Target->y - ((Sprite->y + Sprite->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(308)
		if ((AsDegrees)){
			HX_STACK_LINE(309)
			return (::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG);
		}
		else{
			HX_STACK_LINE(311)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(308)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenMouse","flixel/util/FlxAngle.hx",324);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(326)
		if (((Object == null()))){
			HX_STACK_LINE(327)
			return (int)0;
		}
		HX_STACK_LINE(329)
		::flixel::util::FlxPoint p = Object->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(331)
		Float dx = (::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(332)
		Float dy = (::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(334)
		if ((AsDegrees)){
			HX_STACK_LINE(335)
			return (::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG);
		}
		else{
			HX_STACK_LINE(337)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(334)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object,::flixel::system::input::touch::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenTouch","flixel/util/FlxAngle.hx",352);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(354)
		::flixel::util::FlxPoint p = Object->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(356)
		Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(357)
		Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(359)
		if ((AsDegrees)){
			HX_STACK_LINE(360)
			return (::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG);
		}
		else{
			HX_STACK_LINE(362)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(359)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )


FlxAngle_obj::FlxAngle_obj()
{
}

void FlxAngle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAngle);
	HX_MARK_END_CLASS();
}

void FlxAngle_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxAngle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { return TO_DEG; }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { return TO_RAD; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { return cosTable; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { return sinTable; }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return rotatePoint_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { return sinCosGenerator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { return angleBetweenTouch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAngle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { TO_DEG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { TO_RAD=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { cosTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { sinTable=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAngle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cosTable"),
	HX_CSTRING("sinTable"),
	HX_CSTRING("TO_DEG"),
	HX_CSTRING("TO_RAD"),
	HX_CSTRING("rotatePoint"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("sinCosGenerator"),
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetweenMouse"),
	HX_CSTRING("angleBetweenTouch"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::TO_DEG,"TO_DEG");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::TO_RAD,"TO_RAD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::TO_DEG,"TO_DEG");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::TO_RAD,"TO_RAD");
};

Class FlxAngle_obj::__mClass;

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxAngle"), hx::TCanCast< FlxAngle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxAngle_obj::__boot()
{
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
	TO_DEG= (Float((int)180) / Float(::Math_obj::PI));
	TO_RAD= (Float(::Math_obj::PI) / Float((int)180));
}

} // end namespace flixel
} // end namespace util
