#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxParticle_obj::__construct()
{
HX_STACK_PUSH("FlxParticle::new","flixel/effects/particles/FlxParticle.hx",15);
{
	HX_STACK_LINE(44)
	this->useColoring = false;
	HX_STACK_LINE(39)
	this->useScaling = false;
	HX_STACK_LINE(33)
	this->useFading = false;
	HX_STACK_LINE(28)
	this->friction = (int)500;
	HX_STACK_LINE(22)
	this->lifespan = (int)0;
	HX_STACK_LINE(96)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(98)
	this->set_exists(false);
}
;
	return null();
}

FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

hx::Object *FlxParticle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::effects::particles::IFlxParticle_obj)) return operator ::flixel::effects::particles::IFlxParticle_obj *();
	return super::__ToInterface(inType);
}

Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_PUSH("FlxParticle::onEmit","flixel/effects/particles/FlxParticle.hx",197);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))

Void FlxParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_PUSH("FlxParticle::reset","flixel/effects/particles/FlxParticle.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(186)
		this->super::reset(X,Y);
		HX_STACK_LINE(188)
		this->set_alpha(1.0);
		HX_STACK_LINE(189)
		this->scale->set_x(this->scale->set_y(1.0));
		HX_STACK_LINE(190)
		this->set_color((int)16777215);
	}
return null();
}


Void FlxParticle_obj::update( ){
{
		HX_STACK_PUSH("FlxParticle::update","flixel/effects/particles/FlxParticle.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		if (((this->lifespan > (int)0))){
			HX_STACK_LINE(110)
			hx::SubEq(this->lifespan,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(111)
			if (((this->lifespan <= (int)0))){
				HX_STACK_LINE(112)
				this->kill();
			}
			HX_STACK_LINE(116)
			Float lifespanRatio = ((int)1 - (Float(this->lifespan) / Float(this->maxLifespan)));		HX_STACK_VAR(lifespanRatio,"lifespanRatio");
			HX_STACK_LINE(119)
			if ((this->useFading)){
				HX_STACK_LINE(120)
				this->set_alpha((this->startAlpha + (lifespanRatio * this->rangeAlpha)));
			}
			HX_STACK_LINE(125)
			if ((this->useScaling)){
				HX_STACK_LINE(126)
				this->scale->set_x(this->scale->set_y((this->startScale + (lifespanRatio * this->rangeScale))));
			}
			HX_STACK_LINE(131)
			if ((this->useColoring)){
				HX_STACK_LINE(133)
				Float redComp = (this->startRed + (lifespanRatio * this->rangeRed));		HX_STACK_VAR(redComp,"redComp");
				HX_STACK_LINE(134)
				Float greenComp = (this->startGreen + (lifespanRatio * this->rangeGreen));		HX_STACK_VAR(greenComp,"greenComp");
				HX_STACK_LINE(135)
				Float blueComp = (this->startBlue + (lifespanRatio * this->rangeBlue));		HX_STACK_VAR(blueComp,"blueComp");
				HX_STACK_LINE(137)
				this->set_color((int((int((int(::Std_obj::_int(((int)255 * redComp))) << int((int)16))) | int((int(::Std_obj::_int(((int)255 * greenComp))) << int((int)8))))) | int(::Std_obj::_int(((int)255 * blueComp)))));
			}
			HX_STACK_LINE(141)
			if (((this->touching != (int)0))){
				HX_STACK_LINE(142)
				if (((this->angularVelocity != (int)0))){
					HX_STACK_LINE(144)
					this->angularVelocity = -(this->angularVelocity);
				}
			}
			HX_STACK_LINE(149)
			if (((this->acceleration->y > (int)0))){
				HX_STACK_LINE(150)
				if (((((int(this->touching) & int((int)4096))) != (int)0))){
					HX_STACK_LINE(153)
					this->drag->set_x(this->friction);
					HX_STACK_LINE(155)
					if (((((int(this->wasTouching) & int((int)4096))) == (int)0))){
						HX_STACK_LINE(156)
						if (((this->velocity->y < (-(this->elasticity) * (int)10)))){
							HX_STACK_LINE(158)
							if (((this->angularVelocity != (int)0))){
								HX_STACK_LINE(160)
								hx::MultEq(this->angularVelocity,-(this->elasticity));
							}
						}
						else{
							HX_STACK_LINE(166)
							this->velocity->set_y((int)0);
							HX_STACK_LINE(167)
							this->angularVelocity = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(172)
					this->drag->set_x((int)0);
				}
			}
		}
		HX_STACK_LINE(178)
		if (((bool(this->exists) && bool(this->alive)))){
			HX_STACK_LINE(179)
			this->super::update();
		}
	}
return null();
}



FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(rangeBlue,"rangeBlue");
	HX_MARK_MEMBER_NAME(rangeGreen,"rangeGreen");
	HX_MARK_MEMBER_NAME(rangeRed,"rangeRed");
	HX_MARK_MEMBER_NAME(startBlue,"startBlue");
	HX_MARK_MEMBER_NAME(startGreen,"startGreen");
	HX_MARK_MEMBER_NAME(startRed,"startRed");
	HX_MARK_MEMBER_NAME(rangeScale,"rangeScale");
	HX_MARK_MEMBER_NAME(startScale,"startScale");
	HX_MARK_MEMBER_NAME(rangeAlpha,"rangeAlpha");
	HX_MARK_MEMBER_NAME(startAlpha,"startAlpha");
	HX_MARK_MEMBER_NAME(maxLifespan,"maxLifespan");
	HX_MARK_MEMBER_NAME(useColoring,"useColoring");
	HX_MARK_MEMBER_NAME(useScaling,"useScaling");
	HX_MARK_MEMBER_NAME(useFading,"useFading");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rangeBlue,"rangeBlue");
	HX_VISIT_MEMBER_NAME(rangeGreen,"rangeGreen");
	HX_VISIT_MEMBER_NAME(rangeRed,"rangeRed");
	HX_VISIT_MEMBER_NAME(startBlue,"startBlue");
	HX_VISIT_MEMBER_NAME(startGreen,"startGreen");
	HX_VISIT_MEMBER_NAME(startRed,"startRed");
	HX_VISIT_MEMBER_NAME(rangeScale,"rangeScale");
	HX_VISIT_MEMBER_NAME(startScale,"startScale");
	HX_VISIT_MEMBER_NAME(rangeAlpha,"rangeAlpha");
	HX_VISIT_MEMBER_NAME(startAlpha,"startAlpha");
	HX_VISIT_MEMBER_NAME(maxLifespan,"maxLifespan");
	HX_VISIT_MEMBER_NAME(useColoring,"useColoring");
	HX_VISIT_MEMBER_NAME(useScaling,"useScaling");
	HX_VISIT_MEMBER_NAME(useFading,"useFading");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rangeRed") ) { return rangeRed; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { return rangeBlue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"useFading") ) { return useFading; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { return rangeGreen; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { return rangeScale; }
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { return rangeAlpha; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"useScaling") ) { return useScaling; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { return maxLifespan; }
		if (HX_FIELD_EQ(inName,"useColoring") ) { return useColoring; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rangeRed") ) { rangeRed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { rangeBlue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useFading") ) { useFading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { rangeGreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { rangeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { rangeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useScaling") ) { useScaling=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { maxLifespan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useColoring") ) { useColoring=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rangeBlue"));
	outFields->push(HX_CSTRING("rangeGreen"));
	outFields->push(HX_CSTRING("rangeRed"));
	outFields->push(HX_CSTRING("startBlue"));
	outFields->push(HX_CSTRING("startGreen"));
	outFields->push(HX_CSTRING("startRed"));
	outFields->push(HX_CSTRING("rangeScale"));
	outFields->push(HX_CSTRING("startScale"));
	outFields->push(HX_CSTRING("rangeAlpha"));
	outFields->push(HX_CSTRING("startAlpha"));
	outFields->push(HX_CSTRING("maxLifespan"));
	outFields->push(HX_CSTRING("useColoring"));
	outFields->push(HX_CSTRING("useScaling"));
	outFields->push(HX_CSTRING("useFading"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("lifespan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onEmit"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
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
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxParticle"), hx::TCanCast< FlxParticle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
