#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_motion_MotionType
#include <flixel/tweens/motion/MotionType.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

::flixel::tweens::motion::MotionType MotionType_obj::CIRCULAR;

::flixel::tweens::motion::MotionType MotionType_obj::CUBIC;

::flixel::tweens::motion::MotionType MotionType_obj::LINEAR;

::flixel::tweens::motion::MotionType MotionType_obj::QUAD;

HX_DEFINE_CREATE_ENUM(MotionType_obj)

int MotionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CIRCULAR")) return 1;
	if (inName==HX_CSTRING("CUBIC")) return 3;
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("QUAD")) return 2;
	return super::__FindIndex(inName);
}

int MotionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CIRCULAR")) return 0;
	if (inName==HX_CSTRING("CUBIC")) return 0;
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("QUAD")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MotionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CIRCULAR")) return CIRCULAR;
	if (inName==HX_CSTRING("CUBIC")) return CUBIC;
	if (inName==HX_CSTRING("LINEAR")) return LINEAR;
	if (inName==HX_CSTRING("QUAD")) return QUAD;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LINEAR"),
	HX_CSTRING("CIRCULAR"),
	HX_CSTRING("QUAD"),
	HX_CSTRING("CUBIC"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionType_obj::CIRCULAR,"CIRCULAR");
	HX_MARK_MEMBER_NAME(MotionType_obj::CUBIC,"CUBIC");
	HX_MARK_MEMBER_NAME(MotionType_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(MotionType_obj::QUAD,"QUAD");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MotionType_obj::CIRCULAR,"CIRCULAR");
	HX_VISIT_MEMBER_NAME(MotionType_obj::CUBIC,"CUBIC");
	HX_VISIT_MEMBER_NAME(MotionType_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(MotionType_obj::QUAD,"QUAD");
};

static ::String sMemberFields[] = { ::String(null()) };
Class MotionType_obj::__mClass;

Dynamic __Create_MotionType_obj() { return new MotionType_obj; }

void MotionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.MotionType"), hx::TCanCast< MotionType_obj >,sStaticFields,sMemberFields,
	&__Create_MotionType_obj, &__Create,
	&super::__SGetClass(), &CreateMotionType_obj, sMarkStatics, sVisitStatic);
}

void MotionType_obj::__boot()
{
hx::Static(CIRCULAR) = hx::CreateEnum< MotionType_obj >(HX_CSTRING("CIRCULAR"),1);
hx::Static(CUBIC) = hx::CreateEnum< MotionType_obj >(HX_CSTRING("CUBIC"),3);
hx::Static(LINEAR) = hx::CreateEnum< MotionType_obj >(HX_CSTRING("LINEAR"),0);
hx::Static(QUAD) = hx::CreateEnum< MotionType_obj >(HX_CSTRING("QUAD"),2);
}


} // end namespace flixel
} // end namespace tweens
} // end namespace motion
