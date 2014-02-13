#include <hxcpp.h>

#ifndef INCLUDED_ScaledStage
#include <ScaledStage.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif

Void ScaledStage_obj::__construct(Dynamic inHandle,int inWidth,int inHeight)
{
HX_STACK_PUSH("ScaledStage::new","ApplicationMain.hx",197);
{
	HX_STACK_LINE(197)
	super::__construct(inHandle,(int)0,(int)0);
}
;
	return null();
}

ScaledStage_obj::~ScaledStage_obj() { }

Dynamic ScaledStage_obj::__CreateEmpty() { return  new ScaledStage_obj; }
hx::ObjectPtr< ScaledStage_obj > ScaledStage_obj::__new(Dynamic inHandle,int inWidth,int inHeight)
{  hx::ObjectPtr< ScaledStage_obj > result = new ScaledStage_obj();
	result->__construct(inHandle,inWidth,inHeight);
	return result;}

Dynamic ScaledStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScaledStage_obj > result = new ScaledStage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int ScaledStage_obj::get_stageWidth( ){
	HX_STACK_PUSH("ScaledStage::get_stageWidth","ApplicationMain.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (int)1136;
}


int ScaledStage_obj::get_stageHeight( ){
	HX_STACK_PUSH("ScaledStage::get_stageHeight","ApplicationMain.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	return (int)640;
}


int ScaledStage_obj::get___stageWidth( ){
	HX_STACK_PUSH("ScaledStage::get___stageWidth","ApplicationMain.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->super::get_stageWidth();
}


HX_DEFINE_DYNAMIC_FUNC0(ScaledStage_obj,get___stageWidth,return )

int ScaledStage_obj::get___stageHeight( ){
	HX_STACK_PUSH("ScaledStage::get___stageHeight","ApplicationMain.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	return this->super::get_stageHeight();
}


HX_DEFINE_DYNAMIC_FUNC0(ScaledStage_obj,get___stageHeight,return )


ScaledStage_obj::ScaledStage_obj()
{
}

void ScaledStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScaledStage);
	HX_MARK_MEMBER_NAME(__stageWidth,"__stageWidth");
	HX_MARK_MEMBER_NAME(__stageHeight,"__stageHeight");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScaledStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__stageWidth,"__stageWidth");
	HX_VISIT_MEMBER_NAME(__stageHeight,"__stageHeight");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScaledStage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stageWidth") ) { return inCallProp ? get___stageWidth() : __stageWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__stageHeight") ) { return inCallProp ? get___stageHeight() : __stageHeight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_stageWidth") ) { return get_stageWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_stageHeight") ) { return get_stageHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get___stageWidth") ) { return get___stageWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get___stageHeight") ) { return get___stageHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScaledStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stageWidth") ) { __stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__stageHeight") ) { __stageHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScaledStage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__stageWidth"));
	outFields->push(HX_CSTRING("__stageHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_stageWidth"),
	HX_CSTRING("get_stageHeight"),
	HX_CSTRING("get___stageWidth"),
	HX_CSTRING("get___stageHeight"),
	HX_CSTRING("__stageWidth"),
	HX_CSTRING("__stageHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScaledStage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScaledStage_obj::__mClass,"__mClass");
};

Class ScaledStage_obj::__mClass;

void ScaledStage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ScaledStage"), hx::TCanCast< ScaledStage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScaledStage_obj::__boot()
{
}

