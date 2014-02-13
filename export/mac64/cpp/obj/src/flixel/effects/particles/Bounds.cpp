#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void Bounds_obj::__construct(Dynamic min,Dynamic max)
{
HX_STACK_PUSH("Bounds::new","flixel/effects/particles/FlxTypedEmitter.hx",878);
{
	HX_STACK_LINE(879)
	this->min = min;
	HX_STACK_LINE(880)
	this->max = (  (((max == null()))) ? Dynamic(min) : Dynamic(max) );
}
;
	return null();
}

Bounds_obj::~Bounds_obj() { }

Dynamic Bounds_obj::__CreateEmpty() { return  new Bounds_obj; }
hx::ObjectPtr< Bounds_obj > Bounds_obj::__new(Dynamic min,Dynamic max)
{  hx::ObjectPtr< Bounds_obj > result = new Bounds_obj();
	result->__construct(min,max);
	return result;}

Dynamic Bounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bounds_obj > result = new Bounds_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Bounds_obj::Bounds_obj()
{
}

void Bounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bounds);
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_END_CLASS();
}

void Bounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(min,"min");
}

Dynamic Bounds_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("min"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

Class Bounds_obj::__mClass;

void Bounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.Bounds"), hx::TCanCast< Bounds_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bounds_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
