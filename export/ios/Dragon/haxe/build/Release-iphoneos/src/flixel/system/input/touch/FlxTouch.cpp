#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouch
#include <flixel/system/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{
HX_STACK_PUSH("FlxTouch::new","flixel/system/input/touch/FlxTouch.hx",55);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int PointID = __o_PointID.Default(0);
{
	HX_STACK_LINE(56)
	super::__construct(null(),null());
	HX_STACK_LINE(57)
	this->screenX = (int)0;
	HX_STACK_LINE(58)
	this->screenY = (int)0;
	HX_STACK_LINE(59)
	this->_current = (int)0;
	HX_STACK_LINE(60)
	this->_last = (int)0;
	HX_STACK_LINE(61)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(62)
	this->_globalScreenPosition = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(64)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(65)
	this->updateTouchPosition(X,Y);
	HX_STACK_LINE(66)
	this->_touchPointID = PointID;
}
;
	return null();
}

FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(__o_X,__o_Y,__o_PointID);
	return result;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool FlxTouch_obj::get_isActive( ){
	HX_STACK_PUSH("FlxTouch::get_isActive","flixel/system/input/touch/FlxTouch.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	return (this->_current != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_isActive,return )

bool FlxTouch_obj::get_justReleased( ){
	HX_STACK_PUSH("FlxTouch::get_justReleased","flixel/system/input/touch/FlxTouch.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_LINE(250)
	return (this->_current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_justPressed( ){
	HX_STACK_PUSH("FlxTouch::get_justPressed","flixel/system/input/touch/FlxTouch.hx",242);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	return (this->_current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )

bool FlxTouch_obj::get_pressed( ){
	HX_STACK_PUSH("FlxTouch::get_pressed","flixel/system/input/touch/FlxTouch.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_LINE(234)
	return (this->_current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

Void FlxTouch_obj::deactivate( ){
{
		HX_STACK_PUSH("FlxTouch::deactivate","flixel/system/input/touch/FlxTouch.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_LINE(224)
		this->_current = (int)0;
		HX_STACK_LINE(225)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,deactivate,(void))

Void FlxTouch_obj::reset( Float X,Float Y,int PointID){
{
		HX_STACK_PUSH("FlxTouch::reset","flixel/system/input/touch/FlxTouch.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(PointID,"PointID");
		HX_STACK_LINE(216)
		this->updateTouchPosition(X,Y);
		HX_STACK_LINE(217)
		this->_touchPointID = PointID;
		HX_STACK_LINE(218)
		this->_current = (int)0;
		HX_STACK_LINE(219)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouch_obj,reset,(void))

bool FlxTouch_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxTouch::overlaps","flixel/system/input/touch/FlxTouch.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(190)
	if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::flixel::group::FlxTypedGroup >()))){
		HX_STACK_LINE(192)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(193)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(194)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(195)
		::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
		HX_STACK_LINE(196)
		Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
		HX_STACK_LINE(197)
		while(((i < grp->length))){
			HX_STACK_LINE(199)
			basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(200)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlaps(basic,Camera))))){
				HX_STACK_LINE(202)
				results = true;
				HX_STACK_LINE(203)
				break;
			}
		}
		HX_STACK_LINE(206)
		return results;
	}
	HX_STACK_LINE(208)
	return (hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup))->overlapsPoint(hx::ObjectPtr<OBJ_>(this),true,Camera);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,overlaps,return )

::flixel::util::FlxPoint FlxTouch_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxTouch::getScreenPosition","flixel/system/input/touch/FlxTouch.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(167)
	if (((Camera == null()))){
		HX_STACK_LINE(168)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(171)
	if (((point == null()))){
		HX_STACK_LINE(172)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(175)
	point->set_x((Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom)));
	HX_STACK_LINE(176)
	point->set_y((Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom)));
	HX_STACK_LINE(177)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getScreenPosition,return )

::flixel::util::FlxPoint FlxTouch_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxTouch::getWorldPosition","flixel/system/input/touch/FlxTouch.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(144)
	if (((Camera == null()))){
		HX_STACK_LINE(145)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(148)
	if (((point == null()))){
		HX_STACK_LINE(149)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(152)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(153)
	point->set_x((this->_point->x + Camera->scroll->x));
	HX_STACK_LINE(154)
	point->set_y((this->_point->y + Camera->scroll->y));
	HX_STACK_LINE(155)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getWorldPosition,return )

Void FlxTouch_obj::updateCursor( ){
{
		HX_STACK_PUSH("FlxTouch::updateCursor","flixel/system/input/touch/FlxTouch.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		::flixel::FlxCamera camera = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(129)
		this->screenX = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));
		HX_STACK_LINE(130)
		this->screenY = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));
		HX_STACK_LINE(131)
		this->set_x((this->screenX + camera->scroll->x));
		HX_STACK_LINE(132)
		this->set_y((this->screenY + camera->scroll->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,updateCursor,(void))

Void FlxTouch_obj::updateTouchPosition( Float X,Float Y){
{
		HX_STACK_PUSH("FlxTouch::updateTouchPosition","flixel/system/input/touch/FlxTouch.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(112)
		this->_flashPoint->x = X;
		HX_STACK_LINE(113)
		this->_flashPoint->y = Y;
		HX_STACK_LINE(114)
		this->_flashPoint = ::flixel::FlxG_obj::game->globalToLocal(this->_flashPoint);
		HX_STACK_LINE(116)
		this->_globalScreenPosition->set_x(this->_flashPoint->x);
		HX_STACK_LINE(117)
		this->_globalScreenPosition->set_y(this->_flashPoint->y);
		HX_STACK_LINE(118)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,updateTouchPosition,(void))

Void FlxTouch_obj::update( ){
{
		HX_STACK_PUSH("FlxTouch::update","flixel/system/input/touch/FlxTouch.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		if (((bool((this->_last == (int)-1)) && bool((this->_current == (int)-1))))){
			HX_STACK_LINE(95)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(98)
			if (((bool((this->_last == (int)2)) && bool((this->_current == (int)2))))){
				HX_STACK_LINE(99)
				this->_current = (int)1;
			}
		}
		HX_STACK_LINE(102)
		this->_last = this->_current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

int FlxTouch_obj::get_touchPointID( ){
	HX_STACK_PUSH("FlxTouch::get_touchPointID","flixel/system/input/touch/FlxTouch.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return this->_touchPointID;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_touchPointID,return )

Void FlxTouch_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTouch::destroy","flixel/system/input/touch/FlxTouch.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(74)
		this->_point = null();
		HX_STACK_LINE(75)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(76)
		this->_flashPoint = null();
	}
return null();
}



FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(_touchPointID,"_touchPointID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(_touchPointID,"_touchPointID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return get_isActive(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isActive") ) { return get_isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return inCallProp ? get_touchPointID() : touchPointID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { return _touchPointID; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return get_touchPointID_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchPosition") ) { return updateTouchPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { _touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isActive"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("_touchPointID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_isActive"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("reset"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("updateTouchPosition"),
	HX_CSTRING("update"),
	HX_CSTRING("get_touchPointID"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_last"),
	HX_CSTRING("_current"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("_touchPointID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.touch.FlxTouch"), hx::TCanCast< FlxTouch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTouch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace touch
