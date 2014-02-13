#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
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
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_flixel_system_input_touch_FlxTouch
#include <flixel/system/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouchManager
#include <flixel/system/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_PUSH("FlxTypedButton::new","flixel/ui/FlxTypedButton.hx",110);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(111)
	super::__construct(X,Y,null());
	HX_STACK_LINE(113)
	this->loadGraphic(HX_CSTRING("flixel/img/ui/button.png"),true,false,(int)80,(int)20,null(),null());
	HX_STACK_LINE(115)
	this->_onUp = OnClick;
	HX_STACK_LINE(116)
	this->_onDown = null();
	HX_STACK_LINE(117)
	this->_onOut = null();
	HX_STACK_LINE(118)
	this->_onOver = null();
	HX_STACK_LINE(120)
	this->_onUpParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(121)
	this->_onDownParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(122)
	this->_onOutParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(123)
	this->_onOverParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(125)
	this->soundOver = null();
	HX_STACK_LINE(126)
	this->soundOut = null();
	HX_STACK_LINE(127)
	this->soundDown = null();
	HX_STACK_LINE(128)
	this->soundUp = null();
	HX_STACK_LINE(130)
	this->status = (int)0;
	HX_STACK_LINE(131)
	this->_pressed = false;
	HX_STACK_LINE(132)
	this->_initialized = false;
	HX_STACK_LINE(134)
	this->scrollFactor->set_x((int)0);
	HX_STACK_LINE(135)
	this->scrollFactor->set_y((int)0);
	HX_STACK_LINE(137)
	this->_touchPointID = (int)-1;
}
;
	return null();
}

FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxTypedButton_obj::onMouseUp( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxTypedButton::onMouseUp","flixel/ui/FlxTypedButton.hx",507);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(508)
		if (((bool((bool((bool(!(this->exists)) || bool(!(this->visible)))) || bool(!(this->active)))) || bool((this->status != (int)2))))){
			HX_STACK_LINE(509)
			return null();
		}
		HX_STACK_LINE(513)
		if (((this->_onUp != null()))){
			HX_STACK_LINE(514)
			::Reflect_obj::callMethod(null(),this->_onUp,this->_onUpParams);
		}
		HX_STACK_LINE(517)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(518)
			this->soundUp->play(true);
		}
		HX_STACK_LINE(522)
		this->_touchPointID = (int)-1;
		HX_STACK_LINE(523)
		this->status = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onMouseUp,(void))

Void FlxTypedButton_obj::setOnOutCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_PUSH("FlxTypedButton::setOnOutCallback","flixel/ui/FlxTypedButton.hx",492);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Callback,"Callback");
		HX_STACK_ARG(Params,"Params");
		HX_STACK_LINE(493)
		this->_onOut = Callback;
		HX_STACK_LINE(495)
		if (((Params == null()))){
			HX_STACK_LINE(496)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(500)
		this->_onOutParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setOnOutCallback,(void))

Void FlxTypedButton_obj::setOnOverCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_PUSH("FlxTypedButton::setOnOverCallback","flixel/ui/FlxTypedButton.hx",474);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Callback,"Callback");
		HX_STACK_ARG(Params,"Params");
		HX_STACK_LINE(475)
		this->_onOver = Callback;
		HX_STACK_LINE(477)
		if (((Params == null()))){
			HX_STACK_LINE(478)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(482)
		this->_onOverParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setOnOverCallback,(void))

Void FlxTypedButton_obj::setOnDownCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_PUSH("FlxTypedButton::setOnDownCallback","flixel/ui/FlxTypedButton.hx",456);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Callback,"Callback");
		HX_STACK_ARG(Params,"Params");
		HX_STACK_LINE(457)
		this->_onDown = Callback;
		HX_STACK_LINE(459)
		if (((Params == null()))){
			HX_STACK_LINE(460)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(464)
		this->_onDownParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setOnDownCallback,(void))

Void FlxTypedButton_obj::setOnUpCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_PUSH("FlxTypedButton::setOnUpCallback","flixel/ui/FlxTypedButton.hx",438);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Callback,"Callback");
		HX_STACK_ARG(Params,"Params");
		HX_STACK_LINE(439)
		this->_onUp = Callback;
		HX_STACK_LINE(441)
		if (((Params == null()))){
			HX_STACK_LINE(442)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(446)
		this->_onUpParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setOnUpCallback,(void))

Void FlxTypedButton_obj::setSounds( ::flash::media::Sound SoundOver,hx::Null< Float >  __o_SoundOverVolume,::flash::media::Sound SoundOut,hx::Null< Float >  __o_SoundOutVolume,::flash::media::Sound SoundDown,hx::Null< Float >  __o_SoundDownVolume,::flash::media::Sound SoundUp,hx::Null< Float >  __o_SoundUpVolume){
Float SoundOverVolume = __o_SoundOverVolume.Default(1);
Float SoundOutVolume = __o_SoundOutVolume.Default(1);
Float SoundDownVolume = __o_SoundDownVolume.Default(1);
Float SoundUpVolume = __o_SoundUpVolume.Default(1);
	HX_STACK_PUSH("FlxTypedButton::setSounds","flixel/ui/FlxTypedButton.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_ARG(SoundOver,"SoundOver");
	HX_STACK_ARG(SoundOverVolume,"SoundOverVolume");
	HX_STACK_ARG(SoundOut,"SoundOut");
	HX_STACK_ARG(SoundOutVolume,"SoundOutVolume");
	HX_STACK_ARG(SoundDown,"SoundDown");
	HX_STACK_ARG(SoundDownVolume,"SoundDownVolume");
	HX_STACK_ARG(SoundUp,"SoundUp");
	HX_STACK_ARG(SoundUpVolume,"SoundUpVolume");
{
		HX_STACK_LINE(413)
		if (((SoundOver != null()))){
			HX_STACK_LINE(414)
			this->soundOver = ::flixel::FlxG_obj::sound->load(SoundOver,SoundOverVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(417)
		if (((SoundOut != null()))){
			HX_STACK_LINE(418)
			this->soundOut = ::flixel::FlxG_obj::sound->load(SoundOut,SoundOutVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(421)
		if (((SoundDown != null()))){
			HX_STACK_LINE(422)
			this->soundDown = ::flixel::FlxG_obj::sound->load(SoundDown,SoundDownVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(425)
		if (((SoundUp != null()))){
			HX_STACK_LINE(426)
			this->soundUp = ::flixel::FlxG_obj::sound->load(SoundUp,SoundUpVolume,null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTypedButton_obj,setSounds,(void))

Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedButton::draw","flixel/ui/FlxTypedButton.hx",370);
		HX_STACK_THIS(this);
		HX_STACK_LINE(371)
		this->super::draw();
		HX_STACK_LINE(373)
		if (((this->label != null()))){
			HX_STACK_LINE(375)
			this->label->__FieldRef(HX_CSTRING("cameras")) = this->cameras;
			HX_STACK_LINE(376)
			this->label->__Field(HX_CSTRING("draw"),true)();
		}
	}
return null();
}


bool FlxTypedButton_obj::updateButtonStatus( ::flixel::util::FlxPoint Point,::flixel::FlxCamera Camera,bool JustPressed,int touchID){
	HX_STACK_PUSH("FlxTypedButton::updateButtonStatus","flixel/ui/FlxTypedButton.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(JustPressed,"JustPressed");
	HX_STACK_ARG(touchID,"touchID");
	HX_STACK_LINE(329)
	bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
	HX_STACK_LINE(331)
	if ((this->overlapsPoint(Point,true,Camera))){
		HX_STACK_LINE(333)
		offAll = false;
		HX_STACK_LINE(335)
		if ((JustPressed)){
			HX_STACK_LINE(337)
			this->status = (int)2;
			HX_STACK_LINE(338)
			if (((this->_onDown != null()))){
				HX_STACK_LINE(339)
				::Reflect_obj::callMethod(null(),this->_onDown,this->_onDownParams);
			}
			HX_STACK_LINE(342)
			if (((this->soundDown != null()))){
				HX_STACK_LINE(343)
				this->soundDown->play(true);
			}
			HX_STACK_LINE(347)
			this->_touchPointID = touchID;
		}
		HX_STACK_LINE(349)
		if (((this->status == (int)0))){
			HX_STACK_LINE(351)
			this->status = (int)1;
			HX_STACK_LINE(352)
			if (((this->_onOver != null()))){
				HX_STACK_LINE(353)
				::Reflect_obj::callMethod(null(),this->_onOver,this->_onOverParams);
			}
			HX_STACK_LINE(356)
			if (((this->soundOver != null()))){
				HX_STACK_LINE(357)
				this->soundOver->play(true);
			}
		}
	}
	HX_STACK_LINE(363)
	return offAll;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,updateButtonStatus,return )

Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_PUSH("FlxTypedButton::updateButton","flixel/ui/FlxTypedButton.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_LINE(229)
		bool continueUpdate = false;		HX_STACK_VAR(continueUpdate,"continueUpdate");
		HX_STACK_LINE(232)
		continueUpdate = true;
		HX_STACK_LINE(236)
		continueUpdate = true;
		HX_STACK_LINE(239)
		if ((continueUpdate)){
			HX_STACK_LINE(241)
			if (((this->cameras == null()))){
				HX_STACK_LINE(242)
				this->cameras = ::flixel::FlxG_obj::cameras->list;
			}
			HX_STACK_LINE(245)
			::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(246)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(247)
			int l = this->cameras->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(248)
			bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
			HX_STACK_LINE(249)
			while(((i < l))){
				HX_STACK_LINE(251)
				camera = this->cameras->__get((i)++).StaticCast< ::flixel::FlxCamera >();
				HX_STACK_LINE(253)
				::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
				struct _Function_3_1{
					inline static bool Block( ){
						HX_STACK_PUSH("*::closure","flixel/ui/FlxTypedButton.hx",254);
						{
							HX_STACK_LINE(254)
							::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(254)
							return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
						}
						return null();
					}
				};
				HX_STACK_LINE(254)
				offAll = (  (((this->updateButtonStatus(this->_point,camera,_Function_3_1::Block(),(int)1) == false))) ? bool(false) : bool(offAll) );
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(257)
					while(((_g < _g1->length))){
						HX_STACK_LINE(257)
						::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(257)
						++(_g);
						HX_STACK_LINE(259)
						if (((this->_touchPointID == (int)-1))){
							HX_STACK_LINE(260)
							if (((touch->_current == (int)2))){
								HX_STACK_LINE(263)
								touch->getWorldPosition(camera,this->_point);
								HX_STACK_LINE(264)
								offAll = (  (((this->updateButtonStatus(this->_point,camera,(touch->_current == (int)2),touch->get_touchPointID()) == false))) ? bool(false) : bool(offAll) );
							}
						}
						else{
							HX_STACK_LINE(267)
							if (((touch->get_touchPointID() == this->_touchPointID))){
								HX_STACK_LINE(269)
								touch->getWorldPosition(camera,this->_point);
								HX_STACK_LINE(270)
								offAll = false;
								HX_STACK_LINE(272)
								if (((bool((touch->_current == (int)-1)) || bool(!(this->overlapsPoint(this->_point,true,camera)))))){
									HX_STACK_LINE(274)
									offAll = true;
									HX_STACK_LINE(275)
									this->onMouseUp(null());
								}
							}
						}
					}
				}
				HX_STACK_LINE(281)
				if ((!(offAll))){
					HX_STACK_LINE(282)
					break;
				}
			}
			HX_STACK_LINE(286)
			if ((offAll)){
				HX_STACK_LINE(288)
				if (((this->status != (int)0))){
					HX_STACK_LINE(290)
					if (((this->_onOut != null()))){
						HX_STACK_LINE(291)
						::Reflect_obj::callMethod(null(),this->_onOut,this->_onOutParams);
					}
					HX_STACK_LINE(294)
					if (((this->soundOut != null()))){
						HX_STACK_LINE(295)
						this->soundOut->play(true);
					}
				}
				HX_STACK_LINE(300)
				this->status = (int)0;
			}
		}
		HX_STACK_LINE(306)
		if (((this->label != null()))){
			HX_STACK_LINE(308)
			this->label->__Field(HX_CSTRING("set_x"),true)(this->x);
			HX_STACK_LINE(309)
			this->label->__Field(HX_CSTRING("set_y"),true)(this->y);
			HX_STACK_LINE(311)
			if (((this->labelOffset != null()))){
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					Dynamic _g = this->label;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(313)
					_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + this->labelOffset->x));
				}
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					Dynamic _g = this->label;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(314)
					_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + this->labelOffset->y));
				}
			}
			HX_STACK_LINE(317)
			this->label->__Field(HX_CSTRING("set_scrollFactor"),true)(this->scrollFactor);
		}
		HX_STACK_LINE(321)
		this->set_frame(this->framesData->frames->__get(this->status).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

Void FlxTypedButton_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedButton::update","flixel/ui/FlxTypedButton.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_LINE(191)
		if ((!(this->_initialized))){
			HX_STACK_LINE(192)
			if (((::flixel::FlxG_obj::game->get_stage() != null()))){
				HX_STACK_LINE(196)
				::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
				HX_STACK_LINE(198)
				this->_initialized = true;
			}
		}
		HX_STACK_LINE(201)
		this->super::update();
		HX_STACK_LINE(203)
		this->updateButton();
		HX_STACK_LINE(207)
		if (((this->label == null()))){
			HX_STACK_LINE(208)
			return null();
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::flixel::ui::FlxTypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(211)
			switch( (int)(_g->status)){
				case (int)1: {
					HX_STACK_LINE(213)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(1.0);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(216)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(0.5);
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Dynamic _g1 = this->label;		HX_STACK_VAR(_g1,"_g1");
						Float _g2 = _g1->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(217)
						_g1->__Field(HX_CSTRING("set_y"),true)((_g2 + (int)1));
						HX_STACK_LINE(217)
						_g2;
					}
				}
				;break;
				default: {
					HX_STACK_LINE(218)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(0.8);
				}
			}
		}
	}
return null();
}


Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedButton::destroy","flixel/ui/FlxTypedButton.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_LINE(145)
		if (((::flixel::FlxG_obj::game->get_stage() != null()))){
			HX_STACK_LINE(146)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		}
		HX_STACK_LINE(151)
		if (((this->label != null()))){
			HX_STACK_LINE(153)
			this->label->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(154)
			this->label = null();
		}
		HX_STACK_LINE(157)
		this->_onUp = null();
		HX_STACK_LINE(158)
		this->_onDown = null();
		HX_STACK_LINE(159)
		this->_onOut = null();
		HX_STACK_LINE(160)
		this->_onOver = null();
		HX_STACK_LINE(162)
		this->_onUpParams = null();
		HX_STACK_LINE(163)
		this->_onDownParams = null();
		HX_STACK_LINE(164)
		this->_onOutParams = null();
		HX_STACK_LINE(165)
		this->_onOverParams = null();
		HX_STACK_LINE(167)
		if (((this->soundOver != null()))){
			HX_STACK_LINE(168)
			this->soundOver->destroy();
		}
		HX_STACK_LINE(171)
		if (((this->soundOut != null()))){
			HX_STACK_LINE(172)
			this->soundOut->destroy();
		}
		HX_STACK_LINE(175)
		if (((this->soundDown != null()))){
			HX_STACK_LINE(176)
			this->soundDown->destroy();
		}
		HX_STACK_LINE(179)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(180)
			this->soundUp->destroy();
		}
		HX_STACK_LINE(183)
		this->super::destroy();
	}
return null();
}



FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_pressed,"_pressed");
	HX_MARK_MEMBER_NAME(_onOutParams,"_onOutParams");
	HX_MARK_MEMBER_NAME(_onOverParams,"_onOverParams");
	HX_MARK_MEMBER_NAME(_onDownParams,"_onDownParams");
	HX_MARK_MEMBER_NAME(_onUpParams,"_onUpParams");
	HX_MARK_MEMBER_NAME(_onOut,"_onOut");
	HX_MARK_MEMBER_NAME(_onOver,"_onOver");
	HX_MARK_MEMBER_NAME(_onDown,"_onDown");
	HX_MARK_MEMBER_NAME(_onUp,"_onUp");
	HX_MARK_MEMBER_NAME(soundUp,"soundUp");
	HX_MARK_MEMBER_NAME(soundDown,"soundDown");
	HX_MARK_MEMBER_NAME(soundOut,"soundOut");
	HX_MARK_MEMBER_NAME(soundOver,"soundOver");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(labelOffset,"labelOffset");
	HX_MARK_MEMBER_NAME(label,"label");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_pressed,"_pressed");
	HX_VISIT_MEMBER_NAME(_onOutParams,"_onOutParams");
	HX_VISIT_MEMBER_NAME(_onOverParams,"_onOverParams");
	HX_VISIT_MEMBER_NAME(_onDownParams,"_onDownParams");
	HX_VISIT_MEMBER_NAME(_onUpParams,"_onUpParams");
	HX_VISIT_MEMBER_NAME(_onOut,"_onOut");
	HX_VISIT_MEMBER_NAME(_onOver,"_onOver");
	HX_VISIT_MEMBER_NAME(_onDown,"_onDown");
	HX_VISIT_MEMBER_NAME(_onUp,"_onUp");
	HX_VISIT_MEMBER_NAME(soundUp,"soundUp");
	HX_VISIT_MEMBER_NAME(soundDown,"soundDown");
	HX_VISIT_MEMBER_NAME(soundOut,"soundOut");
	HX_VISIT_MEMBER_NAME(soundOver,"soundOver");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(labelOffset,"labelOffset");
	HX_VISIT_MEMBER_NAME(label,"label");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_onUp") ) { return _onUp; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_onOut") ) { return _onOut; }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_onOver") ) { return _onOver; }
		if (HX_FIELD_EQ(inName,"_onDown") ) { return _onDown; }
		if (HX_FIELD_EQ(inName,"soundUp") ) { return soundUp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { return _pressed; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { return soundOut; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setSounds") ) { return setSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"soundDown") ) { return soundDown; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { return soundOver; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onUpParams") ) { return _onUpParams; }
		if (HX_FIELD_EQ(inName,"labelOffset") ) { return labelOffset; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		if (HX_FIELD_EQ(inName,"_onOutParams") ) { return _onOutParams; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { return _touchPointID; }
		if (HX_FIELD_EQ(inName,"_onOverParams") ) { return _onOverParams; }
		if (HX_FIELD_EQ(inName,"_onDownParams") ) { return _onDownParams; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setOnUpCallback") ) { return setOnUpCallback_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setOnOutCallback") ) { return setOnOutCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setOnOverCallback") ) { return setOnOverCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setOnDownCallback") ) { return setOnDownCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateButtonStatus") ) { return updateButtonStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_onUp") ) { _onUp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_onOut") ) { _onOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_onOver") ) { _onOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onDown") ) { _onDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundUp") ) { soundUp=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { _pressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { soundOut=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundDown") ) { soundDown=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { soundOver=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onUpParams") ) { _onUpParams=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"labelOffset") ) { labelOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onOutParams") ) { _onOutParams=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { _touchPointID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onOverParams") ) { _onOverParams=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onDownParams") ) { _onDownParams=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchPointID"));
	outFields->push(HX_CSTRING("_initialized"));
	outFields->push(HX_CSTRING("_pressed"));
	outFields->push(HX_CSTRING("_onOutParams"));
	outFields->push(HX_CSTRING("_onOverParams"));
	outFields->push(HX_CSTRING("_onDownParams"));
	outFields->push(HX_CSTRING("_onUpParams"));
	outFields->push(HX_CSTRING("_onOut"));
	outFields->push(HX_CSTRING("_onOver"));
	outFields->push(HX_CSTRING("_onDown"));
	outFields->push(HX_CSTRING("_onUp"));
	outFields->push(HX_CSTRING("soundUp"));
	outFields->push(HX_CSTRING("soundDown"));
	outFields->push(HX_CSTRING("soundOut"));
	outFields->push(HX_CSTRING("soundOver"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("labelOffset"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("setOnOutCallback"),
	HX_CSTRING("setOnOverCallback"),
	HX_CSTRING("setOnDownCallback"),
	HX_CSTRING("setOnUpCallback"),
	HX_CSTRING("setSounds"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateButtonStatus"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_touchPointID"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("_pressed"),
	HX_CSTRING("_onOutParams"),
	HX_CSTRING("_onOverParams"),
	HX_CSTRING("_onDownParams"),
	HX_CSTRING("_onUpParams"),
	HX_CSTRING("_onOut"),
	HX_CSTRING("_onOver"),
	HX_CSTRING("_onDown"),
	HX_CSTRING("_onUp"),
	HX_CSTRING("soundUp"),
	HX_CSTRING("soundDown"),
	HX_CSTRING("soundOut"),
	HX_CSTRING("soundOver"),
	HX_CSTRING("status"),
	HX_CSTRING("labelOffset"),
	HX_CSTRING("label"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxTypedButton"), hx::TCanCast< FlxTypedButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
