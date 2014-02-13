#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

HX_DEFINE_DYNAMIC_FUNC0(IFlxParticle_obj,onEmit,)


static ::String sMemberFields[] = {
	HX_CSTRING("onEmit"),
	HX_CSTRING("rangeBlue"),
	HX_CSTRING("rangeGreen"),
	HX_CSTRING("rangeRed"),
	HX_CSTRING("startBlue"),
	HX_CSTRING("startGreen"),
	HX_CSTRING("startRed"),
	HX_CSTRING("rangeScale"),
	HX_CSTRING("startScale"),
	HX_CSTRING("rangeAlpha"),
	HX_CSTRING("startAlpha"),
	HX_CSTRING("maxLifespan"),
	HX_CSTRING("useColoring"),
	HX_CSTRING("useScaling"),
	HX_CSTRING("useFading"),
	HX_CSTRING("friction"),
	HX_CSTRING("lifespan"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.IFlxParticle"), hx::TCanCast< IFlxParticle_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IFlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
