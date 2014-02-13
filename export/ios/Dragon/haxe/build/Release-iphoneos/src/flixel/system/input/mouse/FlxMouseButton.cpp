#include <hxcpp.h>

#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace mouse{

Void FlxMouseButton_obj::__construct(hx::Null< bool >  __o_IsLeftMouse)
{
HX_STACK_PUSH("FlxMouseButton::new","flixel/system/input/mouse/FlxMouseButton.hx",9);
bool IsLeftMouse = __o_IsLeftMouse.Default(false);
{
	HX_STACK_LINE(29)
	this->_isLeftMouse = false;
	HX_STACK_LINE(24)
	this->last = (int)0;
	HX_STACK_LINE(20)
	this->current = (int)0;
	HX_STACK_LINE(32)
	this->_isLeftMouse = IsLeftMouse;
}
;
	return null();
}

FlxMouseButton_obj::~FlxMouseButton_obj() { }

Dynamic FlxMouseButton_obj::__CreateEmpty() { return  new FlxMouseButton_obj; }
hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(hx::Null< bool >  __o_IsLeftMouse)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(__o_IsLeftMouse);
	return result;}

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(inArgs[0]);
	return result;}

bool FlxMouseButton_obj::justReleased( ){
	HX_STACK_PUSH("FlxMouseButton::justReleased","flixel/system/input/mouse/FlxMouseButton.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return (bool((this->current == (int)-1)) || bool((this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justReleased,return )

bool FlxMouseButton_obj::justPressed( ){
	HX_STACK_PUSH("FlxMouseButton::justPressed","flixel/system/input/mouse/FlxMouseButton.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return (bool((this->current == (int)2)) || bool((this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justPressed,return )

bool FlxMouseButton_obj::pressed( ){
	HX_STACK_PUSH("FlxMouseButton::pressed","flixel/system/input/mouse/FlxMouseButton.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return (this->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,pressed,return )

Void FlxMouseButton_obj::reset( ){
{
		HX_STACK_PUSH("FlxMouseButton::reset","flixel/system/input/mouse/FlxMouseButton.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_LINE(144)
		this->current = (int)0;
		HX_STACK_LINE(145)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,reset,(void))

Void FlxMouseButton_obj::onUp( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouseButton::onUp","flixel/system/input/mouse/FlxMouseButton.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(116)
		if (((this->current == (int)2))){
			HX_STACK_LINE(126)
			this->current = (int)-2;
		}
		else{
			HX_STACK_LINE(129)
			if (((this->current > (int)0))){
				HX_STACK_LINE(130)
				this->current = (int)-1;
			}
			else{
				HX_STACK_LINE(134)
				this->current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

Void FlxMouseButton_obj::onDown( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouseButton::onDown","flixel/system/input/mouse/FlxMouseButton.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(62)
		if (((this->current > (int)0))){
			HX_STACK_LINE(102)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(106)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

Void FlxMouseButton_obj::update( ){
{
		HX_STACK_PUSH("FlxMouseButton::update","flixel/system/input/mouse/FlxMouseButton.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		if (((bool((this->last == (int)-1)) && bool((this->current == (int)-1))))){
			HX_STACK_LINE(42)
			this->current = (int)0;
		}
		else{
			HX_STACK_LINE(45)
			if (((bool((this->last == (int)2)) && bool((this->current == (int)2))))){
				HX_STACK_LINE(46)
				this->current = (int)1;
			}
			else{
				HX_STACK_LINE(49)
				if (((bool((this->last == (int)-2)) && bool((this->current == (int)-2))))){
					HX_STACK_LINE(50)
					this->current = (int)0;
				}
			}
		}
		HX_STACK_LINE(54)
		this->last = this->current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,update,(void))


FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(_isLeftMouse,"_isLeftMouse");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isLeftMouse,"_isLeftMouse");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
}

Dynamic FlxMouseButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"_isLeftMouse") ) { return _isLeftMouse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isLeftMouse") ) { _isLeftMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isLeftMouse"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("onUp"),
	HX_CSTRING("onDown"),
	HX_CSTRING("update"),
	HX_CSTRING("_isLeftMouse"),
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

Class FlxMouseButton_obj::__mClass;

void FlxMouseButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.mouse.FlxMouseButton"), hx::TCanCast< FlxMouseButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMouseButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace mouse
