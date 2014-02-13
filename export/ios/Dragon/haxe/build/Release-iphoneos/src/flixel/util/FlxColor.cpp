#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColor
#include <flixel/util/FlxColor.h>
#endif
namespace flixel{
namespace util{

Void FlxColor_obj::__construct()
{
	return null();
}

FlxColor_obj::~FlxColor_obj() { }

Dynamic FlxColor_obj::__CreateEmpty() { return  new FlxColor_obj; }
hx::ObjectPtr< FlxColor_obj > FlxColor_obj::__new()
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

Dynamic FlxColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}


FlxColor_obj::FlxColor_obj()
{
}

void FlxColor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxColor);
	HX_MARK_END_CLASS();
}

void FlxColor_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

Class FlxColor_obj::__mClass;

void FlxColor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxColor"), hx::TCanCast< FlxColor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxColor_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
