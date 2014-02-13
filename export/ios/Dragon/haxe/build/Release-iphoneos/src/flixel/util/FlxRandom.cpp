#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorUtil
#include <flixel/util/FlxColorUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxRandom_obj::__construct()
{
	return null();
}

FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new()
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Float FlxRandom_obj::globalSeed;

int FlxRandom_obj::intHelper;

int FlxRandom_obj::_int( ){
	HX_STACK_PUSH("FlxRandom::int","flixel/util/FlxRandom.hx",31);
	HX_STACK_LINE(32)
	int result = ::Std_obj::_int(::flixel::util::FlxRandom_obj::intHelper);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(34)
	(result)++;
	HX_STACK_LINE(35)
	hx::MultEq(result,(int)75);
	HX_STACK_LINE(36)
	hx::ModEq(result,(int)65537);
	HX_STACK_LINE(37)
	(result)--;
	HX_STACK_LINE(39)
	(::flixel::util::FlxRandom_obj::intHelper)++;
	HX_STACK_LINE(41)
	if (((::flixel::util::FlxRandom_obj::intHelper == (int)65536))){
		HX_STACK_LINE(42)
		::flixel::util::FlxRandom_obj::intHelper = (int)0;
	}
	HX_STACK_LINE(46)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_int,return )

int FlxRandom_obj::intRanged( Dynamic Min,Dynamic Max,Array< int > Excludes){
	HX_STACK_PUSH("FlxRandom::intRanged","flixel/util/FlxRandom.hx",62);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_ARG(Excludes,"Excludes");
	HX_STACK_LINE(63)
	if (((Min == null()))){
		HX_STACK_LINE(64)
		Min = (int)0;
	}
	HX_STACK_LINE(68)
	if (((Max == null()))){
		HX_STACK_LINE(69)
		Max = (int)16777215;
	}
	HX_STACK_LINE(73)
	if (((Min == Max))){
		HX_STACK_LINE(74)
		return ::Math_obj::floor(Min);
	}
	HX_STACK_LINE(78)
	if (((Excludes != null()))){
		HX_STACK_LINE(81)
		Excludes->sort(::flixel::util::FlxMath_obj::numericComparison_dyn());
		HX_STACK_LINE(83)
		int result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(85)
		do{
			HX_STACK_LINE(85)
			if (((Min < Max))){
				HX_STACK_LINE(87)
				result = ::Math_obj::floor((Min + (::Math_obj::random() * (((Max + (int)1) - Min)))));
			}
			else{
				HX_STACK_LINE(91)
				result = ::Math_obj::floor((Max + (::Math_obj::random() * (((Min + (int)1) - Max)))));
			}
		}
while(((::flixel::util::FlxArrayUtil_obj::indexOf_Int(Excludes,result,null()) >= (int)0)));
		HX_STACK_LINE(97)
		return result;
	}
	else{
		HX_STACK_LINE(100)
		if (((Min < Max))){
			HX_STACK_LINE(103)
			return ::Math_obj::floor((Min + (::Math_obj::random() * (((Max + (int)1) - Min)))));
		}
		else{
			HX_STACK_LINE(107)
			return ::Math_obj::floor((Max + (::Math_obj::random() * (((Min + (int)1) - Max)))));
		}
	}
	HX_STACK_LINE(78)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,intRanged,return )

Float FlxRandom_obj::_float( ){
	HX_STACK_PUSH("FlxRandom::float","flixel/util/FlxRandom.hx",119);
	HX_STACK_LINE(120)
	::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
	HX_STACK_LINE(121)
	if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
		HX_STACK_LINE(121)
		hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
	}
	HX_STACK_LINE(122)
	return ::flixel::util::FlxRandom_obj::globalSeed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_float,return )

Float FlxRandom_obj::floatRanged( Dynamic min,Dynamic max){
	HX_STACK_PUSH("FlxRandom::floatRanged","flixel/util/FlxRandom.hx",137);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(138)
	if (((min == null()))){
		HX_STACK_LINE(139)
		min = (int)0;
	}
	HX_STACK_LINE(143)
	if (((max == null()))){
		HX_STACK_LINE(144)
		max = (int)16777215;
	}
	HX_STACK_LINE(148)
	if (((min == max))){
		HX_STACK_LINE(149)
		return min;
	}
	else{
		HX_STACK_LINE(152)
		if (((min < max))){
			HX_STACK_LINE(153)
			return (min + (::Math_obj::random() * ((max - min))));
		}
		else{
			HX_STACK_LINE(157)
			return (max + (::Math_obj::random() * ((min - max))));
		}
	}
	HX_STACK_LINE(148)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,floatRanged,return )

Float FlxRandom_obj::srand( Float Seed){
	HX_STACK_PUSH("FlxRandom::srand","flixel/util/FlxRandom.hx",168);
	HX_STACK_ARG(Seed,"Seed");
	HX_STACK_LINE(168)
	return (Float(hx::Mod(((int)69621 * ::Std_obj::_int((Seed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,srand,return )

bool FlxRandom_obj::chanceRoll( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_PUSH("FlxRandom::chanceRoll","flixel/util/FlxRandom.hx",180);
	HX_STACK_ARG(Chance,"Chance");
{
		HX_STACK_LINE(180)
		if (((Chance <= (int)0))){
			HX_STACK_LINE(182)
			return false;
		}
		else{
			HX_STACK_LINE(185)
			if (((Chance >= (int)100))){
				HX_STACK_LINE(186)
				return true;
			}
			else{
				HX_STACK_LINE(190)
				if ((((::Math_obj::random() * (int)100) >= Chance))){
					HX_STACK_LINE(192)
					return false;
				}
				else{
					HX_STACK_LINE(196)
					return true;
				}
			}
		}
		HX_STACK_LINE(180)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,chanceRoll,return )

Float FlxRandom_obj::sign( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_PUSH("FlxRandom::sign","flixel/util/FlxRandom.hx",209);
	HX_STACK_ARG(Chance,"Chance");
{
		HX_STACK_LINE(209)
		return (  ((::flixel::util::FlxRandom_obj::chanceRoll(Chance))) ? Float((int)1) : Float((int)-1) );
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::color( hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_alpha){
int min = __o_min.Default(0);
int max = __o_max.Default(255);
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxRandom::color","flixel/util/FlxRandom.hx",225);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(225)
		return ::flixel::util::FlxColorUtil_obj::getRandomColor(min,max,alpha);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,color,return )


FlxRandom_obj::FlxRandom_obj()
{
}

void FlxRandom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRandom);
	HX_MARK_END_CLASS();
}

void FlxRandom_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxRandom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"srand") ) { return srand_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intHelper") ) { return intHelper; }
		if (HX_FIELD_EQ(inName,"intRanged") ) { return intRanged_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { return globalSeed; }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { return chanceRoll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatRanged") ) { return floatRanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRandom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"intHelper") ) { intHelper=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { globalSeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("globalSeed"),
	HX_CSTRING("intHelper"),
	HX_CSTRING("int"),
	HX_CSTRING("intRanged"),
	HX_CSTRING("float"),
	HX_CSTRING("floatRanged"),
	HX_CSTRING("srand"),
	HX_CSTRING("chanceRoll"),
	HX_CSTRING("sign"),
	HX_CSTRING("color"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::intHelper,"intHelper");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::intHelper,"intHelper");
};

Class FlxRandom_obj::__mClass;

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxRandom"), hx::TCanCast< FlxRandom_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxRandom_obj::__boot()
{
	intHelper= (int)0;
}

} // end namespace flixel
} // end namespace util
