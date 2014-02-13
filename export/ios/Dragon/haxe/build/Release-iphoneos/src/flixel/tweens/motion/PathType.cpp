#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_motion_PathType
#include <flixel/tweens/motion/PathType.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

::flixel::tweens::motion::PathType PathType_obj::LINEAR;

::flixel::tweens::motion::PathType PathType_obj::QUAD;

HX_DEFINE_CREATE_ENUM(PathType_obj)

int PathType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("QUAD")) return 1;
	return super::__FindIndex(inName);
}

int PathType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("QUAD")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic PathType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LINEAR")) return LINEAR;
	if (inName==HX_CSTRING("QUAD")) return QUAD;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LINEAR"),
	HX_CSTRING("QUAD"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathType_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(PathType_obj::QUAD,"QUAD");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathType_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(PathType_obj::QUAD,"QUAD");
};

static ::String sMemberFields[] = { ::String(null()) };
Class PathType_obj::__mClass;

Dynamic __Create_PathType_obj() { return new PathType_obj; }

void PathType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.PathType"), hx::TCanCast< PathType_obj >,sStaticFields,sMemberFields,
	&__Create_PathType_obj, &__Create,
	&super::__SGetClass(), &CreatePathType_obj, sMarkStatics, sVisitStatic);
}

void PathType_obj::__boot()
{
hx::Static(LINEAR) = hx::CreateEnum< PathType_obj >(HX_CSTRING("LINEAR"),0);
hx::Static(QUAD) = hx::CreateEnum< PathType_obj >(HX_CSTRING("QUAD"),1);
}


} // end namespace flixel
} // end namespace tweens
} // end namespace motion
