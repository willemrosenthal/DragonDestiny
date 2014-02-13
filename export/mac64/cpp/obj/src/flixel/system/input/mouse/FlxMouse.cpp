#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::flash::display::Sprite CursorContainer)
{
HX_STACK_PUSH("FlxMouse::new","flixel/system/input/mouse/FlxMouse.hx",25);
{
	HX_STACK_LINE(634)
	this->useSystemCursor = false;
	HX_STACK_LINE(85)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(84)
	this->_lastY = (int)0;
	HX_STACK_LINE(83)
	this->_lastX = (int)0;
	HX_STACK_LINE(78)
	this->_wheelUsed = false;
	HX_STACK_LINE(74)
	this->_cursor = null();
	HX_STACK_LINE(39)
	this->screenY = (int)0;
	HX_STACK_LINE(35)
	this->screenX = (int)0;
	HX_STACK_LINE(31)
	this->wheel = (int)0;
	HX_STACK_LINE(103)
	super::__construct(null(),null());
	HX_STACK_LINE(105)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(106)
	this->cursorContainer->set_mouseChildren(false);
	HX_STACK_LINE(107)
	this->cursorContainer->set_mouseEnabled(false);
	HX_STACK_LINE(108)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(109)
	this->_globalScreenPosition = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(111)
	this->_leftButton = ::flixel::system::input::mouse::FlxMouseButton_obj::__new(true);
	HX_STACK_LINE(112)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(113)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(125)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
}
;
	return null();
}

FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::flash::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::system::input::IFlxInput_obj)) return operator ::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

bool FlxMouse_obj::set_useSystemCursor( bool value){
	HX_STACK_PUSH("FlxMouse::set_useSystemCursor","flixel/system/input/mouse/FlxMouse.hx",637);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(638)
	this->useSystemCursor = value;
	HX_STACK_LINE(639)
	if ((!(this->useSystemCursor))){
		HX_STACK_LINE(640)
		this->hideSystemCursor();
	}
	else{
		HX_STACK_LINE(644)
		this->showSystemCursor();
	}
	HX_STACK_LINE(647)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_PUSH("FlxMouse::hideSystemCursor","flixel/system/input/mouse/FlxMouse.hx",618);
		HX_STACK_THIS(this);
		HX_STACK_LINE(625)
		::flash::ui::Mouse_obj::hide();
		HX_STACK_LINE(626)
		this->cursorContainer->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_PUSH("FlxMouse::showSystemCursor","flixel/system/input/mouse/FlxMouse.hx",605);
		HX_STACK_THIS(this);
		HX_STACK_LINE(609)
		::flash::ui::Mouse_obj::show();
		HX_STACK_LINE(610)
		this->cursorContainer->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxMouse::onFocusLost","flixel/system/input/mouse/FlxMouse.hx",597);
		HX_STACK_THIS(this);
		HX_STACK_LINE(597)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxMouse::onFocus","flixel/system/input/mouse/FlxMouse.hx",588);
		HX_STACK_THIS(this);
		HX_STACK_LINE(589)
		this->reset();
		HX_STACK_LINE(590)
		this->set_useSystemCursor(this->useSystemCursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::playback( ::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_PUSH("FlxMouse::playback","flixel/system/input/mouse/FlxMouse.hx",576);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(577)
		this->_leftButton->current = Record->button;
		HX_STACK_LINE(578)
		this->wheel = Record->wheel;
		HX_STACK_LINE(579)
		this->_globalScreenPosition->set_x(Record->x);
		HX_STACK_LINE(580)
		this->_globalScreenPosition->set_y(Record->y);
		HX_STACK_LINE(581)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))

::flixel::system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_PUSH("FlxMouse::record","flixel/system/input/mouse/FlxMouse.hx",559);
	HX_STACK_THIS(this);
	HX_STACK_LINE(560)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenPosition->x)) && bool((this->_lastY == this->_globalScreenPosition->y)))) && bool((this->_leftButton->current == (int)0)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(561)
		return null();
	}
	HX_STACK_LINE(564)
	this->_lastX = ::Math_obj::floor(this->_globalScreenPosition->x);
	HX_STACK_LINE(565)
	this->_lastY = ::Math_obj::floor(this->_globalScreenPosition->y);
	HX_STACK_LINE(566)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(567)
	return ::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_leftButton->current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_PUSH("FlxMouse::get_justReleased","flixel/system/input/mouse/FlxMouse.hx",496);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::system::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/mouse/FlxMouse.hx",496);
			{
				HX_STACK_LINE(496)
				::flixel::system::input::mouse::FlxMouseButton _this = __this->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(496)
				return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(496)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_PUSH("FlxMouse::get_justPressed","flixel/system/input/mouse/FlxMouse.hx",488);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::system::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/mouse/FlxMouse.hx",488);
			{
				HX_STACK_LINE(488)
				::flixel::system::input::mouse::FlxMouseButton _this = __this->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(488)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(488)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_PUSH("FlxMouse::get_pressed","flixel/system/input/mouse/FlxMouse.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	return (this->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

Void FlxMouse_obj::reset( ){
{
		HX_STACK_PUSH("FlxMouse::reset","flixel/system/input/mouse/FlxMouse.hx",465);
		HX_STACK_THIS(this);
		HX_STACK_LINE(466)
		::flixel::system::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(466)
		_this->current = (int)0;
		HX_STACK_LINE(466)
		_this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

::flixel::util::FlxPoint FlxMouse_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getScreenPosition","flixel/system/input/mouse/FlxMouse.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(448)
	if (((Camera == null()))){
		HX_STACK_LINE(449)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(452)
	if (((point == null()))){
		HX_STACK_LINE(453)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(456)
	point->set_x((Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom)));
	HX_STACK_LINE(457)
	point->set_y((Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom)));
	HX_STACK_LINE(458)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getScreenPosition,return )

::flixel::util::FlxPoint FlxMouse_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getWorldPosition","flixel/system/input/mouse/FlxMouse.hx",424);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(425)
	if (((Camera == null()))){
		HX_STACK_LINE(426)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(429)
	if (((point == null()))){
		HX_STACK_LINE(430)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(433)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(434)
	point->set_x((this->_point->x + Camera->scroll->x));
	HX_STACK_LINE(435)
	point->set_y((this->_point->y + Camera->scroll->y));
	HX_STACK_LINE(436)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getWorldPosition,return )

Void FlxMouse_obj::updateCursor( ){
{
		HX_STACK_PUSH("FlxMouse::updateCursor","flixel/system/input/mouse/FlxMouse.hx",399);
		HX_STACK_THIS(this);
		HX_STACK_LINE(401)
		if ((this->_updateCursorContainer)){
			HX_STACK_LINE(403)
			this->cursorContainer->set_x(this->_globalScreenPosition->x);
			HX_STACK_LINE(404)
			this->cursorContainer->set_y(this->_globalScreenPosition->y);
		}
		HX_STACK_LINE(409)
		::flixel::FlxCamera camera = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(410)
		this->screenX = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));
		HX_STACK_LINE(411)
		this->screenY = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));
		HX_STACK_LINE(412)
		this->set_x((this->screenX + camera->scroll->x));
		HX_STACK_LINE(413)
		this->set_y((this->screenY + camera->scroll->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,updateCursor,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_PUSH("FlxMouse::update","flixel/system/input/mouse/FlxMouse.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(373)
		int X = ::Math_obj::floor(::flixel::FlxG_obj::game->get_mouseX());		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(374)
		int Y = ::Math_obj::floor(::flixel::FlxG_obj::game->get_mouseY());		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(376)
		this->_globalScreenPosition->set_x(X);
		HX_STACK_LINE(377)
		this->_globalScreenPosition->set_y(Y);
		HX_STACK_LINE(378)
		this->updateCursor();
		HX_STACK_LINE(381)
		this->_leftButton->update();
		HX_STACK_LINE(388)
		if ((!(this->_wheelUsed))){
			HX_STACK_LINE(389)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(392)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_PUSH("FlxMouse::unload","flixel/system/input/mouse/FlxMouse.hx",294);
		HX_STACK_THIS(this);
		HX_STACK_LINE(294)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(296)
			if ((this->cursorContainer->get_visible())){
				HX_STACK_LINE(298)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(303)
				this->cursorContainer->removeChild(this->_cursor);
				HX_STACK_LINE(304)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("FlxMouse::load","flixel/system/input/mouse/FlxMouse.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(249)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(250)
			this->cursorContainer->removeChild(this->_cursor);
		}
		HX_STACK_LINE(255)
		if (((Graphic == null()))){
			HX_STACK_LINE(256)
			Graphic = HX_CSTRING("flixel/img/ui/cursor.png");
		}
		HX_STACK_LINE(260)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(261)
			this->_cursor = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(264)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(265)
				this->_cursor = ::flash::display::Bitmap_obj::__new(hx::TCast< flash::display::BitmapData >::cast(Graphic),null(),null());
			}
			else{
				HX_STACK_LINE(268)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					struct _Function_4_1{
						inline static ::flash::display::BitmapData Block( Dynamic &Graphic){
							HX_STACK_PUSH("*::closure","flixel/system/input/mouse/FlxMouse.hx",270);
							{
								HX_STACK_LINE(270)
								::String id = Graphic;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(270)
								return ::openfl::Assets_obj::getBitmapData(id,false);
							}
							return null();
						}
					};
					HX_STACK_LINE(269)
					this->_cursor = ::flash::display::Bitmap_obj::__new(_Function_4_1::Block(Graphic),null(),null());
				}
				else{
					HX_STACK_LINE(273)
					this->_cursor = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("flixel/img/ui/cursor.png"),false),null(),null());
				}
			}
		}
		HX_STACK_LINE(277)
		this->_cursor->set_x(XOffset);
		HX_STACK_LINE(278)
		this->_cursor->set_y(YOffset);
		HX_STACK_LINE(279)
		this->_cursor->set_scaleX(Scale);
		HX_STACK_LINE(280)
		this->_cursor->set_scaleY(Scale);
		HX_STACK_LINE(285)
		this->cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

bool FlxMouse_obj::get_visible( ){
	HX_STACK_PUSH("FlxMouse::get_visible","flixel/system/input/mouse/FlxMouse.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_LINE(235)
	return this->_updateCursorContainer;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_visible,return )

Void FlxMouse_obj::hide( ){
{
		HX_STACK_PUSH("FlxMouse::hide","flixel/system/input/mouse/FlxMouse.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_LINE(218)
		this->_updateCursorContainer = false;
		HX_STACK_LINE(219)
		this->cursorContainer->set_visible(false);
		HX_STACK_LINE(221)
		::flash::ui::Mouse_obj::hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hide,(void))

Void FlxMouse_obj::show( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("FlxMouse::show","flixel/system/input/mouse/FlxMouse.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(185)
		this->_updateCursorContainer = true;
		HX_STACK_LINE(187)
		if ((!(this->useSystemCursor))){
			HX_STACK_LINE(188)
			this->cursorContainer->set_visible(true);
		}
		HX_STACK_LINE(190)
		if (((Graphic != null()))){
			HX_STACK_LINE(191)
			this->load(Graphic,Scale,XOffset,YOffset);
		}
		else{
			HX_STACK_LINE(194)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(195)
				this->load(null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(199)
		if ((this->useSystemCursor)){
			HX_STACK_LINE(200)
			::flash::ui::Mouse_obj::show();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,show,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_PUSH("FlxMouse::destroy","flixel/system/input/mouse/FlxMouse.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_LINE(164)
		this->cursorContainer = null();
		HX_STACK_LINE(165)
		this->_cursor = null();
		HX_STACK_LINE(166)
		this->_point = null();
		HX_STACK_LINE(167)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(169)
		if (((this->_cursorBitmapData != null()))){
			HX_STACK_LINE(171)
			this->_cursorBitmapData->dispose();
			HX_STACK_LINE(172)
			this->_cursorBitmapData = null();
		}
	}
return null();
}


Void FlxMouse_obj::onMouseWheel( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouse::onMouseWheel","flixel/system/input/mouse/FlxMouse.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(142)
		this->_wheelUsed = true;
		HX_STACK_LINE(143)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"visible") ) { return inCallProp ? get_visible() : visible; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { return _updateCursorContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::system::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { _updateCursorContainer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_wheelUsed"));
	outFields->push(HX_CSTRING("_cursorBitmapData"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_updateCursorContainer"));
	outFields->push(HX_CSTRING("cursorContainer"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_useSystemCursor"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("hideSystemCursor"),
	HX_CSTRING("showSystemCursor"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("update"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_wheelUsed"),
	HX_CSTRING("_cursorBitmapData"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_updateCursorContainer"),
	HX_CSTRING("cursorContainer"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("visible"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.mouse.FlxMouse"), hx::TCanCast< FlxMouse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMouse_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace mouse
