#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_PUSH("FlxEmitter::new","flixel/effects/particles/FlxEmitter.hx",24);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(24)
	super::__construct(X,Y,Size);
}
;
	return null();
}

FlxEmitter_obj::~FlxEmitter_obj() { }

Dynamic FlxEmitter_obj::__CreateEmpty() { return  new FlxEmitter_obj; }
hx::ObjectPtr< FlxEmitter_obj > FlxEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxEmitter_obj > result = new FlxEmitter_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEmitter_obj > result = new FlxEmitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxEmitter_obj::FlxEmitter_obj()
{
}

void FlxEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxEmitter);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitter_obj::__mClass,"__mClass");
};

Class FlxEmitter_obj::__mClass;

void FlxEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxEmitter"), hx::TCanCast< FlxEmitter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxEmitter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
