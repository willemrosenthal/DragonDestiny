#include <hxcpp.h>

#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
namespace flixel{

HX_DEFINE_DYNAMIC_FUNC0(IDestroyable_obj,destroy,)


static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDestroyable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDestroyable_obj::__mClass,"__mClass");
};

Class IDestroyable_obj::__mClass;

void IDestroyable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.IDestroyable"), hx::TCanCast< IDestroyable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IDestroyable_obj::__boot()
{
}

} // end namespace flixel
