#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("ColorTween::new","flixel/tweens/misc/ColorTween.hx",34);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(35)
	this->alpha = (int)1;
	HX_STACK_LINE(36)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ColorTween_obj::update( ){
{
		HX_STACK_PUSH("ColorTween::update","flixel/tweens/misc/ColorTween.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_LINE(80)
		this->super::update();
		HX_STACK_LINE(81)
		this->alpha = (this->_startA + (this->_rangeA * this->_t));
		HX_STACK_LINE(82)
		this->red = ::Std_obj::_int((((this->_startR + (this->_rangeR * this->_t))) * (int)255));
		HX_STACK_LINE(83)
		this->green = ::Std_obj::_int((((this->_startG + (this->_rangeG * this->_t))) * (int)255));
		HX_STACK_LINE(84)
		this->blue = ::Std_obj::_int((((this->_startB + (this->_rangeB * this->_t))) * (int)255));
		HX_STACK_LINE(85)
		this->color = (int((int((int(this->red) << int((int)16))) | int((int(this->green) << int((int)8))))) | int(this->blue));
		HX_STACK_LINE(87)
		if (((this->sprite != null()))){
			HX_STACK_LINE(89)
			this->sprite->set_color(this->color);
			HX_STACK_LINE(90)
			this->sprite->set_alpha(this->alpha);
		}
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float duration,int fromColor,int toColor,hx::Null< Float >  __o_fromAlpha,hx::Null< Float >  __o_toAlpha,Dynamic ease,::flixel::FlxSprite sprite){
Float fromAlpha = __o_fromAlpha.Default(1);
Float toAlpha = __o_toAlpha.Default(1);
	HX_STACK_PUSH("ColorTween::tween","flixel/tweens/misc/ColorTween.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(fromColor,"fromColor");
	HX_STACK_ARG(toColor,"toColor");
	HX_STACK_ARG(fromAlpha,"fromAlpha");
	HX_STACK_ARG(toAlpha,"toAlpha");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_ARG(sprite,"sprite");
{
		HX_STACK_LINE(56)
		hx::AndEq(fromColor,(int)16777215);
		HX_STACK_LINE(57)
		hx::AndEq(toColor,(int)16777215);
		HX_STACK_LINE(58)
		this->color = fromColor;
		HX_STACK_LINE(59)
		this->red = (int((int(fromColor) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(60)
		this->green = (int((int(fromColor) >> int((int)8))) & int((int)255));
		HX_STACK_LINE(61)
		this->blue = (int(fromColor) & int((int)255));
		HX_STACK_LINE(62)
		this->_startR = (Float(this->red) / Float((int)255));
		HX_STACK_LINE(63)
		this->_startG = (Float(this->green) / Float((int)255));
		HX_STACK_LINE(64)
		this->_startB = (Float(this->blue) / Float((int)255));
		HX_STACK_LINE(65)
		this->_rangeR = ((Float(((int((int(toColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) - this->_startR);
		HX_STACK_LINE(66)
		this->_rangeG = ((Float(((int((int(toColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) - this->_startG);
		HX_STACK_LINE(67)
		this->_rangeB = ((Float(((int(toColor) & int((int)255)))) / Float((int)255)) - this->_startB);
		HX_STACK_LINE(68)
		this->_startA = this->alpha = fromAlpha;
		HX_STACK_LINE(69)
		this->_rangeA = (toAlpha - this->alpha);
		HX_STACK_LINE(70)
		this->_target = duration;
		HX_STACK_LINE(71)
		this->_ease = ease;
		HX_STACK_LINE(72)
		this->sprite = sprite;
		HX_STACK_LINE(73)
		this->start();
		HX_STACK_LINE(74)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ColorTween_obj,tween,return )

Void ColorTween_obj::destroy( ){
{
		HX_STACK_PUSH("ColorTween::destroy","flixel/tweens/misc/ColorTween.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->super::destroy();
		HX_STACK_LINE(42)
		this->sprite = null();
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(_rangeB,"_rangeB");
	HX_MARK_MEMBER_NAME(_rangeG,"_rangeG");
	HX_MARK_MEMBER_NAME(_rangeR,"_rangeR");
	HX_MARK_MEMBER_NAME(_rangeA,"_rangeA");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_startA,"_startA");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rangeB,"_rangeB");
	HX_VISIT_MEMBER_NAME(_rangeG,"_rangeG");
	HX_VISIT_MEMBER_NAME(_rangeR,"_rangeR");
	HX_VISIT_MEMBER_NAME(_rangeA,"_rangeA");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_startA,"_startA");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rangeB") ) { return _rangeB; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { return _rangeG; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { return _rangeR; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { return _rangeA; }
		if (HX_FIELD_EQ(inName,"_startB") ) { return _startB; }
		if (HX_FIELD_EQ(inName,"_startG") ) { return _startG; }
		if (HX_FIELD_EQ(inName,"_startR") ) { return _startR; }
		if (HX_FIELD_EQ(inName,"_startA") ) { return _startA; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rangeB") ) { _rangeB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { _rangeG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { _rangeR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { _rangeA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startA") ) { _startA=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rangeB"));
	outFields->push(HX_CSTRING("_rangeG"));
	outFields->push(HX_CSTRING("_rangeR"));
	outFields->push(HX_CSTRING("_rangeA"));
	outFields->push(HX_CSTRING("_startB"));
	outFields->push(HX_CSTRING("_startG"));
	outFields->push(HX_CSTRING("_startR"));
	outFields->push(HX_CSTRING("_startA"));
	outFields->push(HX_CSTRING("blue"));
	outFields->push(HX_CSTRING("green"));
	outFields->push(HX_CSTRING("red"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_rangeB"),
	HX_CSTRING("_rangeG"),
	HX_CSTRING("_rangeR"),
	HX_CSTRING("_rangeA"),
	HX_CSTRING("_startB"),
	HX_CSTRING("_startG"),
	HX_CSTRING("_startR"),
	HX_CSTRING("_startA"),
	HX_CSTRING("blue"),
	HX_CSTRING("green"),
	HX_CSTRING("red"),
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("destroy"),
	HX_CSTRING("sprite"),
	HX_CSTRING("alpha"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.ColorTween"), hx::TCanCast< ColorTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
