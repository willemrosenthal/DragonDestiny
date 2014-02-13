#include <hxcpp.h>

#ifndef INCLUDED_DragonBody
#include <DragonBody.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void DragonBody_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("DragonBody::new","DragonBody.hx",9);
{
	HX_STACK_LINE(15)
	this->broken = false;
	HX_STACK_LINE(13)
	this->bTimer = (int)0;
	HX_STACK_LINE(11)
	this->position = (int)0;
	HX_STACK_LINE(20)
	super::__construct(X,Y,null());
	HX_STACK_LINE(22)
	this->loadGraphic(HX_CSTRING("assets/dragon_body.png"),false,false,(int)15,(int)15,null(),null());
}
;
	return null();
}

DragonBody_obj::~DragonBody_obj() { }

Dynamic DragonBody_obj::__CreateEmpty() { return  new DragonBody_obj; }
hx::ObjectPtr< DragonBody_obj > DragonBody_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< DragonBody_obj > result = new DragonBody_obj();
	result->__construct(X,Y);
	return result;}

Dynamic DragonBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DragonBody_obj > result = new DragonBody_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void DragonBody_obj::breakBody( ){
{
		HX_STACK_PUSH("DragonBody::breakBody","DragonBody.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->broken = true;
		HX_STACK_LINE(47)
		this->acceleration->set_y((int)300);
		HX_STACK_LINE(48)
		this->acceleration->set_x((int)50);
		HX_STACK_LINE(49)
		this->maxVelocity->set_y((int)500);
		HX_STACK_LINE(50)
		this->maxVelocity->set_x((int)200);
		HX_STACK_LINE(51)
		this->velocity->set_x(((::Math_obj::random() * (int)180) + (::Math_obj::random() * (int)-50)));
		HX_STACK_LINE(52)
		this->velocity->set_y(((::Math_obj::random() * (int)-220) + (::Math_obj::random() * (int)50)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DragonBody_obj,breakBody,(void))

Void DragonBody_obj::update( ){
{
		HX_STACK_PUSH("DragonBody::update","DragonBody.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_LINE(29)
		this->super::update();
		HX_STACK_LINE(31)
		if ((this->broken)){
			HX_STACK_LINE(32)
			return null();
		}
		HX_STACK_LINE(34)
		this->set_y(::Global_obj::posY->__get(this->position));
	}
return null();
}



DragonBody_obj::DragonBody_obj()
{
}

void DragonBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DragonBody);
	HX_MARK_MEMBER_NAME(broken,"broken");
	HX_MARK_MEMBER_NAME(bTimer,"bTimer");
	HX_MARK_MEMBER_NAME(position,"position");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DragonBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broken,"broken");
	HX_VISIT_MEMBER_NAME(bTimer,"bTimer");
	HX_VISIT_MEMBER_NAME(position,"position");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DragonBody_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken; }
		if (HX_FIELD_EQ(inName,"bTimer") ) { return bTimer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"breakBody") ) { return breakBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DragonBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"broken") ) { broken=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bTimer") ) { bTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DragonBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("broken"));
	outFields->push(HX_CSTRING("bTimer"));
	outFields->push(HX_CSTRING("position"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("breakBody"),
	HX_CSTRING("update"),
	HX_CSTRING("broken"),
	HX_CSTRING("bTimer"),
	HX_CSTRING("position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DragonBody_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DragonBody_obj::__mClass,"__mClass");
};

Class DragonBody_obj::__mClass;

void DragonBody_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DragonBody"), hx::TCanCast< DragonBody_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DragonBody_obj::__boot()
{
}

