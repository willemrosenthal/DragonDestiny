#include <hxcpp.h>

#ifndef INCLUDED_Calcs
#include <Calcs.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Stars
#include <Stars.h>
#endif
#ifndef INCLUDED_WeatherParticle
#include <WeatherParticle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Stars_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Stars::new","Stars.hx",7);
{
	HX_STACK_LINE(10)
	this->timerMax = (int)0;
	HX_STACK_LINE(9)
	this->timer = (int)0;
	HX_STACK_LINE(14)
	super::__construct(X,Y);
	HX_STACK_LINE(16)
	this->loadGraphic(HX_CSTRING("assets/spring/pollen.png"),false,false,(int)4,(int)4,null(),null());
	HX_STACK_LINE(18)
	this->acceleration->set_y((int)300);
	HX_STACK_LINE(19)
	this->acceleration->set_x((int)-50);
	HX_STACK_LINE(20)
	this->maxVelocity->set_y(((::Math_obj::random() * (int)25) + (int)10));
	HX_STACK_LINE(21)
	this->maxVelocity->set_x(((::Math_obj::random() * (int)15) + (int)10));
	HX_STACK_LINE(23)
	this->timerMax = ::Math_obj::round(((::Math_obj::random() * (int)200) + (int)100));
	HX_STACK_LINE(25)
	this->set_moves(true);
	HX_STACK_LINE(27)
	this->stickToScreen = true;
}
;
	return null();
}

Stars_obj::~Stars_obj() { }

Dynamic Stars_obj::__CreateEmpty() { return  new Stars_obj; }
hx::ObjectPtr< Stars_obj > Stars_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Stars_obj > result = new Stars_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Stars_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stars_obj > result = new Stars_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Stars_obj::update( ){
{
		HX_STACK_PUSH("Stars::update","Stars.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->super::update();
		HX_STACK_LINE(35)
		this->velocity->set_x((::Global_obj::speed * -0.9));
		HX_STACK_LINE(38)
		if (((this->acceleration->y < (int)10))){
			HX_STACK_LINE(39)
			::flixel::util::FlxPoint _g = this->acceleration;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			_g->set_y((_g->y + (::Math_obj::random() * (int)20)));
		}
		HX_STACK_LINE(41)
		(this->timer)++;
		HX_STACK_LINE(42)
		if (((this->timer == this->timerMax))){
			HX_STACK_LINE(43)
			this->acceleration->set_y(((::Math_obj::random() * (int)-200) - (int)200));
			HX_STACK_LINE(44)
			this->acceleration->set_x(::Calcs_obj::plusOrMinus((::Math_obj::random() * (int)80)));
			HX_STACK_LINE(45)
			this->timerMax = ::Math_obj::round(((::Math_obj::random() * (int)200) + (int)100));
			HX_STACK_LINE(46)
			this->timer = (int)0;
		}
	}
return null();
}



Stars_obj::Stars_obj()
{
}

void Stars_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stars);
	HX_MARK_MEMBER_NAME(timerMax,"timerMax");
	HX_MARK_MEMBER_NAME(timer,"timer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stars_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timerMax,"timerMax");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stars_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timerMax") ) { return timerMax; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stars_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timerMax") ) { timerMax=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stars_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timerMax"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("timerMax"),
	HX_CSTRING("timer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stars_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stars_obj::__mClass,"__mClass");
};

Class Stars_obj::__mClass;

void Stars_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Stars"), hx::TCanCast< Stars_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stars_obj::__boot()
{
}

