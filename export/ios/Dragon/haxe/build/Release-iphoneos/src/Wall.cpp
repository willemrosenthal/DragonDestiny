#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Wall
#include <Wall.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Wall_obj::__construct(Float X,Float Y,hx::Null< bool >  __o_Top)
{
HX_STACK_PUSH("Wall::new","Wall.hx",9);
bool Top = __o_Top.Default(true);
{
	HX_STACK_LINE(14)
	this->bTimer = (int)0;
	HX_STACK_LINE(12)
	this->top = false;
	HX_STACK_LINE(11)
	this->count = false;
	HX_STACK_LINE(19)
	super::__construct(X,Y,null());
	HX_STACK_LINE(21)
	this->top = Top;
	HX_STACK_LINE(23)
	this->loadGraphic(HX_CSTRING("assets/walls.png"),true,false,(int)32,(int)160,null(),null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("puff"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)1).Add((int)0),(int)12,null());
	HX_STACK_LINE(25)
	this->animation->play(HX_CSTRING("puff"),null(),null());
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::Wall _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		_g->set_height((_g->get_height() - (int)10));
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		_g->set_y((_g->y + (int)5));
	}
}
;
	return null();
}

Wall_obj::~Wall_obj() { }

Dynamic Wall_obj::__CreateEmpty() { return  new Wall_obj; }
hx::ObjectPtr< Wall_obj > Wall_obj::__new(Float X,Float Y,hx::Null< bool >  __o_Top)
{  hx::ObjectPtr< Wall_obj > result = new Wall_obj();
	result->__construct(X,Y,__o_Top);
	return result;}

Dynamic Wall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wall_obj > result = new Wall_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Wall_obj::update( ){
{
		HX_STACK_PUSH("Wall::update","Wall.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::update();
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::Wall _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			_g->set_x((_g->x - (::Global_obj::speed * ::flixel::FlxG_obj::elapsed)));
		}
		HX_STACK_LINE(33)
		if ((this->top)){
			HX_STACK_LINE(35)
			if (((bool((this->x < ::Global_obj::dragonHeadX)) && bool(!(this->count))))){
				HX_STACK_LINE(37)
				this->count = true;
				HX_STACK_LINE(38)
				(::Global_obj::total)++;
			}
			HX_STACK_LINE(40)
			if (((bool((this->x > ::Global_obj::dragonHeadX)) && bool(this->count)))){
				HX_STACK_LINE(41)
				this->count = false;
			}
		}
	}
return null();
}



Wall_obj::Wall_obj()
{
}

void Wall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Wall);
	HX_MARK_MEMBER_NAME(bTimer,"bTimer");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(count,"count");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Wall_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bTimer,"bTimer");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(count,"count");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Wall_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"bTimer") ) { return bTimer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Wall_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bTimer") ) { bTimer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Wall_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bTimer"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("bTimer"),
	HX_CSTRING("top"),
	HX_CSTRING("count"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

Class Wall_obj::__mClass;

void Wall_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Wall"), hx::TCanCast< Wall_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Wall_obj::__boot()
{
}

