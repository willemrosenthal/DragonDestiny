#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepadManager
#include <flixel/system/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyShortcuts
#include <flixel/system/input/keyboard/FlxKeyShortcuts.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouchManager
#include <flixel/system/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxG_obj::__construct()
{
	return null();
}

FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

::String FlxG_obj::LIBRARY_NAME;

::String FlxG_obj::LIBRARY_MAJOR_VERSION;

::String FlxG_obj::LIBRARY_MINOR_VERSION;

::flixel::FlxGame FlxG_obj::game;

bool FlxG_obj::paused;

bool FlxG_obj::autoPause;

bool FlxG_obj::autoResize;

bool FlxG_obj::fixedTimestep;

Float FlxG_obj::elapsed;

Float FlxG_obj::timeScale;

int FlxG_obj::width;

int FlxG_obj::height;

::flixel::util::FlxRect FlxG_obj::worldBounds;

int FlxG_obj::worldDivisions;

::flixel::FlxCamera FlxG_obj::camera;

::flixel::util::FlxSave FlxG_obj::save;

::flixel::system::input::mouse::FlxMouse FlxG_obj::mouse;

::flixel::system::input::keyboard::FlxKeyboard FlxG_obj::keyboard;

::flixel::system::input::keyboard::FlxKeyShortcuts FlxG_obj::keys;

::flixel::system::input::touch::FlxTouchManager FlxG_obj::touches;

::flixel::system::input::gamepad::FlxGamepadManager FlxG_obj::gamepads;

::flixel::system::frontEnds::InputFrontEnd FlxG_obj::inputs;

::flixel::system::frontEnds::ConsoleFrontEnd FlxG_obj::console;

::flixel::system::frontEnds::LogFrontEnd FlxG_obj::log;

::flixel::system::frontEnds::WatchFrontEnd FlxG_obj::watch;

::flixel::system::frontEnds::DebuggerFrontEnd FlxG_obj::debugger;

::flixel::system::frontEnds::VCRFrontEnd FlxG_obj::vcr;

::flixel::system::frontEnds::BitmapFrontEnd FlxG_obj::bitmap;

::flixel::system::frontEnds::CameraFrontEnd FlxG_obj::cameras;

::flixel::system::frontEnds::PluginFrontEnd FlxG_obj::plugins;

::flixel::system::frontEnds::SoundFrontEnd FlxG_obj::sound;

Void FlxG_obj::init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_PUSH("FlxG::init","flixel/FlxG.hx",244);
		HX_STACK_ARG(Game,"Game");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(Zoom,"Zoom");
		HX_STACK_LINE(248)
		::flixel::FlxG_obj::game = Game;
		HX_STACK_LINE(249)
		::flixel::FlxG_obj::width = ::Std_obj::_int(::Math_obj::abs(Width));
		HX_STACK_LINE(250)
		::flixel::FlxG_obj::height = ::Std_obj::_int(::Math_obj::abs(Height));
		HX_STACK_LINE(251)
		::flixel::FlxCamera_obj::defaultZoom = Zoom;
		HX_STACK_LINE(255)
		::flixel::FlxG_obj::keyboard = hx::TCast< flixel::system::input::keyboard::FlxKeyboard >::cast(::flixel::FlxG_obj::inputs->add(::flixel::system::input::keyboard::FlxKeyboard_obj::__new()));
		HX_STACK_LINE(256)
		::flixel::FlxG_obj::keys = ::flixel::system::input::keyboard::FlxKeyShortcuts_obj::__new();
		HX_STACK_LINE(260)
		::flixel::FlxG_obj::mouse = hx::TCast< flixel::system::input::mouse::FlxMouse >::cast(::flixel::FlxG_obj::inputs->add(::flixel::system::input::mouse::FlxMouse_obj::__new(::flixel::FlxG_obj::game->inputContainer)));
		HX_STACK_LINE(264)
		::flixel::FlxG_obj::touches = hx::TCast< flixel::system::input::touch::FlxTouchManager >::cast(::flixel::FlxG_obj::inputs->add(::flixel::system::input::touch::FlxTouchManager_obj::__new()));
		HX_STACK_LINE(268)
		::flixel::FlxG_obj::gamepads = hx::TCast< flixel::system::input::gamepad::FlxGamepadManager >::cast(::flixel::FlxG_obj::inputs->add(::flixel::system::input::gamepad::FlxGamepadManager_obj::__new()));
		HX_STACK_LINE(275)
		::flixel::FlxG_obj::save->bind(HX_CSTRING("flixel"));
		HX_STACK_LINE(276)
		::flixel::FlxG_obj::sound->loadSavedPrefs();
		HX_STACK_LINE(278)
		::flixel::system::FlxAssets_obj::init();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_PUSH("FlxG::reset","flixel/FlxG.hx",286);
		HX_STACK_LINE(287)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(288)
		::flixel::util::FlxRandom_obj::globalSeed = ::Math_obj::random();
		HX_STACK_LINE(290)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(291)
			while(((_g < _g1->length))){
				HX_STACK_LINE(291)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(291)
				++(_g);
				HX_STACK_LINE(291)
				input->reset();
			}
		}
		HX_STACK_LINE(292)
		::flixel::FlxG_obj::sound->destroySounds(true);
		HX_STACK_LINE(293)
		::flixel::FlxG_obj::paused = false;
		HX_STACK_LINE(294)
		::flixel::FlxG_obj::timeScale = 1.0;
		HX_STACK_LINE(295)
		::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			_this->x = (int)-10;
			HX_STACK_LINE(296)
			_this->y = (int)-10;
			HX_STACK_LINE(296)
			_this->width = (::flixel::FlxG_obj::width + (int)20);
			HX_STACK_LINE(296)
			_this->height = (::flixel::FlxG_obj::height + (int)20);
			HX_STACK_LINE(296)
			_this;
		}
		HX_STACK_LINE(297)
		::flixel::FlxG_obj::worldDivisions = (int)6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

::String FlxG_obj::get_libraryName( ){
	HX_STACK_PUSH("FlxG::get_libraryName","flixel/FlxG.hx",306);
	HX_STACK_LINE(306)
	return ((((::flixel::FlxG_obj::LIBRARY_NAME + HX_CSTRING(" v")) + ::flixel::FlxG_obj::LIBRARY_MAJOR_VERSION) + HX_CSTRING(".")) + ::flixel::FlxG_obj::LIBRARY_MINOR_VERSION);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_libraryName,return )

int FlxG_obj::get_framerate( ){
	HX_STACK_PUSH("FlxG::get_framerate","flixel/FlxG.hx",317);
	HX_STACK_LINE(317)
	return ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->stepMS)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_framerate,return )

int FlxG_obj::set_framerate( int Framerate){
	HX_STACK_PUSH("FlxG::set_framerate","flixel/FlxG.hx",322);
	HX_STACK_ARG(Framerate,"Framerate");
	HX_STACK_LINE(323)
	if (((Framerate < ::flixel::FlxG_obj::get_flashFramerate()))){
		HX_STACK_LINE(324)
		::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxG.framerate: The game's framerate shouldn't be smaller than the flash framerate, since it can stop your game from updating."));
	}
	HX_STACK_LINE(328)
	::flixel::FlxG_obj::game->stepMS = ::Std_obj::_int(::Math_obj::abs((Float((int)1000) / Float(Framerate))));
	HX_STACK_LINE(329)
	::flixel::FlxG_obj::game->stepSeconds = (Float(::flixel::FlxG_obj::game->stepMS) / Float((int)1000));
	HX_STACK_LINE(331)
	if (((::flixel::FlxG_obj::game->maxAccumulation < ::flixel::FlxG_obj::game->stepMS))){
		HX_STACK_LINE(332)
		::flixel::FlxG_obj::game->maxAccumulation = ::flixel::FlxG_obj::game->stepMS;
	}
	HX_STACK_LINE(336)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_framerate,return )

int FlxG_obj::get_flashFramerate( ){
	HX_STACK_PUSH("FlxG::get_flashFramerate","flixel/FlxG.hx",346);
	HX_STACK_LINE(347)
	if (((::flixel::FlxG_obj::game->get_stage() != null()))){
		HX_STACK_LINE(348)
		return ::Std_obj::_int(::flixel::FlxG_obj::game->get_stage()->frameRate);
	}
	HX_STACK_LINE(352)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_flashFramerate,return )

int FlxG_obj::set_flashFramerate( int Framerate){
	HX_STACK_PUSH("FlxG::set_flashFramerate","flixel/FlxG.hx",356);
	HX_STACK_ARG(Framerate,"Framerate");
	HX_STACK_LINE(357)
	if (((Framerate > ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->stepMS)))))){
		HX_STACK_LINE(358)
		::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxG.flashFramerate: The game's framerate shouldn't be smaller than the flash framerate, since it can stop your game from updating."));
	}
	HX_STACK_LINE(362)
	::flixel::FlxG_obj::game->flashFramerate = ::Std_obj::_int(::Math_obj::abs(Framerate));
	HX_STACK_LINE(364)
	if (((::flixel::FlxG_obj::game->get_stage() != null()))){
		HX_STACK_LINE(365)
		::flixel::FlxG_obj::game->get_stage()->set_frameRate(::flixel::FlxG_obj::game->flashFramerate);
	}
	HX_STACK_LINE(369)
	::flixel::FlxG_obj::game->maxAccumulation = (::Std_obj::_int((Float((int)2000) / Float(::flixel::FlxG_obj::game->flashFramerate))) - (int)1);
	HX_STACK_LINE(371)
	if (((::flixel::FlxG_obj::game->maxAccumulation < ::flixel::FlxG_obj::game->stepMS))){
		HX_STACK_LINE(372)
		::flixel::FlxG_obj::game->maxAccumulation = ::flixel::FlxG_obj::game->stepMS;
	}
	HX_STACK_LINE(376)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_flashFramerate,return )

Void FlxG_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxG::resetGame","flixel/FlxG.hx",383);
		HX_STACK_LINE(383)
		::flixel::FlxG_obj::game->requestedReset = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::resizeGame( int Width,int Height){
{
		HX_STACK_PUSH("FlxG::resizeGame","flixel/FlxG.hx",392);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(393)
			_this->set_width(::Math_obj::ceil((Float(Width) / Float(::flixel::FlxG_obj::camera->zoom))));
			HX_STACK_LINE(393)
			_this->set_height(::Math_obj::ceil((Float(Height) / Float(::flixel::FlxG_obj::camera->zoom))));
		}
		HX_STACK_LINE(394)
		::flixel::FlxG_obj::width = Width;
		HX_STACK_LINE(395)
		::flixel::FlxG_obj::height = Height;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeGame,(void))

bool FlxG_obj::fullscreen;

bool FlxG_obj::set_fullscreen( bool Value){
	HX_STACK_PUSH("FlxG::set_fullscreen","flixel/FlxG.hx",405);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(407)
	if ((Value)){
		HX_STACK_LINE(408)
		::flixel::FlxG_obj::game->get_stage()->set_displayState(::flash::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(416)
		::flixel::FlxG_obj::game->get_stage()->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(420)
	return ::flixel::FlxG_obj::fullscreen = Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_fullscreen,return )

::flash::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_PUSH("FlxG::get_stage","flixel/FlxG.hx",430);
	HX_STACK_LINE(430)
	return ::flixel::FlxG_obj::game->get_stage();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_PUSH("FlxG::get_state","flixel/FlxG.hx",441);
	HX_STACK_LINE(441)
	return ::flixel::FlxG_obj::game->state;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )

Void FlxG_obj::switchState( ::flixel::FlxState State){
{
		HX_STACK_PUSH("FlxG::switchState","flixel/FlxG.hx",449);
		HX_STACK_ARG(State,"State");
		HX_STACK_LINE(449)
		::flixel::FlxG_obj::game->requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::resetState( ){
{
		HX_STACK_PUSH("FlxG::resetState","flixel/FlxG.hx",457);
		struct _Function_1_1{
			inline static ::String Block( ){
				HX_STACK_PUSH("*::closure","flixel/FlxG.hx",458);
				{
					HX_STACK_LINE(458)
					::String s = ::Type_obj::getClassName(::Type_obj::getClass(::flixel::FlxG_obj::game->state));		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(458)
					if (((s != null()))){
						HX_STACK_LINE(458)
						s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
						HX_STACK_LINE(458)
						{
						}
					}
					HX_STACK_LINE(458)
					return s;
				}
				return null();
			}
		};
		HX_STACK_LINE(457)
		::flixel::FlxG_obj::game->requestedState = ::Type_obj::createInstance(::Type_obj::resolveClass(_Function_1_1::Block()),Dynamic( Array_obj<Dynamic>::__new()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

bool FlxG_obj::overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_PUSH("FlxG::overlap","flixel/FlxG.hx",482);
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1");
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2");
	HX_STACK_ARG(NotifyCallback,"NotifyCallback");
	HX_STACK_ARG(ProcessCallback,"ProcessCallback");
	HX_STACK_LINE(483)
	if (((ObjectOrGroup1 == null()))){
		HX_STACK_LINE(484)
		ObjectOrGroup1 = ::flixel::FlxG_obj::game->state;
	}
	HX_STACK_LINE(487)
	if (((ObjectOrGroup2 == ObjectOrGroup1))){
		HX_STACK_LINE(488)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(491)
	::flixel::system::FlxQuadTree_obj::divisions = ::flixel::FlxG_obj::worldDivisions;
	HX_STACK_LINE(492)
	::flixel::system::FlxQuadTree quadTree = ::flixel::system::FlxQuadTree_obj::recycle(::flixel::FlxG_obj::worldBounds->x,::flixel::FlxG_obj::worldBounds->y,::flixel::FlxG_obj::worldBounds->width,::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(493)
	quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,ProcessCallback);
	HX_STACK_LINE(494)
	bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(495)
	quadTree->destroy();
	HX_STACK_LINE(496)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_PUSH("FlxG::pixelPerfectOverlap","flixel/FlxG.hx",513);
	HX_STACK_ARG(Sprite1,"Sprite1");
	HX_STACK_ARG(Sprite2,"Sprite2");
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(513)
		return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(Sprite1,Sprite2,AlphaTolerance,Camera);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,pixelPerfectOverlap,return )

bool FlxG_obj::collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_PUSH("FlxG::collide","flixel/FlxG.hx",532);
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1");
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2");
	HX_STACK_ARG(NotifyCallback,"NotifyCallback");
	HX_STACK_LINE(532)
	return ::flixel::FlxG_obj::overlap(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

Dynamic FlxG_obj::safeDestroy( ::flixel::IDestroyable Object){
	HX_STACK_PUSH("FlxG::safeDestroy","flixel/FlxG.hx",543);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(544)
	if (((Object != null()))){
		HX_STACK_LINE(545)
		Object->destroy();
	}
	HX_STACK_LINE(548)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,safeDestroy,return )

::flash::display::DisplayObject FlxG_obj::addChildBelowMouse( ::flash::display::DisplayObject Child,hx::Null< int >  __o_IndexModifier){
int IndexModifier = __o_IndexModifier.Default(0);
	HX_STACK_PUSH("FlxG::addChildBelowMouse","flixel/FlxG.hx",560);
	HX_STACK_ARG(Child,"Child");
	HX_STACK_ARG(IndexModifier,"IndexModifier");
{
		HX_STACK_LINE(561)
		int index = ::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->inputContainer);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(562)
		int max = ::flixel::FlxG_obj::game->get_numChildren();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(564)
		index = ::flixel::util::FlxMath_obj::maxAdd(index,IndexModifier,max,null());
		HX_STACK_LINE(565)
		return ::flixel::FlxG_obj::game->addChildAt(Child,index);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,addChildBelowMouse,return )

::flash::display::DisplayObject FlxG_obj::removeChild( ::flash::display::DisplayObject Child){
	HX_STACK_PUSH("FlxG::removeChild","flixel/FlxG.hx",575);
	HX_STACK_ARG(Child,"Child");
	HX_STACK_LINE(575)
	return ::flixel::FlxG_obj::game->removeChild(Child);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removeChild,return )


FlxG_obj::FlxG_obj()
{
}

void FlxG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxG);
	HX_MARK_END_CLASS();
}

void FlxG_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"save") ) { return save; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return get_stage(); }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"touches") ) { return touches; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return cameras; }
		if (HX_FIELD_EQ(inName,"plugins") ) { return plugins; }
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { return keyboard; }
		if (HX_FIELD_EQ(inName,"gamepads") ) { return gamepads; }
		if (HX_FIELD_EQ(inName,"debugger") ) { return debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return get_framerate(); }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { return autoResize; }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return fullscreen; }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { return worldBounds; }
		if (HX_FIELD_EQ(inName,"libraryName") ) { return get_libraryName(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"safeDestroy") ) { return safeDestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LIBRARY_NAME") ) { return LIBRARY_NAME; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { return fixedTimestep; }
		if (HX_FIELD_EQ(inName,"get_framerate") ) { return get_framerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_framerate") ) { return set_framerate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { return worldDivisions; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return get_flashFramerate(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_libraryName") ) { return get_libraryName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_flashFramerate") ) { return get_flashFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flashFramerate") ) { return set_flashFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildBelowMouse") ) { return addChildBelowMouse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pixelPerfectOverlap") ) { return pixelPerfectOverlap_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LIBRARY_MAJOR_VERSION") ) { return LIBRARY_MAJOR_VERSION; }
		if (HX_FIELD_EQ(inName,"LIBRARY_MINOR_VERSION") ) { return LIBRARY_MINOR_VERSION; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::frontEnds::LogFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::frontEnds::VCRFrontEnd >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::flixel::FlxGame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::flixel::system::input::keyboard::FlxKeyShortcuts >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::flixel::system::input::mouse::FlxMouse >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::frontEnds::WatchFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::system::frontEnds::SoundFrontEnd >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::flixel::system::frontEnds::InputFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flixel::system::frontEnds::BitmapFrontEnd >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touches") ) { touches=inValue.Cast< ::flixel::system::input::touch::FlxTouchManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::frontEnds::ConsoleFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=inValue.Cast< ::flixel::system::frontEnds::CameraFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=inValue.Cast< ::flixel::system::frontEnds::PluginFrontEnd >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { keyboard=inValue.Cast< ::flixel::system::input::keyboard::FlxKeyboard >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepads") ) { gamepads=inValue.Cast< ::flixel::system::input::gamepad::FlxGamepadManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::flixel::system::frontEnds::DebuggerFrontEnd >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return set_framerate(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { autoResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp) return set_fullscreen(inValue);fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { worldBounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LIBRARY_NAME") ) { LIBRARY_NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { fixedTimestep=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { worldDivisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return set_flashFramerate(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LIBRARY_MAJOR_VERSION") ) { LIBRARY_MAJOR_VERSION=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LIBRARY_MINOR_VERSION") ) { LIBRARY_MINOR_VERSION=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LIBRARY_NAME"),
	HX_CSTRING("LIBRARY_MAJOR_VERSION"),
	HX_CSTRING("LIBRARY_MINOR_VERSION"),
	HX_CSTRING("game"),
	HX_CSTRING("paused"),
	HX_CSTRING("autoPause"),
	HX_CSTRING("autoResize"),
	HX_CSTRING("fixedTimestep"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("worldBounds"),
	HX_CSTRING("worldDivisions"),
	HX_CSTRING("camera"),
	HX_CSTRING("save"),
	HX_CSTRING("mouse"),
	HX_CSTRING("keyboard"),
	HX_CSTRING("keys"),
	HX_CSTRING("touches"),
	HX_CSTRING("gamepads"),
	HX_CSTRING("inputs"),
	HX_CSTRING("console"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("debugger"),
	HX_CSTRING("vcr"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("cameras"),
	HX_CSTRING("plugins"),
	HX_CSTRING("sound"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("get_libraryName"),
	HX_CSTRING("get_framerate"),
	HX_CSTRING("set_framerate"),
	HX_CSTRING("get_flashFramerate"),
	HX_CSTRING("set_flashFramerate"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("resizeGame"),
	HX_CSTRING("fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("get_state"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetState"),
	HX_CSTRING("overlap"),
	HX_CSTRING("pixelPerfectOverlap"),
	HX_CSTRING("collide"),
	HX_CSTRING("safeDestroy"),
	HX_CSTRING("addChildBelowMouse"),
	HX_CSTRING("removeChild"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::LIBRARY_NAME,"LIBRARY_NAME");
	HX_MARK_MEMBER_NAME(FlxG_obj::LIBRARY_MAJOR_VERSION,"LIBRARY_MAJOR_VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::LIBRARY_MINOR_VERSION,"LIBRARY_MINOR_VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::game,"game");
	HX_MARK_MEMBER_NAME(FlxG_obj::paused,"paused");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoResize,"autoResize");
	HX_MARK_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::save,"save");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_MARK_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::LIBRARY_NAME,"LIBRARY_NAME");
	HX_VISIT_MEMBER_NAME(FlxG_obj::LIBRARY_MAJOR_VERSION,"LIBRARY_MAJOR_VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::LIBRARY_MINOR_VERSION,"LIBRARY_MINOR_VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::game,"game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::paused,"paused");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoResize,"autoResize");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::save,"save");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_VISIT_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
};

Class FlxG_obj::__mClass;

void FlxG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxG"), hx::TCanCast< FlxG_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxG_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_PUSH("*::closure","flixel/FlxG.hx",56);
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/FlxG.hx",56);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","flixel/FlxG.hx",56);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("isVar") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("fullscreen") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("statics") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
	LIBRARY_NAME= HX_CSTRING("HaxeFlixel");
	LIBRARY_MAJOR_VERSION= HX_CSTRING("3");
	LIBRARY_MINOR_VERSION= HX_CSTRING("0.4");
	paused= false;
	autoPause= true;
	autoResize= false;
	fixedTimestep= true;
	elapsed= (int)0;
	timeScale= (int)1;
	worldBounds= ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	save= ::flixel::util::FlxSave_obj::__new();
	inputs= ::flixel::system::frontEnds::InputFrontEnd_obj::__new();
	console= ::flixel::system::frontEnds::ConsoleFrontEnd_obj::__new();
	log= ::flixel::system::frontEnds::LogFrontEnd_obj::__new();
	watch= ::flixel::system::frontEnds::WatchFrontEnd_obj::__new();
	debugger= ::flixel::system::frontEnds::DebuggerFrontEnd_obj::__new();
	vcr= ::flixel::system::frontEnds::VCRFrontEnd_obj::__new();
	bitmap= ::flixel::system::frontEnds::BitmapFrontEnd_obj::__new();
	cameras= ::flixel::system::frontEnds::CameraFrontEnd_obj::__new();
	plugins= ::flixel::system::frontEnds::PluginFrontEnd_obj::__new();
	sound= ::flixel::system::frontEnds::SoundFrontEnd_obj::__new();
	fullscreen= false;
}

} // end namespace flixel
