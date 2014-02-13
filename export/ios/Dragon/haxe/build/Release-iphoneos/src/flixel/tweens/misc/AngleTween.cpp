#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void AngleTween_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("AngleTween::new","flixel/tweens/misc/AngleTween.hx",23);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(24)
	this->angle = (int)0;
	HX_STACK_LINE(25)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

AngleTween_obj::~AngleTween_obj() { }

Dynamic AngleTween_obj::__CreateEmpty() { return  new AngleTween_obj; }
hx::ObjectPtr< AngleTween_obj > AngleTween_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< AngleTween_obj > result = new AngleTween_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic AngleTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AngleTween_obj > result = new AngleTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AngleTween_obj::update( ){
{
		HX_STACK_PUSH("AngleTween::update","flixel/tweens/misc/AngleTween.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		this->super::update();
		HX_STACK_LINE(62)
		this->angle = hx::Mod(((this->_start + (this->_range * this->_t))),(int)360);
		HX_STACK_LINE(63)
		if (((this->angle < (int)0))){
			HX_STACK_LINE(64)
			hx::AddEq(this->angle,(int)360);
		}
	}
return null();
}


::flixel::tweens::misc::AngleTween AngleTween_obj::tween( Float fromAngle,Float toAngle,Float duration,Dynamic ease){
	HX_STACK_PUSH("AngleTween::tween","flixel/tweens/misc/AngleTween.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fromAngle,"fromAngle");
	HX_STACK_ARG(toAngle,"toAngle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_LINE(37)
	this->_start = this->angle = fromAngle;
	HX_STACK_LINE(38)
	Float d = (toAngle - this->angle);		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(39)
	Float a = ::Math_obj::abs(d);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(40)
	if (((a > (int)181))){
		HX_STACK_LINE(41)
		this->_range = ((((int)360 - a)) * ((  (((d > (int)0))) ? int((int)-1) : int((int)1) )));
	}
	else{
		HX_STACK_LINE(44)
		if (((a < (int)179))){
			HX_STACK_LINE(45)
			this->_range = d;
		}
		else{
			HX_STACK_LINE(49)
			this->_range = ::flixel::util::FlxRandom_obj::floatRanged((int)180,(int)-180);
		}
	}
	HX_STACK_LINE(52)
	this->_target = duration;
	HX_STACK_LINE(53)
	this->_ease = ease;
	HX_STACK_LINE(54)
	this->start();
	HX_STACK_LINE(55)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(AngleTween_obj,tween,return )


AngleTween_obj::AngleTween_obj()
{
}

void AngleTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleTween);
	HX_MARK_MEMBER_NAME(_range,"_range");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(angle,"angle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AngleTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AngleTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AngleTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AngleTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_range"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_range"),
	HX_CSTRING("_start"),
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("angle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

Class AngleTween_obj::__mClass;

void AngleTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.AngleTween"), hx::TCanCast< AngleTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AngleTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
