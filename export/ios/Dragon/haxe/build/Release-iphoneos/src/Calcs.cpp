#include <hxcpp.h>

#ifndef INCLUDED_Calcs
#include <Calcs.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Calcs_obj::__construct()
{
HX_STACK_PUSH("Calcs::new","Calcs.hx",18);
{
}
;
	return null();
}

Calcs_obj::~Calcs_obj() { }

Dynamic Calcs_obj::__CreateEmpty() { return  new Calcs_obj; }
hx::ObjectPtr< Calcs_obj > Calcs_obj::__new()
{  hx::ObjectPtr< Calcs_obj > result = new Calcs_obj();
	result->__construct();
	return result;}

Dynamic Calcs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Calcs_obj > result = new Calcs_obj();
	result->__construct();
	return result;}

::flixel::util::FlxPoint Calcs_obj::randomOnScreen( hx::Null< Float >  __o_Padding,hx::Null< Float >  __o_PaddingY){
Float Padding = __o_Padding.Default(0);
Float PaddingY = __o_PaddingY.Default(0);
	HX_STACK_PUSH("Calcs::randomOnScreen","Calcs.hx",8);
	HX_STACK_ARG(Padding,"Padding");
	HX_STACK_ARG(PaddingY,"PaddingY");
{
		HX_STACK_LINE(9)
		::flixel::util::FlxPoint pos = ::flixel::util::FlxPoint_obj::__new(((((::flixel::FlxG_obj::width - Padding)) * ::Math_obj::random()) + (Padding * 0.5)),((((::flixel::FlxG_obj::height - PaddingY)) * ::Math_obj::random()) + (PaddingY * 0.5)));		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(10)
		return pos;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Calcs_obj,randomOnScreen,return )

Float Calcs_obj::plusOrMinus( hx::Null< Float >  __o_Value){
Float Value = __o_Value.Default(1);
	HX_STACK_PUSH("Calcs::plusOrMinus","Calcs.hx",14);
	HX_STACK_ARG(Value,"Value");
{
		HX_STACK_LINE(14)
		return ((((::Math_obj::round(::Math_obj::random()) * (int)2) - (int)1)) * Value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Calcs_obj,plusOrMinus,return )


Calcs_obj::Calcs_obj()
{
}

void Calcs_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Calcs);
	HX_MARK_END_CLASS();
}

void Calcs_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Calcs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"plusOrMinus") ) { return plusOrMinus_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"randomOnScreen") ) { return randomOnScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Calcs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Calcs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("randomOnScreen"),
	HX_CSTRING("plusOrMinus"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Calcs_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Calcs_obj::__mClass,"__mClass");
};

Class Calcs_obj::__mClass;

void Calcs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Calcs"), hx::TCanCast< Calcs_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Calcs_obj::__boot()
{
}

