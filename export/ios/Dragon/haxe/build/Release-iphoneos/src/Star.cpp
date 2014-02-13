#include <hxcpp.h>

#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

Void Star_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Star::new","Star.hx",7);
{
	HX_STACK_LINE(13)
	this->speed = (int)0;
	HX_STACK_LINE(17)
	super::__construct(X,Y);
	HX_STACK_LINE(19)
	this->loadGraphic(HX_CSTRING("assets/star.png"),false,false,(int)1,(int)1,null(),null());
	HX_STACK_LINE(21)
	this->set_moves(true);
	HX_STACK_LINE(22)
	this->stickToScreen = true;
	HX_STACK_LINE(24)
	this->speedArray = Array_obj< Float >::__new().Add((int)-200).Add((int)-125).Add((int)-50);
	HX_STACK_LINE(25)
	this->alphaArray = Array_obj< Float >::__new().Add((int)1).Add(0.7).Add(0.33).Add(0.5).Add(0.2);
	HX_STACK_LINE(26)
	this->scaleArray = Array_obj< Float >::__new().Add((int)1).Add((int)2);
	HX_STACK_LINE(28)
	int type = ::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((this->speedArray->length - (int)1)))));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(29)
	this->speed = this->speedArray->__get(type);
	HX_STACK_LINE(30)
	this->set_alpha(this->alphaArray->__get(type));
	HX_STACK_LINE(32)
	type = ::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((this->scaleArray->length - (int)1)))));
	HX_STACK_LINE(33)
	this->scale->set_x(this->scaleArray->__get(type));
	HX_STACK_LINE(34)
	this->scale->set_y(this->scale->x);
}
;
	return null();
}

Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Star_obj::update( ){
{
		HX_STACK_PUSH("Star::update","Star.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		this->super::update();
		HX_STACK_LINE(42)
		this->velocity->set_x(this->speed);
	}
return null();
}



Star_obj::Star_obj()
{
}

void Star_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Star);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(scaleArray,"scaleArray");
	HX_MARK_MEMBER_NAME(alphaArray,"alphaArray");
	HX_MARK_MEMBER_NAME(speedArray,"speedArray");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Star_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(scaleArray,"scaleArray");
	HX_VISIT_MEMBER_NAME(alphaArray,"alphaArray");
	HX_VISIT_MEMBER_NAME(speedArray,"speedArray");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Star_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleArray") ) { return scaleArray; }
		if (HX_FIELD_EQ(inName,"alphaArray") ) { return alphaArray; }
		if (HX_FIELD_EQ(inName,"speedArray") ) { return speedArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleArray") ) { scaleArray=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaArray") ) { alphaArray=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedArray") ) { speedArray=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("scaleArray"));
	outFields->push(HX_CSTRING("alphaArray"));
	outFields->push(HX_CSTRING("speedArray"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("speed"),
	HX_CSTRING("scaleArray"),
	HX_CSTRING("alphaArray"),
	HX_CSTRING("speedArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Star"), hx::TCanCast< Star_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Star_obj::__boot()
{
}

