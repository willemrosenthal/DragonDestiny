#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CircularMotion_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("CircularMotion::new","flixel/tweens/motion/CircularMotion.hx",17);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(18)
	this->_centerX = this->_centerY = (int)0;
	HX_STACK_LINE(19)
	this->_radius = this->angle = (int)0;
	HX_STACK_LINE(20)
	this->_angleStart = this->_angleFinish = (int)0;
	HX_STACK_LINE(21)
	super::__construct((int)0,complete,type,null());
}
;
	return null();
}

CircularMotion_obj::~CircularMotion_obj() { }

Dynamic CircularMotion_obj::__CreateEmpty() { return  new CircularMotion_obj; }
hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic CircularMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float CircularMotion_obj::get_circumference( ){
	HX_STACK_PUSH("CircularMotion::get_circumference","flixel/tweens/motion/CircularMotion.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return (this->_radius * ::flixel::tweens::motion::CircularMotion_obj::_CIRC);
}


HX_DEFINE_DYNAMIC_FUNC0(CircularMotion_obj,get_circumference,return )

Void CircularMotion_obj::update( ){
{
		HX_STACK_PUSH("CircularMotion::update","flixel/tweens/motion/CircularMotion.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		this->super::update();
		HX_STACK_LINE(61)
		this->angle = (this->_angleStart + (this->_angleFinish * this->_t));
		HX_STACK_LINE(62)
		this->x = (this->_centerX + (::Math_obj::cos(this->angle) * this->_radius));
		HX_STACK_LINE(63)
		this->y = (this->_centerY + (::Math_obj::sin(this->angle) * this->_radius));
		HX_STACK_LINE(64)
		if ((this->finished)){
			HX_STACK_LINE(65)
			this->postUpdate();
		}
	}
return null();
}


::flixel::tweens::motion::CircularMotion CircularMotion_obj::setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Ease){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("CircularMotion::setMotion","flixel/tweens/motion/CircularMotion.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(CenterX,"CenterX");
	HX_STACK_ARG(CenterY,"CenterY");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(Clockwise,"Clockwise");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Ease,"Ease");
{
		HX_STACK_LINE(37)
		this->_centerX = CenterX;
		HX_STACK_LINE(38)
		this->_centerY = CenterY;
		HX_STACK_LINE(39)
		this->_radius = Radius;
		HX_STACK_LINE(40)
		this->angle = this->_angleStart = (Float((Angle * ::Math_obj::PI)) / Float((int)-180));
		HX_STACK_LINE(41)
		this->_angleFinish = (::flixel::tweens::motion::CircularMotion_obj::_CIRC * ((  ((Clockwise)) ? int((int)1) : int((int)-1) )));
		HX_STACK_LINE(43)
		if ((UseDuration)){
			HX_STACK_LINE(44)
			this->_target = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(48)
			this->_target = (Float((this->_radius * ::flixel::tweens::motion::CircularMotion_obj::_CIRC)) / Float(DurationOrSpeed));
		}
		HX_STACK_LINE(52)
		this->_ease = Ease;
		HX_STACK_LINE(53)
		this->start();
		HX_STACK_LINE(54)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(CircularMotion_obj,setMotion,return )

Float CircularMotion_obj::_CIRC;


CircularMotion_obj::CircularMotion_obj()
{
}

void CircularMotion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircularMotion);
	HX_MARK_MEMBER_NAME(_angleFinish,"_angleFinish");
	HX_MARK_MEMBER_NAME(_angleStart,"_angleStart");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_centerY,"_centerY");
	HX_MARK_MEMBER_NAME(_centerX,"_centerX");
	HX_MARK_MEMBER_NAME(angle,"angle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircularMotion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_angleFinish,"_angleFinish");
	HX_VISIT_MEMBER_NAME(_angleStart,"_angleStart");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_centerY,"_centerY");
	HX_VISIT_MEMBER_NAME(_centerX,"_centerX");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircularMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_CIRC") ) { return _CIRC; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { return _angleStart; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { return _angleFinish; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"circumference") ) { return get_circumference(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_circumference") ) { return get_circumference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircularMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_CIRC") ) { _CIRC=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { _angleStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { _angleFinish=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircularMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_angleFinish"));
	outFields->push(HX_CSTRING("_angleStart"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_centerY"));
	outFields->push(HX_CSTRING("_centerX"));
	outFields->push(HX_CSTRING("circumference"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_CIRC"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_angleFinish"),
	HX_CSTRING("_angleStart"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_centerY"),
	HX_CSTRING("_centerX"),
	HX_CSTRING("get_circumference"),
	HX_CSTRING("angle"),
	HX_CSTRING("update"),
	HX_CSTRING("setMotion"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CircularMotion_obj::_CIRC,"_CIRC");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CircularMotion_obj::_CIRC,"_CIRC");
};

Class CircularMotion_obj::__mClass;

void CircularMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.CircularMotion"), hx::TCanCast< CircularMotion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircularMotion_obj::__boot()
{
	_CIRC= (::Math_obj::PI * (int)2);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
