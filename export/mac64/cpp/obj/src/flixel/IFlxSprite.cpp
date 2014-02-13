#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,setPosition,)

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,reset,)


static ::String sMemberFields[] = {
	HX_CSTRING("setPosition"),
	HX_CSTRING("reset"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("velocity"),
	HX_CSTRING("scale"),
	HX_CSTRING("origin"),
	HX_CSTRING("offset"),
	HX_CSTRING("immovable"),
	HX_CSTRING("moves"),
	HX_CSTRING("facing"),
	HX_CSTRING("angle"),
	HX_CSTRING("alpha"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

Class IFlxSprite_obj::__mClass;

void IFlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.IFlxSprite"), hx::TCanCast< IFlxSprite_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IFlxSprite_obj::__boot()
{
}

} // end namespace flixel
