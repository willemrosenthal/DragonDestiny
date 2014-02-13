#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void PluginFrontEnd_obj::__construct()
{
HX_STACK_PUSH("PluginFrontEnd::new","flixel/system/frontEnds/PluginFrontEnd.hx",24);
{
	HX_STACK_LINE(25)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	this->add(::flixel::util::FlxTimer_obj::manager = ::flixel::plugin::TimerManager_obj::__new());
	HX_STACK_LINE(28)
	this->add(::flixel::tweens::FlxTween_obj::manager = ::flixel::plugin::TweenManager_obj::__new());
	HX_STACK_LINE(29)
	this->add(::flixel::util::FlxPath_obj::manager = ::flixel::plugin::PathManager_obj::__new());
}
;
	return null();
}

PluginFrontEnd_obj::~PluginFrontEnd_obj() { }

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return  new PluginFrontEnd_obj; }
hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new()
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic PluginFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

Void PluginFrontEnd_obj::onResize( int Width,int Height){
{
		HX_STACK_PUSH("PluginFrontEnd::onResize","flixel/system/frontEnds/PluginFrontEnd.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(171)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		while(((_g < _g1->length))){
			HX_STACK_LINE(171)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(171)
			++(_g);
			HX_STACK_LINE(173)
			if ((plugin->exists)){
				HX_STACK_LINE(174)
				plugin->onResize(Width,Height);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PluginFrontEnd_obj,onResize,(void))

Void PluginFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_PUSH("PluginFrontEnd::onStateSwitch","flixel/system/frontEnds/PluginFrontEnd.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(155)
		while(((_g < _g1->length))){
			HX_STACK_LINE(155)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(155)
			++(_g);
			HX_STACK_LINE(157)
			if ((plugin->exists)){
				HX_STACK_LINE(158)
				plugin->onStateSwitch();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,onStateSwitch,(void))

Void PluginFrontEnd_obj::draw( ){
{
		HX_STACK_PUSH("PluginFrontEnd::draw","flixel/system/frontEnds/PluginFrontEnd.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while(((_g < _g1->length))){
			HX_STACK_LINE(141)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(143)
			if (((bool(plugin->exists) && bool(plugin->visible)))){
				HX_STACK_LINE(144)
				plugin->draw();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))

Void PluginFrontEnd_obj::update( ){
{
		HX_STACK_PUSH("PluginFrontEnd::update","flixel/system/frontEnds/PluginFrontEnd.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		while(((_g < _g1->length))){
			HX_STACK_LINE(127)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(127)
			++(_g);
			HX_STACK_LINE(129)
			if (((bool(plugin->exists) && bool(plugin->active)))){
				HX_STACK_LINE(130)
				plugin->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,update,(void))

bool PluginFrontEnd_obj::removeType( ::Class ClassType){
	HX_STACK_PUSH("PluginFrontEnd::removeType","flixel/system/frontEnds/PluginFrontEnd.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ClassType,"ClassType");
	HX_STACK_LINE(106)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(107)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(109)
	while(((i >= (int)0))){
		HX_STACK_LINE(111)
		if ((::Std_obj::is(this->list->__get(i).StaticCast< ::flixel::plugin::FlxPlugin >(),ClassType))){
			HX_STACK_LINE(113)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(114)
			results = true;
		}
		HX_STACK_LINE(116)
		(i)--;
	}
	HX_STACK_LINE(119)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::remove( ::flixel::plugin::FlxPlugin Plugin){
	HX_STACK_PUSH("PluginFrontEnd::remove","flixel/system/frontEnds/PluginFrontEnd.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Plugin,"Plugin");
	HX_STACK_LINE(82)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(84)
	while(((i >= (int)0))){
		HX_STACK_LINE(86)
		if (((this->list->__get(i).StaticCast< ::flixel::plugin::FlxPlugin >() == Plugin))){
			HX_STACK_LINE(88)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(89)
			return Plugin;
		}
		HX_STACK_LINE(91)
		(i)--;
	}
	HX_STACK_LINE(94)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::get( ::Class ClassType){
	HX_STACK_PUSH("PluginFrontEnd::get","flixel/system/frontEnds/PluginFrontEnd.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ClassType,"ClassType");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while(((_g < _g1->length))){
			HX_STACK_LINE(62)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(64)
			if ((::Std_obj::is(plugin,ClassType))){
				HX_STACK_LINE(65)
				return plugin;
			}
		}
	}
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::add( ::flixel::plugin::FlxPlugin Plugin){
	HX_STACK_PUSH("PluginFrontEnd::add","flixel/system/frontEnds/PluginFrontEnd.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Plugin,"Plugin");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		while(((_g < _g1->length))){
			HX_STACK_LINE(41)
			::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(41)
			++(_g);
			HX_STACK_LINE(43)
			if (((plugin->toString() == Plugin->toString()))){
				HX_STACK_LINE(44)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(50)
	this->list->push(Plugin);
	HX_STACK_LINE(51)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add,return )


PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic PluginFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PluginFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onResize"),
	HX_CSTRING("onStateSwitch"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("removeType"),
	HX_CSTRING("remove"),
	HX_CSTRING("get"),
	HX_CSTRING("add"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.PluginFrontEnd"), hx::TCanCast< PluginFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PluginFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
