#include <hxcpp.h>

#ifndef INCLUDED_Calculations
#include <Calculations.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Calculations_obj::__construct()
{
HX_STACK_PUSH("Calculations::new","Calculations.hx",14);
{
}
;
	return null();
}

Calculations_obj::~Calculations_obj() { }

Dynamic Calculations_obj::__CreateEmpty() { return  new Calculations_obj; }
hx::ObjectPtr< Calculations_obj > Calculations_obj::__new()
{  hx::ObjectPtr< Calculations_obj > result = new Calculations_obj();
	result->__construct();
	return result;}

Dynamic Calculations_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Calculations_obj > result = new Calculations_obj();
	result->__construct();
	return result;}

Float Calculations_obj::plusOrMinus( hx::Null< Float >  __o_Value){
Float Value = __o_Value.Default(1);
	HX_STACK_PUSH("Calculations::plusOrMinus","Calculations.hx",8);
	HX_STACK_ARG(Value,"Value");
{
		HX_STACK_LINE(8)
		return ((((::Math_obj::round(::Math_obj::random()) * (int)2) - (int)1)) * Value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Calculations_obj,plusOrMinus,return )


Calculations_obj::Calculations_obj()
{
}

void Calculations_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Calculations);
	HX_MARK_END_CLASS();
}

void Calculations_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Calculations_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"plusOrMinus") ) { return plusOrMinus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Calculations_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Calculations_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("plusOrMinus"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Calculations_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Calculations_obj::__mClass,"__mClass");
};

Class Calculations_obj::__mClass;

void Calculations_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Calculations"), hx::TCanCast< Calculations_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Calculations_obj::__boot()
{
}

