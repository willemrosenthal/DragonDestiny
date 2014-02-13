#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BmpLogFrontEnd
#include <flixel/system/frontEnds/BmpLogFrontEnd.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void BmpLogFrontEnd_obj::__construct()
{
HX_STACK_PUSH("BmpLogFrontEnd::new","flixel/system/frontEnds/BmpLogFrontEnd.hx",11);
{
}
;
	return null();
}

BmpLogFrontEnd_obj::~BmpLogFrontEnd_obj() { }

Dynamic BmpLogFrontEnd_obj::__CreateEmpty() { return  new BmpLogFrontEnd_obj; }
hx::ObjectPtr< BmpLogFrontEnd_obj > BmpLogFrontEnd_obj::__new()
{  hx::ObjectPtr< BmpLogFrontEnd_obj > result = new BmpLogFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic BmpLogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BmpLogFrontEnd_obj > result = new BmpLogFrontEnd_obj();
	result->__construct();
	return result;}

Void BmpLogFrontEnd_obj::add( ::flash::display::BitmapData Pixels){
{
		HX_STACK_PUSH("BmpLogFrontEnd::add","flixel/system/frontEnds/BmpLogFrontEnd.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Pixels,"Pixels");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BmpLogFrontEnd_obj,add,(void))


BmpLogFrontEnd_obj::BmpLogFrontEnd_obj()
{
}

void BmpLogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BmpLogFrontEnd);
	HX_MARK_END_CLASS();
}

void BmpLogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BmpLogFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BmpLogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BmpLogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("add"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BmpLogFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BmpLogFrontEnd_obj::__mClass,"__mClass");
};

Class BmpLogFrontEnd_obj::__mClass;

void BmpLogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.BmpLogFrontEnd"), hx::TCanCast< BmpLogFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BmpLogFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
