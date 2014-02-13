#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FontDefault
#include <flixel/system/_FlxAssets/FontDefault.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{

Void FlxAssets_obj::__construct()
{
	return null();
}

FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::init( ){
{
		HX_STACK_PUSH("FlxAssets::init","flixel/system/FlxAssets.hx",75);
		HX_STACK_LINE(75)
		::flash::text::Font_obj::registerFont(hx::ClassOf< ::flixel::system::_FlxAssets::FontDefault >());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,init,(void))

Void FlxAssets_obj::drawLogo( ::flash::display::Graphics graph){
{
		HX_STACK_PUSH("FlxAssets::drawLogo","flixel/system/FlxAssets.hx",84);
		HX_STACK_ARG(graph,"graph");
		HX_STACK_LINE(86)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(87)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(88)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(89)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(90)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(91)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(92)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(93)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(94)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(95)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(96)
		graph->endFill();
		HX_STACK_LINE(99)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(100)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(101)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(102)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(103)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(104)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(105)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(106)
		graph->endFill();
		HX_STACK_LINE(109)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(110)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(111)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(112)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(113)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(114)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(115)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(116)
		graph->endFill();
		HX_STACK_LINE(119)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(120)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(121)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(122)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(123)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(124)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(125)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(126)
		graph->endFill();
		HX_STACK_LINE(129)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(130)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(131)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(132)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(133)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(134)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(135)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(136)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::flash::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_PUSH("FlxAssets::getBitmapData","flixel/system/FlxAssets.hx",140);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(140)
	return ::openfl::Assets_obj::getBitmapData(id,false);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

Void FlxAssets_obj::cacheSounds( ){
{
		HX_STACK_PUSH("FlxAssets::cacheSounds","flixel/system/FlxAssets.hx",148);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,cacheSounds,(void))


FlxAssets_obj::FlxAssets_obj()
{
}

void FlxAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAssets);
	HX_MARK_END_CLASS();
}

void FlxAssets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { return drawLogo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheSounds") ) { return cacheSounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { return FONT_DEFAULT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { return FONT_DEBUGGER; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FONT_DEFAULT"),
	HX_CSTRING("FONT_DEBUGGER"),
	HX_CSTRING("init"),
	HX_CSTRING("drawLogo"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("cacheSounds"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

Class FlxAssets_obj::__mClass;

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxAssets"), hx::TCanCast< FlxAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_CSTRING("Nokia Cellphone FC Small");
	FONT_DEBUGGER= HX_CSTRING("Arial");
}

} // end namespace flixel
} // end namespace system
