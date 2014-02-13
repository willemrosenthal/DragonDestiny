#include <hxcpp.h>

#ifndef INCLUDED_WeatherParticle
#include <WeatherParticle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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

Void WeatherParticle_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("WeatherParticle::new","WeatherParticle.hx",7);
{
	HX_STACK_LINE(10)
	this->stickToScreen = false;
	HX_STACK_LINE(13)
	super::__construct(X,Y,null());
}
;
	return null();
}

WeatherParticle_obj::~WeatherParticle_obj() { }

Dynamic WeatherParticle_obj::__CreateEmpty() { return  new WeatherParticle_obj; }
hx::ObjectPtr< WeatherParticle_obj > WeatherParticle_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< WeatherParticle_obj > result = new WeatherParticle_obj();
	result->__construct(X,Y);
	return result;}

Dynamic WeatherParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeatherParticle_obj > result = new WeatherParticle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void WeatherParticle_obj::update( ){
{
		HX_STACK_PUSH("WeatherParticle::update","WeatherParticle.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		this->super::update();
		HX_STACK_LINE(22)
		if ((this->stickToScreen)){
			HX_STACK_LINE(23)
			if (((this->x < (int)-10))){
				HX_STACK_LINE(24)
				this->set_x((::flixel::FlxG_obj::width + (int)10));
			}
			HX_STACK_LINE(25)
			if (((this->x > (::flixel::FlxG_obj::width + (int)10)))){
				HX_STACK_LINE(26)
				this->set_x((int)-10);
			}
			HX_STACK_LINE(27)
			if (((this->y > (::flixel::FlxG_obj::height + (int)10)))){
				HX_STACK_LINE(28)
				this->set_y((int)-10);
			}
			HX_STACK_LINE(29)
			if (((this->y < (int)-10))){
				HX_STACK_LINE(30)
				this->set_y((::flixel::FlxG_obj::height + (int)10));
			}
		}
		HX_STACK_LINE(33)
		if ((!(this->stickToScreen))){
			HX_STACK_LINE(34)
			if (((this->x < (int)-10))){
				HX_STACK_LINE(35)
				this->set_x((::flixel::FlxG_obj::width + (int)10));
			}
			HX_STACK_LINE(36)
			if (((this->y < (int)-10))){
				HX_STACK_LINE(37)
				this->set_y((::flixel::FlxG_obj::height + (int)10));
			}
			HX_STACK_LINE(38)
			if (((this->y > (::flixel::FlxG_obj::height + (int)10)))){
				HX_STACK_LINE(39)
				this->set_y((int)-10);
			}
		}
	}
return null();
}



WeatherParticle_obj::WeatherParticle_obj()
{
}

void WeatherParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeatherParticle);
	HX_MARK_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeatherParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WeatherParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stickToScreen") ) { return stickToScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeatherParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"stickToScreen") ) { stickToScreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeatherParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stickToScreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("stickToScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeatherParticle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeatherParticle_obj::__mClass,"__mClass");
};

Class WeatherParticle_obj::__mClass;

void WeatherParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("WeatherParticle"), hx::TCanCast< WeatherParticle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WeatherParticle_obj::__boot()
{
}

