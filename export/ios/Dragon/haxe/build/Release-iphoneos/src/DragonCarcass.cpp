#include <hxcpp.h>

#ifndef INCLUDED_DragonCarcass
#include <DragonCarcass.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
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

Void DragonCarcass_obj::__construct(Float X,Float Y,hx::Null< bool >  __o_Head,hx::Null< Float >  __o_Angle,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
HX_STACK_PUSH("DragonCarcass::new","DragonCarcass.hx",16);
bool Head = __o_Head.Default(false);
Float Angle = __o_Angle.Default(0);
Float ScaleX = __o_ScaleX.Default(1);
Float ScaleY = __o_ScaleY.Default(1);
{
	HX_STACK_LINE(17)
	super::__construct(X,Y,null());
	HX_STACK_LINE(19)
	this->mSpeed = ::Global_obj::dragSpeed;
	HX_STACK_LINE(20)
	this->fSpeed = ::Global_obj::fadeSpeed;
	HX_STACK_LINE(22)
	this->set_alpha(0.5);
	HX_STACK_LINE(23)
	this->scale->set_x(ScaleX);
	HX_STACK_LINE(24)
	this->scale->set_y(ScaleY);
	HX_STACK_LINE(26)
	this->set_angle(Angle);
	HX_STACK_LINE(28)
	if ((Head)){
		HX_STACK_LINE(29)
		this->loadGraphic(HX_CSTRING("assets/dragon_head.png"),false,false,(int)34,(int)18,null(),null());
	}
	else{
		HX_STACK_LINE(30)
		this->loadGraphic(HX_CSTRING("assets/dragon_body.png"),false,false,(int)15,(int)15,null(),null());
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		_g->set_y((_g->y + (this->get_height() * 0.5)));
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
}
;
	return null();
}

DragonCarcass_obj::~DragonCarcass_obj() { }

Dynamic DragonCarcass_obj::__CreateEmpty() { return  new DragonCarcass_obj; }
hx::ObjectPtr< DragonCarcass_obj > DragonCarcass_obj::__new(Float X,Float Y,hx::Null< bool >  __o_Head,hx::Null< Float >  __o_Angle,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{  hx::ObjectPtr< DragonCarcass_obj > result = new DragonCarcass_obj();
	result->__construct(X,Y,__o_Head,__o_Angle,__o_ScaleX,__o_ScaleY);
	return result;}

Dynamic DragonCarcass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DragonCarcass_obj > result = new DragonCarcass_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void DragonCarcass_obj::update( ){
{
		HX_STACK_PUSH("DragonCarcass::update","DragonCarcass.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		this->super::update();
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::DragonCarcass _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			_g->set_x((_g->x - this->mSpeed));
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::DragonCarcass _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			_g->set_alpha((_g->alpha - this->fSpeed));
		}
		HX_STACK_LINE(42)
		if (((this->alpha < 0.2))){
			HX_STACK_LINE(43)
			this->destroy();
		}
	}
return null();
}



DragonCarcass_obj::DragonCarcass_obj()
{
}

void DragonCarcass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DragonCarcass);
	HX_MARK_MEMBER_NAME(fSpeed,"fSpeed");
	HX_MARK_MEMBER_NAME(mSpeed,"mSpeed");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DragonCarcass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fSpeed,"fSpeed");
	HX_VISIT_MEMBER_NAME(mSpeed,"mSpeed");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DragonCarcass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"fSpeed") ) { return fSpeed; }
		if (HX_FIELD_EQ(inName,"mSpeed") ) { return mSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DragonCarcass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fSpeed") ) { fSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSpeed") ) { mSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DragonCarcass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fSpeed"));
	outFields->push(HX_CSTRING("mSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("fSpeed"),
	HX_CSTRING("mSpeed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DragonCarcass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DragonCarcass_obj::__mClass,"__mClass");
};

Class DragonCarcass_obj::__mClass;

void DragonCarcass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DragonCarcass"), hx::TCanCast< DragonCarcass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DragonCarcass_obj::__boot()
{
}

