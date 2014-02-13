#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepad
#include <flixel/system/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepadButton
#include <flixel/system/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepadManager
#include <flixel/system/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_PUSH("FlxGamepadManager::new","flixel/system/input/gamepad/FlxGamepadManager.hx",31);
{
	HX_STACK_LINE(37)
	this->_gamepads = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(39)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->handleAxisMove_dyn(),null(),null(),null());
	HX_STACK_LINE(40)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->handleBallMove_dyn(),null(),null(),null());
	HX_STACK_LINE(41)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->handleButtonDown_dyn(),null(),null(),null());
	HX_STACK_LINE(42)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->handleButtonUp_dyn(),null(),null(),null());
	HX_STACK_LINE(43)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->handleHatMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::system::input::IFlxInput_obj)) return operator ::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Float FlxGamepadManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_PUSH("FlxGamepadManager::set_globalDeadZone","flixel/system/input/gamepad/FlxGamepadManager.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DeadZone,"DeadZone");
	HX_STACK_LINE(320)
	this->globalDeadZone = DeadZone;
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepadManager_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepadManager.hx",322);
			{
				HX_STACK_LINE(322)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepadManager.hx",322);
					{
						HX_STACK_LINE(322)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(322)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(322)
	for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::system::input::gamepad::FlxGamepad gamepad = __it->next();
		gamepad->deadZone = DeadZone;
	}
	HX_STACK_LINE(327)
	return this->globalDeadZone;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,set_globalDeadZone,return )

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_PUSH("FlxGamepadManager::get_numActiveGamepads","flixel/system/input/gamepad/FlxGamepadManager.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_LINE(296)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepadManager_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepadManager.hx",298);
			{
				HX_STACK_LINE(298)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepadManager.hx",298);
					{
						HX_STACK_LINE(298)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(298)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(298)
	for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::system::input::gamepad::FlxGamepad gamepad = __it->next();
		(count)++;
	}
	HX_STACK_LINE(303)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

::String FlxGamepadManager_obj::toString( ){
	HX_STACK_PUSH("FlxGamepadManager::toString","flixel/system/input/gamepad/FlxGamepadManager.hx",285);
	HX_STACK_THIS(this);
	HX_STACK_LINE(285)
	return HX_CSTRING("FlxGamepadManager");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,toString,return )

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxGamepadManager::onFocusLost","flixel/system/input/gamepad/FlxGamepadManager.hx",280);
		HX_STACK_THIS(this);
		HX_STACK_LINE(280)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxGamepadManager::onFocus","flixel/system/input/gamepad/FlxGamepadManager.hx",277);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleHatMove","flixel/system/input/gamepad/FlxGamepadManager.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(271)
		::flixel::system::input::gamepad::FlxGamepad gamepad = this->get(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(272)
		gamepad->hat->set_x((  (((::Math_obj::abs(FlashEvent->x) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->x) ));
		HX_STACK_LINE(273)
		gamepad->hat->set_y((  (((::Math_obj::abs(FlashEvent->y) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->y) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleBallMove","flixel/system/input/gamepad/FlxGamepadManager.hx",258);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(259)
		::flixel::system::input::gamepad::FlxGamepad gamepad = this->get(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(260)
		gamepad->ball->set_x((  (((::Math_obj::abs(FlashEvent->x) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->x) ));
		HX_STACK_LINE(261)
		gamepad->ball->set_y((  (((::Math_obj::abs(FlashEvent->y) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->y) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleAxisMove","flixel/system/input/gamepad/FlxGamepadManager.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(248)
		::flixel::system::input::gamepad::FlxGamepad gamepad = this->get(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(249)
		gamepad->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::handleButtonUp( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleButtonUp","flixel/system/input/gamepad/FlxGamepadManager.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(223)
		::flixel::system::input::gamepad::FlxGamepad gamepad = this->get(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(224)
		::flixel::system::input::gamepad::FlxGamepadButton object = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(226)
		if (((object == null()))){
			HX_STACK_LINE(227)
			return null();
		}
		HX_STACK_LINE(231)
		if (((object->current > (int)0))){
			HX_STACK_LINE(232)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(236)
			object->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleButtonDown( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleButtonDown","flixel/system/input/gamepad/FlxGamepadManager.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(198)
		::flixel::system::input::gamepad::FlxGamepad gamepad = this->get(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(199)
		::flixel::system::input::gamepad::FlxGamepadButton o = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(201)
		if (((o == null()))){
			HX_STACK_LINE(202)
			return null();
		}
		HX_STACK_LINE(206)
		if (((o->current > (int)0))){
			HX_STACK_LINE(207)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(211)
			o->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGamepadManager::destroy","flixel/system/input/gamepad/FlxGamepadManager.hx",180);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepadManager.hx",181);
				{
					HX_STACK_LINE(181)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepadManager.hx",181);
						{
							HX_STACK_LINE(181)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(181)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->destroy();
		}
		HX_STACK_LINE(186)
		this->_gamepads = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(187)
		this->numActiveGamepads = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxGamepadManager::reset","flixel/system/input/gamepad/FlxGamepadManager.hx",169);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepadManager.hx",170);
				{
					HX_STACK_LINE(170)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepadManager.hx",170);
						{
							HX_STACK_LINE(170)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(170)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(169)
		for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_PUSH("FlxGamepadManager::update","flixel/system/input/gamepad/FlxGamepadManager.hx",158);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepadManager.hx",159);
				{
					HX_STACK_LINE(159)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepadManager.hx",159);
						{
							HX_STACK_LINE(159)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(159)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(158)
		for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

bool FlxGamepadManager_obj::anyJustReleased( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyJustReleased","flixel/system/input/gamepad/FlxGamepadManager.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(139)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(140)
	::flixel::system::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(142)
	while(((gamepad != null()))){
		HX_STACK_LINE(144)
		if ((gamepad->justReleased(ButtonID))){
			HX_STACK_LINE(145)
			return true;
		}
		HX_STACK_LINE(149)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(151)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

bool FlxGamepadManager_obj::anyJustPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyJustPressed","flixel/system/input/gamepad/FlxGamepadManager.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(116)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(117)
	::flixel::system::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(119)
	while(((gamepad != null()))){
		HX_STACK_LINE(121)
		if ((gamepad->justPressed(ButtonID))){
			HX_STACK_LINE(122)
			return true;
		}
		HX_STACK_LINE(126)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(128)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyPressed","flixel/system/input/gamepad/FlxGamepadManager.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(92)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(93)
	::flixel::system::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(95)
	while(((gamepad != null()))){
		HX_STACK_LINE(97)
		if ((gamepad->pressed(ButtonID))){
			HX_STACK_LINE(98)
			return true;
		}
		HX_STACK_LINE(102)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(105)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyButton( ){
	HX_STACK_PUSH("FlxGamepadManager::anyButton","flixel/system/input/gamepad/FlxGamepadManager.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(69)
	::flixel::system::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(71)
	while(((gamepad != null()))){
		HX_STACK_LINE(73)
		if ((gamepad->anyButton())){
			HX_STACK_LINE(74)
			return true;
		}
		HX_STACK_LINE(78)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(81)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyButton,return )

::flixel::system::input::gamepad::FlxGamepad FlxGamepadManager_obj::get( int GamepadID){
	HX_STACK_PUSH("FlxGamepadManager::get","flixel/system/input/gamepad/FlxGamepadManager.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(GamepadID,"GamepadID");
	HX_STACK_LINE(52)
	::flixel::system::input::gamepad::FlxGamepad gamepad = this->_gamepads->get(GamepadID);		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(54)
	if (((gamepad == null()))){
		HX_STACK_LINE(56)
		gamepad = ::flixel::system::input::gamepad::FlxGamepad_obj::__new(GamepadID,this->globalDeadZone);
		HX_STACK_LINE(57)
		this->_gamepads->set(GamepadID,gamepad);
	}
	HX_STACK_LINE(60)
	return gamepad;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,get,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp ? get_numActiveGamepads() : numActiveGamepads; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("globalDeadZone"));
	outFields->push(HX_CSTRING("numActiveGamepads"));
	outFields->push(HX_CSTRING("_gamepads"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_globalDeadZone"),
	HX_CSTRING("globalDeadZone"),
	HX_CSTRING("get_numActiveGamepads"),
	HX_CSTRING("numActiveGamepads"),
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("get"),
	HX_CSTRING("_gamepads"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.gamepad.FlxGamepadManager"), hx::TCanCast< FlxGamepadManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGamepadManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace gamepad
