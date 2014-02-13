#include <hxcpp.h>

#ifndef INCLUDED_GameClass
#include <GameClass.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void GameClass_obj::__construct()
{
HX_STACK_PUSH("GameClass::new","GameClass.hx",10);
{
	HX_STACK_LINE(11)
	int stageWidth = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
	HX_STACK_LINE(12)
	int stageHeight = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
	HX_STACK_LINE(14)
	Float ratioX = (Float(stageWidth) / Float((int)1136));		HX_STACK_VAR(ratioX,"ratioX");
	HX_STACK_LINE(15)
	Float ratioY = (Float(stageHeight) / Float((int)640));		HX_STACK_VAR(ratioY,"ratioY");
	HX_STACK_LINE(16)
	Float ratio = ::Math_obj::min(ratioX,ratioY);		HX_STACK_VAR(ratio,"ratio");
	HX_STACK_LINE(18)
	ratio = (int)3;
	HX_STACK_LINE(20)
	::Global_obj::ratio = ratio;
	HX_STACK_LINE(22)
	int fps = (int)60;		HX_STACK_VAR(fps,"fps");
	HX_STACK_LINE(24)
	super::__construct(::Math_obj::ceil((Float(stageWidth) / Float(ratio))),::Math_obj::ceil((Float(stageHeight) / Float(ratio))),hx::ClassOf< ::PlayState >(),ratio,fps,fps,true,null());
}
;
	return null();
}

GameClass_obj::~GameClass_obj() { }

Dynamic GameClass_obj::__CreateEmpty() { return  new GameClass_obj; }
hx::ObjectPtr< GameClass_obj > GameClass_obj::__new()
{  hx::ObjectPtr< GameClass_obj > result = new GameClass_obj();
	result->__construct();
	return result;}

Dynamic GameClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameClass_obj > result = new GameClass_obj();
	result->__construct();
	return result;}


GameClass_obj::GameClass_obj()
{
}

void GameClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameClass);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameClass_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GameClass_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GameClass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GameClass_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameClass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameClass_obj::__mClass,"__mClass");
};

Class GameClass_obj::__mClass;

void GameClass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameClass"), hx::TCanCast< GameClass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameClass_obj::__boot()
{
}

