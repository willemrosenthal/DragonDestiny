#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapDataChannel
#include <flash/display/BitmapDataChannel.h>
#endif
namespace flash{
namespace display{

Void BitmapDataChannel_obj::__construct()
{
	return null();
}

BitmapDataChannel_obj::~BitmapDataChannel_obj() { }

Dynamic BitmapDataChannel_obj::__CreateEmpty() { return  new BitmapDataChannel_obj; }
hx::ObjectPtr< BitmapDataChannel_obj > BitmapDataChannel_obj::__new()
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}

Dynamic BitmapDataChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}


BitmapDataChannel_obj::BitmapDataChannel_obj()
{
}

void BitmapDataChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapDataChannel);
	HX_MARK_END_CLASS();
}

void BitmapDataChannel_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BitmapDataChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataChannel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
};

Class BitmapDataChannel_obj::__mClass;

void BitmapDataChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.BitmapDataChannel"), hx::TCanCast< BitmapDataChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapDataChannel_obj::__boot()
{
}

} // end namespace flash
} // end namespace display
