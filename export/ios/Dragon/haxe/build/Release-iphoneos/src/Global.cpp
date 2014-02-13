#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Global_obj::__construct()
{
	return null();
}

Global_obj::~Global_obj() { }

Dynamic Global_obj::__CreateEmpty() { return  new Global_obj; }
hx::ObjectPtr< Global_obj > Global_obj::__new()
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

Dynamic Global_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

bool Global_obj::ini;

::flixel::util::FlxPoint Global_obj::zeroPoint;

::String Global_obj::music;

Float Global_obj::gameZoom;

::flixel::group::FlxGroup Global_obj::game;

Float Global_obj::speed;

Float Global_obj::initialSpeed;

int Global_obj::dbLast;

Float Global_obj::ratio;

Array< Float > Global_obj::posX;

Array< Float > Global_obj::posY;

Float Global_obj::dragSpeed;

Float Global_obj::fadeSpeed;

int Global_obj::blurEmitSpeed;

::flixel::group::FlxGroup Global_obj::blur;

bool Global_obj::gameOver;

int Global_obj::total;

Float Global_obj::dragonHeadX;


Global_obj::Global_obj()
{
}

void Global_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Global);
	HX_MARK_END_CLASS();
}

void Global_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Global_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { return ini; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"posX") ) { return posX; }
		if (HX_FIELD_EQ(inName,"posY") ) { return posY; }
		if (HX_FIELD_EQ(inName,"blur") ) { return blur; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		if (HX_FIELD_EQ(inName,"total") ) { return total; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dbLast") ) { return dbLast; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameZoom") ) { return gameZoom; }
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		if (HX_FIELD_EQ(inName,"dragSpeed") ) { return dragSpeed; }
		if (HX_FIELD_EQ(inName,"fadeSpeed") ) { return fadeSpeed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dragonHeadX") ) { return dragonHeadX; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialSpeed") ) { return initialSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blurEmitSpeed") ) { return blurEmitSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Global_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { ini=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posY") ) { posY=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blur") ) { blur=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"total") ) { total=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dbLast") ) { dbLast=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameZoom") ) { gameZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameOver") ) { gameOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragSpeed") ) { dragSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fadeSpeed") ) { fadeSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dragonHeadX") ) { dragonHeadX=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialSpeed") ) { initialSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blurEmitSpeed") ) { blurEmitSpeed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Global_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ini"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("music"),
	HX_CSTRING("gameZoom"),
	HX_CSTRING("game"),
	HX_CSTRING("speed"),
	HX_CSTRING("initialSpeed"),
	HX_CSTRING("dbLast"),
	HX_CSTRING("ratio"),
	HX_CSTRING("posX"),
	HX_CSTRING("posY"),
	HX_CSTRING("dragSpeed"),
	HX_CSTRING("fadeSpeed"),
	HX_CSTRING("blurEmitSpeed"),
	HX_CSTRING("blur"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("total"),
	HX_CSTRING("dragonHeadX"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Global_obj::ini,"ini");
	HX_MARK_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(Global_obj::music,"music");
	HX_MARK_MEMBER_NAME(Global_obj::gameZoom,"gameZoom");
	HX_MARK_MEMBER_NAME(Global_obj::game,"game");
	HX_MARK_MEMBER_NAME(Global_obj::speed,"speed");
	HX_MARK_MEMBER_NAME(Global_obj::initialSpeed,"initialSpeed");
	HX_MARK_MEMBER_NAME(Global_obj::dbLast,"dbLast");
	HX_MARK_MEMBER_NAME(Global_obj::ratio,"ratio");
	HX_MARK_MEMBER_NAME(Global_obj::posX,"posX");
	HX_MARK_MEMBER_NAME(Global_obj::posY,"posY");
	HX_MARK_MEMBER_NAME(Global_obj::dragSpeed,"dragSpeed");
	HX_MARK_MEMBER_NAME(Global_obj::fadeSpeed,"fadeSpeed");
	HX_MARK_MEMBER_NAME(Global_obj::blurEmitSpeed,"blurEmitSpeed");
	HX_MARK_MEMBER_NAME(Global_obj::blur,"blur");
	HX_MARK_MEMBER_NAME(Global_obj::gameOver,"gameOver");
	HX_MARK_MEMBER_NAME(Global_obj::total,"total");
	HX_MARK_MEMBER_NAME(Global_obj::dragonHeadX,"dragonHeadX");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Global_obj::ini,"ini");
	HX_VISIT_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(Global_obj::music,"music");
	HX_VISIT_MEMBER_NAME(Global_obj::gameZoom,"gameZoom");
	HX_VISIT_MEMBER_NAME(Global_obj::game,"game");
	HX_VISIT_MEMBER_NAME(Global_obj::speed,"speed");
	HX_VISIT_MEMBER_NAME(Global_obj::initialSpeed,"initialSpeed");
	HX_VISIT_MEMBER_NAME(Global_obj::dbLast,"dbLast");
	HX_VISIT_MEMBER_NAME(Global_obj::ratio,"ratio");
	HX_VISIT_MEMBER_NAME(Global_obj::posX,"posX");
	HX_VISIT_MEMBER_NAME(Global_obj::posY,"posY");
	HX_VISIT_MEMBER_NAME(Global_obj::dragSpeed,"dragSpeed");
	HX_VISIT_MEMBER_NAME(Global_obj::fadeSpeed,"fadeSpeed");
	HX_VISIT_MEMBER_NAME(Global_obj::blurEmitSpeed,"blurEmitSpeed");
	HX_VISIT_MEMBER_NAME(Global_obj::blur,"blur");
	HX_VISIT_MEMBER_NAME(Global_obj::gameOver,"gameOver");
	HX_VISIT_MEMBER_NAME(Global_obj::total,"total");
	HX_VISIT_MEMBER_NAME(Global_obj::dragonHeadX,"dragonHeadX");
};

Class Global_obj::__mClass;

void Global_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Global"), hx::TCanCast< Global_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Global_obj::__boot()
{
	music= HX_CSTRING("");
	speed= (int)100;
	initialSpeed= (int)100;
	dbLast= (int)4;
	ratio= (int)3;
	posX= Array_obj< Float >::__new();
	posY= Array_obj< Float >::__new();
	dragSpeed= (int)3;
	fadeSpeed= 0.05;
	blurEmitSpeed= (int)3;
	gameOver= false;
	total= (int)0;
	dragonHeadX= (int)124;
}

