#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void LinearPath_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("LinearPath::new","flixel/tweens/motion/LinearPath.hx",18);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(19)
	super::__construct((int)0,complete,type,null());
	HX_STACK_LINE(20)
	this->_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	this->_pointD = Array_obj< Float >::__new();
	HX_STACK_LINE(22)
	this->_pointT = Array_obj< Float >::__new();
	HX_STACK_LINE(24)
	this->distance = this->_speed = this->_index = (int)0;
	HX_STACK_LINE(26)
	this->_pointD[(int)0] = this->_pointT[(int)0] = (int)0;
}
;
	return null();
}

LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float LinearPath_obj::get_pointCount( ){
	HX_STACK_PUSH("LinearPath::get_pointCount","flixel/tweens/motion/LinearPath.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_LINE(189)
	return this->_points->length;
}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,get_pointCount,return )

Void LinearPath_obj::updatePath( ){
{
		HX_STACK_PUSH("LinearPath::updatePath","flixel/tweens/motion/LinearPath.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(170)
		if (((this->_points->length < (int)2))){
			HX_STACK_LINE(170)
			hx::Throw (HX_CSTRING("A LinearPath must have at least 2 points to operate."));
		}
		HX_STACK_LINE(171)
		if (((this->_pointD->length == this->_pointT->length))){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(173)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(174)
		while(((i < this->_points->length))){
			HX_STACK_LINE(175)
			this->_pointT[i] = (Float(this->_pointD->__get((i)++)) / Float(this->distance));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,updatePath,(void))

Void LinearPath_obj::update( ){
{
		HX_STACK_PUSH("LinearPath::update","flixel/tweens/motion/LinearPath.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		this->super::update();
		HX_STACK_LINE(116)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(117)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(119)
		if (((bool(!(this->_backward)) && bool((this->_points != null()))))){
			HX_STACK_LINE(121)
			if (((this->_index < (this->_points->length - (int)1)))){
				HX_STACK_LINE(122)
				while(((this->_t > this->_pointT->__get((this->_index + (int)1))))){
					HX_STACK_LINE(125)
					(this->_index)++;
					HX_STACK_LINE(126)
					if (((this->_index == (this->_points->length - (int)1)))){
						HX_STACK_LINE(128)
						hx::SubEq(this->_index,(int)1);
						HX_STACK_LINE(129)
						break;
					}
				}
			}
			HX_STACK_LINE(133)
			td = this->_pointT->__get(this->_index);
			HX_STACK_LINE(134)
			tt = (this->_pointT->__get((this->_index + (int)1)) - td);
			HX_STACK_LINE(135)
			td = (Float(((this->_t - td))) / Float(tt));
			HX_STACK_LINE(136)
			this->_prevPoint = this->_points->__get(this->_index).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(137)
			this->_nextPoint = this->_points->__get((this->_index + (int)1)).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(138)
			this->x = (this->_prevPoint->x + (((this->_nextPoint->x - this->_prevPoint->x)) * td));
			HX_STACK_LINE(139)
			this->y = (this->_prevPoint->y + (((this->_nextPoint->y - this->_prevPoint->y)) * td));
		}
		else{
			HX_STACK_LINE(141)
			if (((this->_points != null()))){
				HX_STACK_LINE(143)
				if (((this->_index > (int)0))){
					HX_STACK_LINE(144)
					while(((this->_t < this->_pointT->__get((this->_index - (int)1))))){
						HX_STACK_LINE(147)
						hx::SubEq(this->_index,(int)1);
						HX_STACK_LINE(148)
						if (((this->_index == (int)0))){
							HX_STACK_LINE(150)
							hx::AddEq(this->_index,(int)1);
							HX_STACK_LINE(151)
							break;
						}
					}
				}
				HX_STACK_LINE(155)
				td = this->_pointT->__get(this->_index);
				HX_STACK_LINE(156)
				tt = (this->_pointT->__get((this->_index - (int)1)) - td);
				HX_STACK_LINE(157)
				td = (Float(((this->_t - td))) / Float(tt));
				HX_STACK_LINE(158)
				this->_prevPoint = this->_points->__get(this->_index).StaticCast< ::flixel::util::FlxPoint >();
				HX_STACK_LINE(159)
				this->_nextPoint = this->_points->__get((this->_index - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
				HX_STACK_LINE(160)
				this->x = (this->_prevPoint->x + (((this->_nextPoint->x - this->_prevPoint->x)) * td));
				HX_STACK_LINE(161)
				this->y = (this->_prevPoint->y + (((this->_nextPoint->y - this->_prevPoint->y)) * td));
			}
		}
		HX_STACK_LINE(164)
		this->super::postUpdate();
	}
return null();
}


Dynamic LinearPath_obj::start( ){
	HX_STACK_PUSH("LinearPath::start","flixel/tweens/motion/LinearPath.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	if ((!(this->_backward))){
		HX_STACK_LINE(100)
		this->_index = (int)0;
	}
	else{
		HX_STACK_LINE(104)
		this->_index = (this->_points->length - (int)1);
	}
	HX_STACK_LINE(108)
	this->super::start();
	HX_STACK_LINE(109)
	return hx::ObjectPtr<OBJ_>(this);
}


::flixel::util::FlxPoint LinearPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("LinearPath::getPoint","flixel/tweens/motion/LinearPath.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(89)
		if (((this->_points->length == (int)0))){
			HX_STACK_LINE(90)
			hx::Throw (HX_CSTRING("No points have been added to the path yet."));
		}
		HX_STACK_LINE(93)
		return this->_points->__get(hx::Mod(index,this->_points->length)).StaticCast< ::flixel::util::FlxPoint >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(LinearPath_obj,getPoint,return )

::flixel::tweens::motion::LinearPath LinearPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("LinearPath::addPoint","flixel/tweens/motion/LinearPath.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(73)
		if (((this->_last != null()))){
			HX_STACK_LINE(75)
			hx::AddEq(this->distance,::Math_obj::sqrt(((((x - this->_last->x)) * ((x - this->_last->x))) + (((y - this->_last->y)) * ((y - this->_last->y))))));
			HX_STACK_LINE(76)
			this->_pointD[this->_points->length] = this->distance;
		}
		HX_STACK_LINE(78)
		this->_points[this->_points->length] = this->_last = ::flixel::util::FlxPoint_obj::__new(x,y);
		HX_STACK_LINE(79)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,addPoint,return )

::flixel::tweens::motion::LinearPath LinearPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Ease){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("LinearPath::setMotion","flixel/tweens/motion/LinearPath.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Ease,"Ease");
{
		HX_STACK_LINE(48)
		this->updatePath();
		HX_STACK_LINE(50)
		if ((UseDuration)){
			HX_STACK_LINE(52)
			this->_target = DurationOrSpeed;
			HX_STACK_LINE(53)
			this->_speed = (Float(this->distance) / Float(DurationOrSpeed));
		}
		else{
			HX_STACK_LINE(57)
			this->_target = (Float(this->distance) / Float(DurationOrSpeed));
			HX_STACK_LINE(58)
			this->_speed = DurationOrSpeed;
		}
		HX_STACK_LINE(61)
		this->_ease = Ease;
		HX_STACK_LINE(62)
		this->start();
		HX_STACK_LINE(63)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(LinearPath_obj,setMotion,return )

Void LinearPath_obj::destroy( ){
{
		HX_STACK_PUSH("LinearPath::destroy","flixel/tweens/motion/LinearPath.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::destroy();
		HX_STACK_LINE(32)
		this->_points = null();
		HX_STACK_LINE(33)
		this->_pointD = null();
		HX_STACK_LINE(34)
		this->_pointT = null();
		HX_STACK_LINE(35)
		this->_last = null();
		HX_STACK_LINE(36)
		this->_prevPoint = null();
		HX_STACK_LINE(37)
		this->_nextPoint = null();
	}
return null();
}



LinearPath_obj::LinearPath_obj()
{
}

void LinearPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearPath);
	HX_MARK_MEMBER_NAME(_nextPoint,"_nextPoint");
	HX_MARK_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_pointT,"_pointT");
	HX_MARK_MEMBER_NAME(_pointD,"_pointD");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(distance,"distance");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nextPoint,"_nextPoint");
	HX_VISIT_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_pointT,"_pointT");
	HX_VISIT_MEMBER_NAME(_pointD,"_pointD");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LinearPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointT") ) { return _pointT; }
		if (HX_FIELD_EQ(inName,"_pointD") ) { return _pointD; }
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { return _nextPoint; }
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { return _prevPoint; }
		if (HX_FIELD_EQ(inName,"pointCount") ) { return get_pointCount(); }
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_pointCount") ) { return get_pointCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointT") ) { _pointT=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointD") ) { _pointD=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { _nextPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { _prevPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_nextPoint"));
	outFields->push(HX_CSTRING("_prevPoint"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_speed"));
	outFields->push(HX_CSTRING("_pointT"));
	outFields->push(HX_CSTRING("_pointD"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("pointCount"));
	outFields->push(HX_CSTRING("distance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_nextPoint"),
	HX_CSTRING("_prevPoint"),
	HX_CSTRING("_last"),
	HX_CSTRING("_index"),
	HX_CSTRING("_speed"),
	HX_CSTRING("_pointT"),
	HX_CSTRING("_pointD"),
	HX_CSTRING("_points"),
	HX_CSTRING("get_pointCount"),
	HX_CSTRING("distance"),
	HX_CSTRING("updatePath"),
	HX_CSTRING("update"),
	HX_CSTRING("start"),
	HX_CSTRING("getPoint"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.LinearPath"), hx::TCanCast< LinearPath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LinearPath_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
