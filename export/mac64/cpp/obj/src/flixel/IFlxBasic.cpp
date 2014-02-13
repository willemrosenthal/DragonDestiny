#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
namespace flixel{

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,toString,return )

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,revive,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,kill,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,destroy,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,update,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,draw,)


static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("revive"),
	HX_CSTRING("kill"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("exists"),
	HX_CSTRING("alive"),
	HX_CSTRING("visible"),
	HX_CSTRING("active"),
	HX_CSTRING("cameras"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

Class IFlxBasic_obj::__mClass;

void IFlxBasic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.IFlxBasic"), hx::TCanCast< IFlxBasic_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IFlxBasic_obj::__boot()
{
}

} // end namespace flixel
