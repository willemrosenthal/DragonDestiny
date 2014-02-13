#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyList
#include <flixel/system/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyShortcuts
#include <flixel/system/input/keyboard/FlxKeyShortcuts.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace keyboard{

Void FlxKeyShortcuts_obj::__construct()
{
HX_STACK_PUSH("FlxKeyShortcuts::new","flixel/system/input/keyboard/FlxKeyShortcuts.hx",24);
{
	HX_STACK_LINE(25)
	this->pressed = ::flixel::system::input::keyboard::FlxKeyList_obj::__new(::flixel::FlxG_obj::keyboard->pressed);
	HX_STACK_LINE(26)
	this->justPressed = ::flixel::system::input::keyboard::FlxKeyList_obj::__new(::flixel::FlxG_obj::keyboard->justPressed);
	HX_STACK_LINE(27)
	this->justReleased = ::flixel::system::input::keyboard::FlxKeyList_obj::__new(::flixel::FlxG_obj::keyboard->justReleased);
}
;
	return null();
}

FlxKeyShortcuts_obj::~FlxKeyShortcuts_obj() { }

Dynamic FlxKeyShortcuts_obj::__CreateEmpty() { return  new FlxKeyShortcuts_obj; }
hx::ObjectPtr< FlxKeyShortcuts_obj > FlxKeyShortcuts_obj::__new()
{  hx::ObjectPtr< FlxKeyShortcuts_obj > result = new FlxKeyShortcuts_obj();
	result->__construct();
	return result;}

Dynamic FlxKeyShortcuts_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyShortcuts_obj > result = new FlxKeyShortcuts_obj();
	result->__construct();
	return result;}


FlxKeyShortcuts_obj::FlxKeyShortcuts_obj()
{
}

void FlxKeyShortcuts_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyShortcuts);
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_END_CLASS();
}

void FlxKeyShortcuts_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
}

Dynamic FlxKeyShortcuts_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyShortcuts_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< ::flixel::system::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< ::flixel::system::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< ::flixel::system::input::keyboard::FlxKeyList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyShortcuts_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("pressed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyShortcuts_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyShortcuts_obj::__mClass,"__mClass");
};

Class FlxKeyShortcuts_obj::__mClass;

void FlxKeyShortcuts_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.keyboard.FlxKeyShortcuts"), hx::TCanCast< FlxKeyShortcuts_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKeyShortcuts_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard
