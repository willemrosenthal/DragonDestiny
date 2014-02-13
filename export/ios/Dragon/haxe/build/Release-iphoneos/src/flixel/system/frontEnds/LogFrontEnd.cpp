#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void LogFrontEnd_obj::__construct()
{
HX_STACK_PUSH("LogFrontEnd::new","flixel/system/frontEnds/LogFrontEnd.hx",7);
{
	HX_STACK_LINE(131)
	this->redirectTraces = false;
	HX_STACK_LINE(12)
	this->add = ::Reflect_obj::makeVarArgs(this->_add_dyn());
	HX_STACK_LINE(13)
	this->warn = ::Reflect_obj::makeVarArgs(this->_warn_dyn());
	HX_STACK_LINE(14)
	this->error = ::Reflect_obj::makeVarArgs(this->_error_dyn());
	HX_STACK_LINE(15)
	this->notice = ::Reflect_obj::makeVarArgs(this->_notice_dyn());
	HX_STACK_LINE(17)
	this->_oldTrace = ::haxe::Log_obj::trace_dyn();
}
;
	return null();
}

LogFrontEnd_obj::~LogFrontEnd_obj() { }

Dynamic LogFrontEnd_obj::__CreateEmpty() { return  new LogFrontEnd_obj; }
hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new()
{  hx::ObjectPtr< LogFrontEnd_obj > result = new LogFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic LogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogFrontEnd_obj > result = new LogFrontEnd_obj();
	result->__construct();
	return result;}

Void LogFrontEnd_obj::processTraceData( Dynamic Data,Dynamic Inf){
{
		HX_STACK_PUSH("LogFrontEnd::processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Inf,"Inf");
		HX_STACK_LINE(158)
		Dynamic paramArray = Dynamic( Array_obj<Dynamic>::__new().Add(Data));		HX_STACK_VAR(paramArray,"paramArray");
		HX_STACK_LINE(160)
		if (((Inf->__Field(HX_CSTRING("customParams"),true) != null()))){
			HX_STACK_LINE(162)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = Inf->__Field(HX_CSTRING("customParams"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(162)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(162)
				Dynamic i = _g1->__GetItem(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(162)
				++(_g);
				HX_STACK_LINE(164)
				paramArray->__Field(HX_CSTRING("push"),true)(i);
			}
		}
		HX_STACK_LINE(168)
		::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->add,paramArray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))

bool LogFrontEnd_obj::set_redirectTraces( bool Redirect){
	HX_STACK_PUSH("LogFrontEnd::set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Redirect,"Redirect");
	HX_STACK_LINE(139)
	if ((Redirect)){
		HX_STACK_LINE(140)
		::haxe::Log_obj::trace = this->processTraceData_dyn();
	}
	else{
		HX_STACK_LINE(144)
		::haxe::Log_obj::trace = this->_oldTrace;
	}
	HX_STACK_LINE(148)
	return this->redirectTraces = Redirect;
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

Void LogFrontEnd_obj::clear( ){
{
		HX_STACK_PUSH("LogFrontEnd::clear","flixel/system/frontEnds/LogFrontEnd.hx",121);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

Void LogFrontEnd_obj::advanced( Dynamic Data,::flixel::system::debug::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_PUSH("LogFrontEnd::advanced","flixel/system/frontEnds/LogFrontEnd.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(FireOnce,"FireOnce");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

Void LogFrontEnd_obj::_notice( Dynamic Data){
{
		HX_STACK_PUSH("LogFrontEnd::_notice","flixel/system/frontEnds/LogFrontEnd.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,_notice,(void))

Void LogFrontEnd_obj::_error( Dynamic Data){
{
		HX_STACK_PUSH("LogFrontEnd::_error","flixel/system/frontEnds/LogFrontEnd.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,_error,(void))

Void LogFrontEnd_obj::_warn( Dynamic Data){
{
		HX_STACK_PUSH("LogFrontEnd::_warn","flixel/system/frontEnds/LogFrontEnd.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,_warn,(void))

Void LogFrontEnd_obj::_add( Dynamic Data){
{
		HX_STACK_PUSH("LogFrontEnd::_add","flixel/system/frontEnds/LogFrontEnd.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,_add,(void))


LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(_oldTrace,"_oldTrace");
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(notice,"notice");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(warn,"warn");
	HX_MARK_MEMBER_NAME(add,"add");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_oldTrace,"_oldTrace");
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(notice,"notice");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(warn,"warn");
	HX_VISIT_MEMBER_NAME(add,"add");
}

Dynamic LogFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return warn; }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"_warn") ) { return _warn_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return notice; }
		if (HX_FIELD_EQ(inName,"_error") ) { return _error_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_notice") ) { return _notice_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return advanced_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_oldTrace") ) { return _oldTrace; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return redirectTraces; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return processTraceData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return set_redirectTraces_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { add=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { warn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { notice=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_oldTrace") ) { _oldTrace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp) return set_redirectTraces(inValue);redirectTraces=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_oldTrace"));
	outFields->push(HX_CSTRING("redirectTraces"));
	outFields->push(HX_CSTRING("notice"));
	outFields->push(HX_CSTRING("error"));
	outFields->push(HX_CSTRING("warn"));
	outFields->push(HX_CSTRING("add"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("processTraceData"),
	HX_CSTRING("set_redirectTraces"),
	HX_CSTRING("_oldTrace"),
	HX_CSTRING("redirectTraces"),
	HX_CSTRING("clear"),
	HX_CSTRING("advanced"),
	HX_CSTRING("_notice"),
	HX_CSTRING("notice"),
	HX_CSTRING("_error"),
	HX_CSTRING("error"),
	HX_CSTRING("_warn"),
	HX_CSTRING("warn"),
	HX_CSTRING("_add"),
	HX_CSTRING("add"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.LogFrontEnd"), hx::TCanCast< LogFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LogFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
