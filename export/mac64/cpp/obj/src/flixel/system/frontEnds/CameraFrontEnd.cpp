#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_PUSH("CameraFrontEnd::new","flixel/system/frontEnds/CameraFrontEnd.hx",9);
{
	HX_STACK_LINE(21)
	this->useBufferLocking = false;
	HX_STACK_LINE(29)
	this->_cameraRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(30)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_PUSH("CameraFrontEnd::set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while(((_g < _g1->length))){
			HX_STACK_LINE(283)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(288)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_PUSH("CameraFrontEnd::get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_LINE(270)
	if (((::flixel::FlxG_obj::camera == null()))){
		HX_STACK_LINE(272)
		return (int)-16777216;
	}
	else{
		HX_STACK_LINE(276)
		return ::flixel::FlxG_obj::camera->bgColor;
	}
	HX_STACK_LINE(270)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("CameraFrontEnd::shake","flixel/system/frontEnds/CameraFrontEnd.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		while(((_g < _g1->length))){
			HX_STACK_LINE(256)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(256)
			++(_g);
			HX_STACK_LINE(258)
			camera->shake(Intensity,Duration,OnComplete,Force,Direction);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("CameraFrontEnd::fade","flixel/system/frontEnds/CameraFrontEnd.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(239)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(239)
		while(((_g < _g1->length))){
			HX_STACK_LINE(239)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(239)
			++(_g);
			HX_STACK_LINE(241)
			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("CameraFrontEnd::flash","flixel/system/frontEnds/CameraFrontEnd.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		while(((_g < _g1->length))){
			HX_STACK_LINE(222)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(222)
			++(_g);
			HX_STACK_LINE(224)
			camera->flash(Color,Duration,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_PUSH("CameraFrontEnd::reset","flixel/system/frontEnds/CameraFrontEnd.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NewCamera,"NewCamera");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			while(((_g < _g1->length))){
				HX_STACK_LINE(195)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(195)
				++(_g);
				HX_STACK_LINE(197)
				::flixel::FlxG_obj::game->removeChild(camera->_flashSprite);
				HX_STACK_LINE(198)
				camera->destroy();
			}
		}
		HX_STACK_LINE(201)
		this->list->splice((int)0,this->list->length);
		HX_STACK_LINE(203)
		if (((NewCamera == null()))){
			HX_STACK_LINE(204)
			NewCamera = ::flixel::FlxCamera_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
		}
		struct _Function_1_1{
			inline static ::flixel::FlxCamera Block( ::flixel::FlxCamera &NewCamera){
				HX_STACK_PUSH("*::closure","flixel/system/frontEnds/CameraFrontEnd.hx",208);
				{
					HX_STACK_LINE(208)
					::flixel::FlxG_obj::game->addChildAt(NewCamera->_flashSprite,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->inputContainer));
					HX_STACK_LINE(208)
					::flixel::FlxG_obj::cameras->list->push(NewCamera);
					HX_STACK_LINE(208)
					NewCamera->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
					HX_STACK_LINE(208)
					return NewCamera;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		::flixel::FlxG_obj::camera = _Function_1_1::Block(NewCamera);
		HX_STACK_LINE(209)
		NewCamera->ID = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_PUSH("CameraFrontEnd::remove","flixel/system/frontEnds/CameraFrontEnd.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(159)
		if (((bool((Camera != null())) && bool(::flixel::FlxG_obj::game->contains(Camera->_flashSprite))))){
			HX_STACK_LINE(161)
			::flixel::FlxG_obj::game->removeChild(Camera->_flashSprite);
			HX_STACK_LINE(162)
			int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_FlxCamera(::flixel::FlxG_obj::cameras->list,Camera,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(164)
			if (((index >= (int)0))){
				HX_STACK_LINE(165)
				::flixel::FlxG_obj::cameras->list->splice(index,(int)1);
			}
		}
		else{
			HX_STACK_LINE(170)
			::flixel::FlxG_obj::log->error(HX_CSTRING("Removing camera, not part of game."));
		}
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			while(((_g1 < _g))){
				HX_STACK_LINE(175)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(177)
				this->list->__get(i).StaticCast< ::flixel::FlxCamera >()->ID = i;
			}
		}
		HX_STACK_LINE(181)
		if ((Destroy)){
			HX_STACK_LINE(182)
			Camera->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

::flixel::FlxCamera CameraFrontEnd_obj::add( ::flixel::FlxCamera NewCamera){
	HX_STACK_PUSH("CameraFrontEnd::add","flixel/system/frontEnds/CameraFrontEnd.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(NewCamera,"NewCamera");
	HX_STACK_LINE(144)
	::flixel::FlxG_obj::game->addChildAt(NewCamera->_flashSprite,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->inputContainer));
	HX_STACK_LINE(145)
	::flixel::FlxG_obj::cameras->list->push(NewCamera);
	HX_STACK_LINE(146)
	NewCamera->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
	HX_STACK_LINE(148)
	return NewCamera;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

Void CameraFrontEnd_obj::update( ){
{
		HX_STACK_PUSH("CameraFrontEnd::update","flixel/system/frontEnds/CameraFrontEnd.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while(((_g < _g1->length))){
			HX_STACK_LINE(115)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(117)
			if (((bool((camera != null())) && bool(camera->exists)))){
				HX_STACK_LINE(119)
				if ((camera->active)){
					HX_STACK_LINE(120)
					camera->update();
				}
				HX_STACK_LINE(124)
				if (((camera->target == null()))){
					HX_STACK_LINE(126)
					camera->_flashSprite->set_x((camera->x + camera->_flashOffsetX));
					HX_STACK_LINE(127)
					camera->_flashSprite->set_y((camera->y + camera->_flashOffsetY));
				}
				HX_STACK_LINE(130)
				camera->_flashSprite->set_visible(camera->visible);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,update,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_PUSH("CameraFrontEnd::unlock","flixel/system/frontEnds/CameraFrontEnd.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		while(((_g < _g1->length))){
			HX_STACK_LINE(90)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(92)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(93)
				continue;
			}
			HX_STACK_LINE(97)
			camera->drawFX();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_PUSH("CameraFrontEnd::render","flixel/system/frontEnds/CameraFrontEnd.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		while(((_g < _g1->length))){
			HX_STACK_LINE(75)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(77)
			if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
				HX_STACK_LINE(78)
				camera->render();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_PUSH("CameraFrontEnd::lock","flixel/system/frontEnds/CameraFrontEnd.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		while(((_g < _g1->length))){
			HX_STACK_LINE(38)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(38)
			++(_g);
			HX_STACK_LINE(40)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(41)
				continue;
			}
			HX_STACK_LINE(55)
			camera->clearDrawStack();
			HX_STACK_LINE(56)
			camera->_canvas->get_graphics()->clear();
			HX_STACK_LINE(67)
			camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("_cameraRect"));
	outFields->push(HX_CSTRING("useBufferLocking"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("reset"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("unlock"),
	HX_CSTRING("render"),
	HX_CSTRING("lock"),
	HX_CSTRING("_cameraRect"),
	HX_CSTRING("useBufferLocking"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.CameraFrontEnd"), hx::TCanCast< CameraFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CameraFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
