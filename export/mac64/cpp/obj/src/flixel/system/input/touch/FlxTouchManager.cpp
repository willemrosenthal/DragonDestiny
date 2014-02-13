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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouch
#include <flixel/system/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_system_input_touch_FlxTouchManager
#include <flixel/system/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace touch{

Void FlxTouchManager_obj::__construct()
{
HX_STACK_PUSH("FlxTouchManager::new","flixel/system/input/touch/FlxTouchManager.hx",41);
{
	HX_STACK_LINE(42)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->_inactiveTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	this->_touchesCache = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(45)
	::flixel::system::input::touch::FlxTouchManager_obj::maxTouchPoints = ::flash::ui::Multitouch_obj::maxTouchPoints;
	HX_STACK_LINE(46)
	::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
	HX_STACK_LINE(48)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->handleTouchBegin_dyn(),null(),null(),null());
	HX_STACK_LINE(49)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->handleTouchEnd_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->handleTouchMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::system::input::IFlxInput_obj)) return operator ::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::String FlxTouchManager_obj::toString( ){
	HX_STACK_PUSH("FlxTouchManager::toString","flixel/system/input/touch/FlxTouchManager.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	return HX_CSTRING("FlxTouchManager");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,toString,return )

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocusLost","flixel/system/input/touch/FlxTouchManager.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_LINE(295)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocus","flixel/system/input/touch/FlxTouchManager.hx",290);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

::flixel::system::input::touch::FlxTouch FlxTouchManager_obj::recycle( Float X,Float Y,int PointID){
	HX_STACK_PUSH("FlxTouchManager::recycle","flixel/system/input/touch/FlxTouchManager.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PointID,"PointID");
	HX_STACK_LINE(279)
	if (((this->_inactiveTouches->length > (int)0))){
		HX_STACK_LINE(281)
		::flixel::system::input::touch::FlxTouch touch = this->_inactiveTouches->pop().StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(282)
		touch->reset(X,Y,PointID);
		HX_STACK_LINE(283)
		return this->add(touch);
	}
	HX_STACK_LINE(286)
	return this->add(::flixel::system::input::touch::FlxTouch_obj::__new(X,Y,PointID));
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

::flixel::system::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::system::input::touch::FlxTouch Touch){
	HX_STACK_PUSH("FlxTouchManager::add","flixel/system/input/touch/FlxTouchManager.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_LINE(265)
	this->list->push(Touch);
	HX_STACK_LINE(266)
	this->_touchesCache->set(Touch->get_touchPointID(),Touch);
	HX_STACK_LINE(267)
	return Touch;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

Array< ::Dynamic > FlxTouchManager_obj::justReleased( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justReleased","flixel/system/input/touch/FlxTouchManager.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(236)
	if (((TouchArray == null()))){
		HX_STACK_LINE(237)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(241)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(242)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(243)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		while(((_g < _g1->length))){
			HX_STACK_LINE(247)
			::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(247)
			++(_g);
			HX_STACK_LINE(249)
			if (((touch->_current == (int)-1))){
				HX_STACK_LINE(250)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(255)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

Array< ::Dynamic > FlxTouchManager_obj::justStarted( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justStarted","flixel/system/input/touch/FlxTouchManager.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(206)
	if (((TouchArray == null()))){
		HX_STACK_LINE(207)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(211)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(213)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(214)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(218)
		while(((_g < _g1->length))){
			HX_STACK_LINE(218)
			::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(218)
			++(_g);
			HX_STACK_LINE(220)
			if (((touch->_current == (int)2))){
				HX_STACK_LINE(221)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(226)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

Void FlxTouchManager_obj::handleTouchMove( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchMove","flixel/system/input/touch/FlxTouchManager.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(191)
		::flixel::system::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(193)
		if (((touch != null()))){
			HX_STACK_LINE(194)
			touch->updateTouchPosition(FlashEvent->stageX,FlashEvent->stageY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchEnd","flixel/system/input/touch/FlxTouchManager.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(170)
		::flixel::system::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(172)
		if (((touch != null()))){
			HX_STACK_LINE(173)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(175)
				touch->_current = (int)-1;
			}
			else{
				HX_STACK_LINE(179)
				touch->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchBegin","flixel/system/input/touch/FlxTouchManager.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(143)
		::flixel::system::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(144)
		if (((touch != null()))){
			HX_STACK_LINE(146)
			touch->updateTouchPosition(FlashEvent->stageX,FlashEvent->stageY);
			HX_STACK_LINE(148)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(149)
				touch->_current = (int)1;
			}
			else{
				HX_STACK_LINE(153)
				touch->_current = (int)2;
			}
		}
		else{
			HX_STACK_LINE(159)
			touch = this->recycle(FlashEvent->stageX,FlashEvent->stageY,FlashEvent->touchPointID);
			HX_STACK_LINE(160)
			touch->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxTouchManager::reset","flixel/system/input/touch/FlxTouchManager.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_touchesCache->keys());  __it->hasNext(); ){
			int key = __it->next();
			this->_touchesCache->remove(key);
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(128)
			while(((_g < _g1->length))){
				HX_STACK_LINE(128)
				::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				touch->deactivate();
				HX_STACK_LINE(131)
				this->_inactiveTouches->push(touch);
			}
		}
		HX_STACK_LINE(134)
		this->list->splice((int)0,this->list->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_PUSH("FlxTouchManager::update","flixel/system/input/touch/FlxTouchManager.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(95)
		::flixel::system::input::touch::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(97)
		while(((i >= (int)0))){
			HX_STACK_LINE(99)
			touch = this->list->__get(i).StaticCast< ::flixel::system::input::touch::FlxTouch >();
			HX_STACK_LINE(102)
			if (((touch->_current == (int)0))){
				HX_STACK_LINE(104)
				touch->deactivate();
				HX_STACK_LINE(105)
				this->_touchesCache->remove(touch->get_touchPointID());
				HX_STACK_LINE(106)
				this->list->splice(i,(int)1);
				HX_STACK_LINE(107)
				this->_inactiveTouches->push(touch);
			}
			else{
				HX_STACK_LINE(110)
				touch->update();
			}
			HX_STACK_LINE(114)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTouchManager::destroy","flixel/system/input/touch/FlxTouchManager.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			while(((_g < _g1->length))){
				HX_STACK_LINE(73)
				::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(73)
				++(_g);
				HX_STACK_LINE(75)
				touch->destroy();
			}
		}
		HX_STACK_LINE(77)
		this->list = null();
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			while(((_g < _g1->length))){
				HX_STACK_LINE(79)
				::flixel::system::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::system::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(79)
				++(_g);
				HX_STACK_LINE(81)
				touch->destroy();
			}
		}
		HX_STACK_LINE(83)
		this->_inactiveTouches = null();
		HX_STACK_LINE(85)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

::flixel::system::input::touch::FlxTouch FlxTouchManager_obj::getFirst( ){
	HX_STACK_PUSH("FlxTouchManager::getFirst","flixel/system/input/touch/FlxTouchManager.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	if (((this->list->__get((int)0).StaticCast< ::flixel::system::input::touch::FlxTouch >() != null()))){
		HX_STACK_LINE(59)
		return this->list->__get((int)0).StaticCast< ::flixel::system::input::touch::FlxTouch >();
	}
	else{
		HX_STACK_LINE(63)
		return null();
	}
	HX_STACK_LINE(57)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"justStarted") ) { return justStarted_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchesCache"));
	outFields->push(HX_CSTRING("_inactiveTouches"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justStarted"),
	HX_CSTRING("handleTouchMove"),
	HX_CSTRING("handleTouchEnd"),
	HX_CSTRING("handleTouchBegin"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getFirst"),
	HX_CSTRING("_touchesCache"),
	HX_CSTRING("_inactiveTouches"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

Class FlxTouchManager_obj::__mClass;

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.touch.FlxTouchManager"), hx::TCanCast< FlxTouchManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace touch
