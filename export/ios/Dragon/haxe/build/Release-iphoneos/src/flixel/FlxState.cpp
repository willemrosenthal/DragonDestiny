#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{

Void FlxState_obj::__construct()
{
HX_STACK_PUSH("FlxState::new","flixel/FlxState.hx",9);
{
	HX_STACK_LINE(54)
	this->_useMouse = false;
	HX_STACK_LINE(86)
	super::__construct(null());
	HX_STACK_LINE(88)
	this->persistentUpdate = false;
	HX_STACK_LINE(89)
	this->persistentDraw = true;
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		bool Value = ::flixel::FlxG_obj::mouse->_updateCursorContainer;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(91)
		this->_useMouse = Value;
		HX_STACK_LINE(91)
		this->updateMouseVisibility();
		HX_STACK_LINE(91)
		Value;
	}
}
;
	return null();
}

FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new()
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Void FlxState_obj::onResize( int Width,int Height){
{
		HX_STACK_PUSH("FlxState::onResize","flixel/FlxState.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

Void FlxState_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxState::onFocus","flixel/FlxState.hx",231);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxState::onFocusLost","flixel/FlxState.hx",225);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxState::destroy","flixel/FlxState.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_LINE(213)
		if (((this->_subState != null()))){
			HX_STACK_LINE(215)
			bool Destroy = true;		HX_STACK_VAR(Destroy,"Destroy");
			HX_STACK_LINE(215)
			this->setSubState(null(),null(),Destroy);
		}
		HX_STACK_LINE(218)
		this->super::destroy();
	}
return null();
}


Void FlxState_obj::subStateCloseHandler( hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_PUSH("FlxState::subStateCloseHandler","flixel/FlxState.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(197)
		if (((this->_subState->closeCallback != null()))){
			HX_STACK_LINE(198)
			this->_subState->closeCallback();
		}
		HX_STACK_LINE(202)
		if ((Destroy)){
			HX_STACK_LINE(203)
			this->_subState->destroy();
		}
		HX_STACK_LINE(206)
		this->_subState = null();
		HX_STACK_LINE(208)
		this->updateMouseVisibility();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,subStateCloseHandler,(void))

Void FlxState_obj::setSubState( ::flixel::FlxSubState RequestedState,Dynamic CloseCallback,hx::Null< bool >  __o_DestroyPrevious){
bool DestroyPrevious = __o_DestroyPrevious.Default(true);
	HX_STACK_PUSH("FlxState::setSubState","flixel/FlxState.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_ARG(RequestedState,"RequestedState");
	HX_STACK_ARG(CloseCallback,"CloseCallback");
	HX_STACK_ARG(DestroyPrevious,"DestroyPrevious");
{
		HX_STACK_LINE(158)
		if (((this->_subState == RequestedState))){
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(161)
		if (((this->_subState != null()))){
			HX_STACK_LINE(162)
			this->_subState->close(DestroyPrevious);
		}
		HX_STACK_LINE(167)
		this->_subState = RequestedState;
		HX_STACK_LINE(169)
		if (((this->_subState != null()))){
			HX_STACK_LINE(173)
			this->_subState->_parentState = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(175)
			this->_subState->closeCallback = CloseCallback;
			HX_STACK_LINE(178)
			if ((!(this->persistentUpdate))){
				HX_STACK_LINE(180)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(180)
				while(((_g < _g1->length))){
					HX_STACK_LINE(180)
					::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
					HX_STACK_LINE(180)
					++(_g);
					HX_STACK_LINE(180)
					input->reset();
				}
			}
			HX_STACK_LINE(183)
			if ((!(this->_subState->_initialized))){
				HX_STACK_LINE(185)
				this->_subState->_initialized = true;
				HX_STACK_LINE(186)
				this->_subState->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxState_obj,setSubState,(void))

Void FlxState_obj::closeSubState( hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_PUSH("FlxState::closeSubState","flixel/FlxState.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(146)
		this->setSubState(null(),null(),Destroy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,closeSubState,(void))

Void FlxState_obj::tryUpdate( ){
{
		HX_STACK_PUSH("FlxState::tryUpdate","flixel/FlxState.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_LINE(131)
		if (((bool(this->persistentUpdate) || bool((this->_subState == null()))))){
			HX_STACK_LINE(132)
			this->update();
		}
		HX_STACK_LINE(136)
		if (((this->_subState != null()))){
			HX_STACK_LINE(137)
			this->_subState->tryUpdate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,tryUpdate,(void))

Void FlxState_obj::draw( ){
{
		HX_STACK_PUSH("FlxState::draw","flixel/FlxState.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_LINE(103)
		if (((bool(this->persistentDraw) || bool((this->_subState == null()))))){
			HX_STACK_LINE(104)
			this->super::draw();
		}
		HX_STACK_LINE(108)
		if (((this->_subState != null()))){
			HX_STACK_LINE(109)
			this->_subState->draw();
		}
	}
return null();
}


Void FlxState_obj::create( ){
{
		HX_STACK_PUSH("FlxState::create","flixel/FlxState.hx",99);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

Void FlxState_obj::updateMouseVisibility( ){
{
		HX_STACK_PUSH("FlxState::updateMouseVisibility","flixel/FlxState.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		::flixel::system::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(73)
		_this->_updateCursorContainer = false;
		HX_STACK_LINE(73)
		_this->cursorContainer->set_visible(false);
		HX_STACK_LINE(73)
		::flash::ui::Mouse_obj::hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,updateMouseVisibility,(void))

bool FlxState_obj::set_useMouse( bool Value){
	HX_STACK_PUSH("FlxState::set_useMouse","flixel/FlxState.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(65)
	this->_useMouse = Value;
	HX_STACK_LINE(66)
	this->updateMouseVisibility();
	HX_STACK_LINE(67)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_useMouse,return )

bool FlxState_obj::get_useMouse( ){
	HX_STACK_PUSH("FlxState::get_useMouse","flixel/FlxState.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_useMouse;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_useMouse,return )

int FlxState_obj::set_bgColor( int Value){
	HX_STACK_PUSH("FlxState::set_bgColor","flixel/FlxState.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(50)
	return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )

int FlxState_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxState::get_bgColor","flixel/FlxState.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return (  (((::flixel::FlxG_obj::camera == null()))) ? int((int)-16777216) : int(::flixel::FlxG_obj::camera->bgColor) );
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

::flixel::FlxSubState FlxState_obj::get_subState( ){
	HX_STACK_PUSH("FlxState::get_subState","flixel/FlxState.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->_subState;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_subState,return )


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(_useMouse,"_useMouse");
	HX_MARK_MEMBER_NAME(_bgColor,"_bgColor");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_subState,"_subState");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_useMouse,"_useMouse");
	HX_VISIT_MEMBER_NAME(_bgColor,"_bgColor");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_subState,"_subState");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"useMouse") ) { return get_useMouse(); }
		if (HX_FIELD_EQ(inName,"_bgColor") ) { return _bgColor; }
		if (HX_FIELD_EQ(inName,"subState") ) { return inCallProp ? get_subState() : subState; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return tryUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_useMouse") ) { return _useMouse; }
		if (HX_FIELD_EQ(inName,"_subState") ) { return _subState; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"setSubState") ) { return setSubState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_useMouse") ) { return set_useMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useMouse") ) { return get_useMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subState") ) { return get_subState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return closeSubState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return persistentDraw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return persistentUpdate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"subStateCloseHandler") ) { return subStateCloseHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateMouseVisibility") ) { return updateMouseVisibility_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useMouse") ) { return set_useMouse(inValue); }
		if (HX_FIELD_EQ(inName,"_bgColor") ) { _bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_useMouse") ) { _useMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subState") ) { _subState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useMouse"));
	outFields->push(HX_CSTRING("_useMouse"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("_bgColor"));
	outFields->push(HX_CSTRING("subState"));
	outFields->push(HX_CSTRING("_subState"));
	outFields->push(HX_CSTRING("persistentDraw"));
	outFields->push(HX_CSTRING("persistentUpdate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onResize"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("destroy"),
	HX_CSTRING("subStateCloseHandler"),
	HX_CSTRING("setSubState"),
	HX_CSTRING("closeSubState"),
	HX_CSTRING("tryUpdate"),
	HX_CSTRING("draw"),
	HX_CSTRING("create"),
	HX_CSTRING("updateMouseVisibility"),
	HX_CSTRING("set_useMouse"),
	HX_CSTRING("get_useMouse"),
	HX_CSTRING("_useMouse"),
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("_bgColor"),
	HX_CSTRING("get_subState"),
	HX_CSTRING("subState"),
	HX_CSTRING("_subState"),
	HX_CSTRING("persistentDraw"),
	HX_CSTRING("persistentUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxState_obj::__boot()
{
}

} // end namespace flixel
