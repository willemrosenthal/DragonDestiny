#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_input_keyboard_FlxKey
#include <flixel/system/input/keyboard/FlxKey.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace keyboard{

Void FlxKey_obj::__construct(::String Name)
{
HX_STACK_PUSH("FlxKey::new","flixel/system/input/keyboard/FlxKey.hx",6);
{
	HX_STACK_LINE(24)
	this->last = (int)0;
	HX_STACK_LINE(20)
	this->current = (int)0;
	HX_STACK_LINE(27)
	this->name = Name;
}
;
	return null();
}

FlxKey_obj::~FlxKey_obj() { }

Dynamic FlxKey_obj::__CreateEmpty() { return  new FlxKey_obj; }
hx::ObjectPtr< FlxKey_obj > FlxKey_obj::__new(::String Name)
{  hx::ObjectPtr< FlxKey_obj > result = new FlxKey_obj();
	result->__construct(Name);
	return result;}

Dynamic FlxKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKey_obj > result = new FlxKey_obj();
	result->__construct(inArgs[0]);
	return result;}


FlxKey_obj::FlxKey_obj()
{
}

void FlxKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKey);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxKey_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
};

Class FlxKey_obj::__mClass;

void FlxKey_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.keyboard.FlxKey"), hx::TCanCast< FlxKey_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKey_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard
