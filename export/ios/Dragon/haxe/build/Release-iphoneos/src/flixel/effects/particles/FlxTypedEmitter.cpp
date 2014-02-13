#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_PUSH("FlxTypedEmitter::new","flixel/effects/particles/FlxTypedEmitter.hx",21);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(140)
	this->_waitForKill = false;
	HX_STACK_LINE(132)
	this->_counter = (int)0;
	HX_STACK_LINE(128)
	this->_timer = (int)0;
	HX_STACK_LINE(124)
	this->_explode = true;
	HX_STACK_LINE(120)
	this->_quantity = (int)0;
	HX_STACK_LINE(112)
	this->bounce = (int)0;
	HX_STACK_LINE(108)
	this->blend = null();
	HX_STACK_LINE(62)
	this->frequency = 0.1;
	HX_STACK_LINE(58)
	this->on = false;
	HX_STACK_LINE(152)
	super::__construct(Size);
	HX_STACK_LINE(154)
	this->xPosition = ::flixel::effects::particles::Bounds_obj::__new(X,(int)0);
	HX_STACK_LINE(155)
	this->yPosition = ::flixel::effects::particles::Bounds_obj::__new(Y,(int)0);
	HX_STACK_LINE(156)
	this->xVelocity = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);
	HX_STACK_LINE(157)
	this->yVelocity = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);
	HX_STACK_LINE(158)
	this->rotation = ::flixel::effects::particles::Bounds_obj::__new((int)-360,(int)360);
	HX_STACK_LINE(159)
	this->startScale = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);
	HX_STACK_LINE(160)
	this->endScale = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);
	HX_STACK_LINE(161)
	this->startAlpha = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(162)
	this->endAlpha = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(163)
	this->startRed = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(164)
	this->startGreen = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(165)
	this->startBlue = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(166)
	this->endRed = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(167)
	this->endGreen = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(168)
	this->endBlue = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);
	HX_STACK_LINE(170)
	this->acceleration = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	HX_STACK_LINE(171)
	this->_particleClass = hx::ClassOf< ::flixel::effects::particles::FlxParticle >();
	HX_STACK_LINE(172)
	this->particleDrag = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(174)
	this->life = ::flixel::effects::particles::Bounds_obj::__new((int)3,(int)3);
	HX_STACK_LINE(175)
	this->set_exists(false);
	HX_STACK_LINE(176)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
}
;
	return null();
}

FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float FlxTypedEmitter_obj::set_lifespan( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",860);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(861)
	Float dl = (this->life->max - this->life->min);		HX_STACK_VAR(dl,"dl");
	HX_STACK_LINE(862)
	this->life->min = Value;
	HX_STACK_LINE(863)
	this->life->max = (Value + dl);
	HX_STACK_LINE(865)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_lifespan,return )

Float FlxTypedEmitter_obj::get_lifespan( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",855);
	HX_STACK_THIS(this);
	HX_STACK_LINE(855)
	return this->life->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_lifespan,return )

Float FlxTypedEmitter_obj::set_maxRotation( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",844);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(844)
	return this->rotation->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_maxRotation,return )

Float FlxTypedEmitter_obj::get_maxRotation( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",839);
	HX_STACK_THIS(this);
	HX_STACK_LINE(839)
	return this->rotation->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_maxRotation,return )

Float FlxTypedEmitter_obj::set_minRotation( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",828);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(828)
	return this->rotation->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_minRotation,return )

Float FlxTypedEmitter_obj::get_minRotation( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",823);
	HX_STACK_THIS(this);
	HX_STACK_LINE(823)
	return this->rotation->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_minRotation,return )

Float FlxTypedEmitter_obj::set_gravity( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_gravity","flixel/effects/particles/FlxTypedEmitter.hx",812);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(812)
	return this->acceleration->set_y(Value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_gravity,return )

Float FlxTypedEmitter_obj::get_gravity( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_gravity","flixel/effects/particles/FlxTypedEmitter.hx",807);
	HX_STACK_THIS(this);
	HX_STACK_LINE(807)
	return this->acceleration->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_gravity,return )

Float FlxTypedEmitter_obj::set_y( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_y","flixel/effects/particles/FlxTypedEmitter.hx",797);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(797)
	return this->yPosition->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_y,return )

Float FlxTypedEmitter_obj::get_y( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_y","flixel/effects/particles/FlxTypedEmitter.hx",792);
	HX_STACK_THIS(this);
	HX_STACK_LINE(792)
	return this->yPosition->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_y,return )

Float FlxTypedEmitter_obj::set_x( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_x","flixel/effects/particles/FlxTypedEmitter.hx",785);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(785)
	return this->xPosition->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_x,return )

Float FlxTypedEmitter_obj::get_x( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_x","flixel/effects/particles/FlxTypedEmitter.hx",780);
	HX_STACK_THIS(this);
	HX_STACK_LINE(780)
	return this->xPosition->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_x,return )

Float FlxTypedEmitter_obj::set_height( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_height","flixel/effects/particles/FlxTypedEmitter.hx",773);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(773)
	return this->yPosition->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_height,return )

Float FlxTypedEmitter_obj::get_height( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_height","flixel/effects/particles/FlxTypedEmitter.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_LINE(768)
	return this->yPosition->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_height,return )

Float FlxTypedEmitter_obj::set_width( Float Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_width","flixel/effects/particles/FlxTypedEmitter.hx",758);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(758)
	return this->xPosition->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_width,return )

Float FlxTypedEmitter_obj::get_width( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_width","flixel/effects/particles/FlxTypedEmitter.hx",753);
	HX_STACK_THIS(this);
	HX_STACK_LINE(753)
	return this->xPosition->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_width,return )

::Class FlxTypedEmitter_obj::set_particleClass( ::Class Value){
	HX_STACK_PUSH("FlxTypedEmitter::set_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",743);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(743)
	return this->_particleClass = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_particleClass,return )

::Class FlxTypedEmitter_obj::get_particleClass( ){
	HX_STACK_PUSH("FlxTypedEmitter::get_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",738);
	HX_STACK_THIS(this);
	HX_STACK_LINE(738)
	return this->_particleClass;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_particleClass,return )

Void FlxTypedEmitter_obj::at( ::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxTypedEmitter::at","flixel/effects/particles/FlxTypedEmitter.hx",724);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(725)
		Object->getMidpoint(this->_point);
		HX_STACK_LINE(727)
		this->set_x((this->_point->x - ((int(::Std_obj::_int(this->get_width())) >> int((int)1)))));
		HX_STACK_LINE(728)
		this->set_y((this->_point->y - ((int(::Std_obj::_int(this->get_height())) >> int((int)1)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,at,(void))

Void FlxTypedEmitter_obj::setColor( hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(16777215);
int End = __o_End.Default(16777215);
	HX_STACK_PUSH("FlxTypedEmitter::setColor","flixel/effects/particles/FlxTypedEmitter.hx",697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
{
		HX_STACK_LINE(698)
		hx::AndEq(Start,(int)16777215);
		HX_STACK_LINE(699)
		hx::AndEq(End,(int)16777215);
		HX_STACK_LINE(701)
		Float startRedComp = (Float(((int((int(Start) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(702)
		Float startGreenComp = (Float(((int((int(Start) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(703)
		Float startBlueComp = (Float(((int(Start) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(705)
		Float endRedComp = (Float(((int((int(End) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(706)
		Float endGreenComp = (Float(((int((int(End) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(707)
		Float endBlueComp = (Float(((int(End) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(709)
		this->startRed->min = this->startRed->max = startRedComp;
		HX_STACK_LINE(710)
		this->startGreen->min = this->startGreen->max = startGreenComp;
		HX_STACK_LINE(711)
		this->startBlue->min = this->startBlue->max = startBlueComp;
		HX_STACK_LINE(713)
		this->endRed->min = this->endRed->max = endRedComp;
		HX_STACK_LINE(714)
		this->endGreen->min = this->endGreen->max = endGreenComp;
		HX_STACK_LINE(715)
		this->endBlue->min = this->endBlue->max = endBlueComp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setColor,(void))

Void FlxTypedEmitter_obj::setAlpha( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_PUSH("FlxTypedEmitter::setAlpha","flixel/effects/particles/FlxTypedEmitter.hx",662);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartMin,"StartMin");
	HX_STACK_ARG(StartMax,"StartMax");
	HX_STACK_ARG(EndMin,"EndMin");
	HX_STACK_ARG(EndMax,"EndMax");
{
		HX_STACK_LINE(663)
		if (((StartMin < (int)0))){
			HX_STACK_LINE(664)
			StartMin = (int)0;
		}
		HX_STACK_LINE(668)
		if (((StartMax < StartMin))){
			HX_STACK_LINE(669)
			StartMax = StartMin;
		}
		HX_STACK_LINE(673)
		if (((EndMin < (int)0))){
			HX_STACK_LINE(674)
			EndMin = (int)0;
		}
		HX_STACK_LINE(678)
		if (((EndMax < EndMin))){
			HX_STACK_LINE(679)
			EndMax = EndMin;
		}
		HX_STACK_LINE(683)
		this->startAlpha->min = StartMin;
		HX_STACK_LINE(684)
		this->startAlpha->max = StartMax;
		HX_STACK_LINE(685)
		this->endAlpha->min = EndMin;
		HX_STACK_LINE(686)
		this->endAlpha->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setAlpha,(void))

Void FlxTypedEmitter_obj::setScale( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_PUSH("FlxTypedEmitter::setScale","flixel/effects/particles/FlxTypedEmitter.hx",636);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartMin,"StartMin");
	HX_STACK_ARG(StartMax,"StartMax");
	HX_STACK_ARG(EndMin,"EndMin");
	HX_STACK_ARG(EndMax,"EndMax");
{
		HX_STACK_LINE(637)
		if (((StartMax < StartMin))){
			HX_STACK_LINE(638)
			StartMax = StartMin;
		}
		HX_STACK_LINE(642)
		if (((EndMax < EndMin))){
			HX_STACK_LINE(643)
			EndMax = EndMin;
		}
		HX_STACK_LINE(647)
		this->startScale->min = StartMin;
		HX_STACK_LINE(648)
		this->startScale->max = StartMax;
		HX_STACK_LINE(649)
		this->endScale->min = EndMin;
		HX_STACK_LINE(650)
		this->endScale->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setScale,(void))

Void FlxTypedEmitter_obj::setRotation( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_PUSH("FlxTypedEmitter::setRotation","flixel/effects/particles/FlxTypedEmitter.hx",617);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
{
		HX_STACK_LINE(618)
		if (((Max < Min))){
			HX_STACK_LINE(619)
			Max = Min;
		}
		HX_STACK_LINE(623)
		this->rotation->min = Min;
		HX_STACK_LINE(624)
		this->rotation->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setRotation,(void))

Void FlxTypedEmitter_obj::setYSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_PUSH("FlxTypedEmitter::setYSpeed","flixel/effects/particles/FlxTypedEmitter.hx",600);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
{
		HX_STACK_LINE(601)
		if (((Max < Min))){
			HX_STACK_LINE(602)
			Max = Min;
		}
		HX_STACK_LINE(606)
		this->yVelocity->min = Min;
		HX_STACK_LINE(607)
		this->yVelocity->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setYSpeed,(void))

Void FlxTypedEmitter_obj::setXSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_PUSH("FlxTypedEmitter::setXSpeed","flixel/effects/particles/FlxTypedEmitter.hx",583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
{
		HX_STACK_LINE(584)
		if (((Max < Min))){
			HX_STACK_LINE(585)
			Max = Min;
		}
		HX_STACK_LINE(589)
		this->xVelocity->min = Min;
		HX_STACK_LINE(590)
		this->xVelocity->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setXSpeed,(void))

Void FlxTypedEmitter_obj::setSize( int Width,int Height){
{
		HX_STACK_PUSH("FlxTypedEmitter::setSize","flixel/effects/particles/FlxTypedEmitter.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(572)
		this->set_width(Width);
		HX_STACK_LINE(573)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

Void FlxTypedEmitter_obj::emitParticle( ){
{
		HX_STACK_PUSH("FlxTypedEmitter::emitParticle","flixel/effects/particles/FlxTypedEmitter.hx",409);
		HX_STACK_THIS(this);
		HX_STACK_LINE(410)
		Dynamic particle = this->recycle(this->_particleClass,null(),null());		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(411)
		particle->__FieldRef(HX_CSTRING("elasticity")) = this->bounce;
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",413);
				{
					HX_STACK_LINE(413)
					::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(413)
					if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(413)
						hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(413)
					return ::flixel::util::FlxRandom_obj::globalSeed;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",413);
				{
					HX_STACK_LINE(413)
					::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(413)
					if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(413)
						hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(413)
					return ::flixel::util::FlxRandom_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(413)
		particle->__Field(HX_CSTRING("reset"),true)(((this->get_x() - ((int(::Std_obj::_int(particle->__Field(HX_CSTRING("get_width"),true)())) >> int((int)1)))) + (_Function_1_1::Block() * this->get_width())),((this->get_y() - ((int(::Std_obj::_int(particle->__Field(HX_CSTRING("get_height"),true)())) >> int((int)1)))) + (_Function_1_2::Block() * this->get_height())));
		HX_STACK_LINE(414)
		particle->__Field(HX_CSTRING("set_visible"),true)(true);
		HX_STACK_LINE(416)
		if (((this->life->min != this->life->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",418);
					{
						HX_STACK_LINE(418)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(418)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(418)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(418)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(417)
			particle->__FieldRef(HX_CSTRING("lifespan")) = particle->__FieldRef(HX_CSTRING("maxLifespan")) = (this->life->min + (_Function_2_1::Block() * ((this->life->max - this->life->min))));
		}
		else{
			HX_STACK_LINE(421)
			particle->__FieldRef(HX_CSTRING("lifespan")) = particle->__FieldRef(HX_CSTRING("maxLifespan")) = this->life->min;
		}
		HX_STACK_LINE(425)
		if (((this->startAlpha->min != this->startAlpha->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",427);
					{
						HX_STACK_LINE(427)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(427)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(427)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(427)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(426)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = (this->startAlpha->min + (_Function_2_1::Block() * ((this->startAlpha->max - this->startAlpha->min))));
		}
		else{
			HX_STACK_LINE(430)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = this->startAlpha->min;
		}
		HX_STACK_LINE(433)
		particle->__Field(HX_CSTRING("set_alpha"),true)(particle->__Field(HX_CSTRING("startAlpha"),true));
		HX_STACK_LINE(435)
		Float particleEndAlpha = this->endAlpha->min;		HX_STACK_VAR(particleEndAlpha,"particleEndAlpha");
		HX_STACK_LINE(436)
		if (((this->endAlpha->min != this->endAlpha->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",438);
					{
						HX_STACK_LINE(438)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(438)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(438)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(438)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(437)
			particleEndAlpha = (this->endAlpha->min + (_Function_2_1::Block() * ((this->endAlpha->max - this->endAlpha->min))));
		}
		HX_STACK_LINE(441)
		if (((particleEndAlpha != particle->__Field(HX_CSTRING("startAlpha"),true)))){
			HX_STACK_LINE(443)
			particle->__FieldRef(HX_CSTRING("useFading")) = true;
			HX_STACK_LINE(444)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (particleEndAlpha - particle->__Field(HX_CSTRING("startAlpha"),true));
		}
		else{
			HX_STACK_LINE(448)
			particle->__FieldRef(HX_CSTRING("useFading")) = false;
			HX_STACK_LINE(449)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (int)0;
		}
		HX_STACK_LINE(453)
		Float startRedComp = particle->__FieldRef(HX_CSTRING("startRed")) = this->startRed->min;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(454)
		Float startGreenComp = particle->__FieldRef(HX_CSTRING("startGreen")) = this->startGreen->min;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(455)
		Float startBlueComp = particle->__FieldRef(HX_CSTRING("startBlue")) = this->startBlue->min;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(457)
		Float endRedComp = this->endRed->min;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(458)
		Float endGreenComp = this->endGreen->min;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(459)
		Float endBlueComp = this->endBlue->min;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(461)
		if (((this->startRed->min != this->startRed->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",463);
					{
						HX_STACK_LINE(463)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(463)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(463)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(463)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(462)
			particle->__FieldRef(HX_CSTRING("startRed")) = startRedComp = (this->startRed->min + (_Function_2_1::Block() * ((this->startRed->max - this->startRed->min))));
		}
		HX_STACK_LINE(465)
		if (((this->startGreen->min != this->startGreen->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",467);
					{
						HX_STACK_LINE(467)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(467)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(467)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(467)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(466)
			particle->__FieldRef(HX_CSTRING("startGreen")) = startGreenComp = (this->startGreen->min + (_Function_2_1::Block() * ((this->startGreen->max - this->startGreen->min))));
		}
		HX_STACK_LINE(469)
		if (((this->startBlue->min != this->startBlue->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",471);
					{
						HX_STACK_LINE(471)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(471)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(471)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(471)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(470)
			particle->__FieldRef(HX_CSTRING("startBlue")) = startBlueComp = (this->startBlue->min + (_Function_2_1::Block() * ((this->startBlue->max - this->startBlue->min))));
		}
		HX_STACK_LINE(474)
		if (((this->endRed->min != this->endRed->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",476);
					{
						HX_STACK_LINE(476)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(476)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(476)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(476)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(475)
			endRedComp = (this->endRed->min + (_Function_2_1::Block() * ((this->endRed->max - this->endRed->min))));
		}
		HX_STACK_LINE(479)
		if (((this->endGreen->min != this->endGreen->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",481);
					{
						HX_STACK_LINE(481)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(481)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(481)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(481)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(480)
			endGreenComp = (this->endGreen->min + (_Function_2_1::Block() * ((this->endGreen->max - this->endGreen->min))));
		}
		HX_STACK_LINE(484)
		if (((this->endBlue->min != this->endBlue->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",486);
					{
						HX_STACK_LINE(486)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(486)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(486)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(486)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(485)
			endBlueComp = (this->endBlue->min + (_Function_2_1::Block() * ((this->endBlue->max - this->endBlue->min))));
		}
		HX_STACK_LINE(489)
		particle->__FieldRef(HX_CSTRING("rangeRed")) = (endRedComp - startRedComp);
		HX_STACK_LINE(490)
		particle->__FieldRef(HX_CSTRING("rangeGreen")) = (endGreenComp - startGreenComp);
		HX_STACK_LINE(491)
		particle->__FieldRef(HX_CSTRING("rangeBlue")) = (endBlueComp - startBlueComp);
		HX_STACK_LINE(493)
		particle->__FieldRef(HX_CSTRING("useColoring")) = false;
		HX_STACK_LINE(495)
		if (((bool((bool((particle->__Field(HX_CSTRING("rangeRed"),true) != (int)0)) || bool((particle->__Field(HX_CSTRING("rangeGreen"),true) != (int)0)))) || bool((particle->__Field(HX_CSTRING("rangeBlue"),true) != (int)0))))){
			HX_STACK_LINE(496)
			particle->__FieldRef(HX_CSTRING("useColoring")) = true;
		}
		HX_STACK_LINE(500)
		if (((this->startScale->min != this->startScale->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",502);
					{
						HX_STACK_LINE(502)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(502)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(502)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(502)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(501)
			particle->__FieldRef(HX_CSTRING("startScale")) = (this->startScale->min + (_Function_2_1::Block() * ((this->startScale->max - this->startScale->min))));
		}
		else{
			HX_STACK_LINE(505)
			particle->__FieldRef(HX_CSTRING("startScale")) = this->startScale->min;
		}
		HX_STACK_LINE(508)
		particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_x"),true)(particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("startScale"),true)));
		HX_STACK_LINE(510)
		Float particleEndScale = this->endScale->min;		HX_STACK_VAR(particleEndScale,"particleEndScale");
		HX_STACK_LINE(511)
		if (((this->endScale->min != this->endScale->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",513);
					{
						HX_STACK_LINE(513)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(513)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(513)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(513)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(512)
			particleEndScale = (this->endScale->min + ::Std_obj::_int((_Function_2_1::Block() * ((this->endScale->max - this->endScale->min)))));
		}
		HX_STACK_LINE(516)
		if (((particleEndScale != particle->__Field(HX_CSTRING("startScale"),true)))){
			HX_STACK_LINE(518)
			particle->__FieldRef(HX_CSTRING("useScaling")) = true;
			HX_STACK_LINE(519)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (particleEndScale - particle->__Field(HX_CSTRING("startScale"),true));
		}
		else{
			HX_STACK_LINE(523)
			particle->__FieldRef(HX_CSTRING("useScaling")) = false;
			HX_STACK_LINE(524)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (int)0;
		}
		HX_STACK_LINE(527)
		particle->__Field(HX_CSTRING("set_blend"),true)(this->blend);
		HX_STACK_LINE(529)
		if (((this->xVelocity->min != this->xVelocity->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",531);
					{
						HX_STACK_LINE(531)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(531)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(531)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(531)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(530)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)((this->xVelocity->min + (_Function_2_1::Block() * ((this->xVelocity->max - this->xVelocity->min)))));
		}
		else{
			HX_STACK_LINE(534)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(this->xVelocity->min);
		}
		HX_STACK_LINE(537)
		if (((this->yVelocity->min != this->yVelocity->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",539);
					{
						HX_STACK_LINE(539)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(539)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(539)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(539)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(538)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)((this->yVelocity->min + (_Function_2_1::Block() * ((this->yVelocity->max - this->yVelocity->min)))));
		}
		else{
			HX_STACK_LINE(542)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(this->yVelocity->min);
		}
		HX_STACK_LINE(545)
		particle->__Field(HX_CSTRING("acceleration"),true)->__Field(HX_CSTRING("set"),true)(this->acceleration->x,this->acceleration->y);
		HX_STACK_LINE(547)
		if (((this->rotation->min != this->rotation->max))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",549);
					{
						HX_STACK_LINE(549)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(549)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(549)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(549)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(548)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = (this->rotation->min + (_Function_2_1::Block() * ((this->rotation->max - this->rotation->min))));
		}
		else{
			HX_STACK_LINE(552)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = this->rotation->min;
		}
		HX_STACK_LINE(555)
		if (((particle->__Field(HX_CSTRING("angularVelocity"),true) != (int)0))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",557);
					{
						HX_STACK_LINE(557)
						::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
						HX_STACK_LINE(557)
						if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
							HX_STACK_LINE(557)
							hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
						}
						HX_STACK_LINE(557)
						return ::flixel::util::FlxRandom_obj::globalSeed;
					}
					return null();
				}
			};
			HX_STACK_LINE(556)
			particle->__Field(HX_CSTRING("set_angle"),true)(((_Function_2_1::Block() * (int)360) - (int)180));
		}
		HX_STACK_LINE(560)
		particle->__Field(HX_CSTRING("drag"),true)->__Field(HX_CSTRING("set"),true)(this->particleDrag->x,this->particleDrag->y);
		HX_STACK_LINE(561)
		particle->__Field(HX_CSTRING("onEmit"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,(void))

Void FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Lifespan,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity,hx::Null< Float >  __o_LifespanRange){
bool Explode = __o_Explode.Default(true);
Float Lifespan = __o_Lifespan.Default(0);
Float Frequency = __o_Frequency.Default(0.1);
int Quantity = __o_Quantity.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_PUSH("FlxTypedEmitter::start","flixel/effects/particles/FlxTypedEmitter.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Explode,"Explode");
	HX_STACK_ARG(Lifespan,"Lifespan");
	HX_STACK_ARG(Frequency,"Frequency");
	HX_STACK_ARG(Quantity,"Quantity");
	HX_STACK_ARG(LifespanRange,"LifespanRange");
{
		HX_STACK_LINE(389)
		this->revive();
		HX_STACK_LINE(390)
		this->set_visible(true);
		HX_STACK_LINE(391)
		this->on = true;
		HX_STACK_LINE(393)
		this->_explode = Explode;
		HX_STACK_LINE(394)
		this->life->min = Lifespan;
		HX_STACK_LINE(395)
		this->life->max = (Lifespan + ::Math_obj::abs(LifespanRange));
		HX_STACK_LINE(396)
		this->frequency = Frequency;
		HX_STACK_LINE(397)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(399)
		this->_counter = (int)0;
		HX_STACK_LINE(400)
		this->_timer = (int)0;
		HX_STACK_LINE(402)
		this->_waitForKill = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,start,(void))

Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_PUSH("FlxTypedEmitter::kill","flixel/effects/particles/FlxTypedEmitter.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(373)
		this->on = false;
		HX_STACK_LINE(374)
		this->_waitForKill = false;
		HX_STACK_LINE(376)
		this->super::kill();
	}
return null();
}


Void FlxTypedEmitter_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedEmitter::update","flixel/effects/particles/FlxTypedEmitter.hx",297);
		HX_STACK_THIS(this);
		HX_STACK_LINE(298)
		if ((this->on)){
			HX_STACK_LINE(299)
			if ((this->_explode)){
				HX_STACK_LINE(302)
				this->on = false;
				HX_STACK_LINE(303)
				this->_waitForKill = true;
				HX_STACK_LINE(305)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(306)
				int l = this->_quantity;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(308)
				if (((bool((l <= (int)0)) || bool((l > this->length))))){
					HX_STACK_LINE(309)
					l = this->length;
				}
				HX_STACK_LINE(313)
				while(((i < l))){
					HX_STACK_LINE(315)
					this->emitParticle();
					HX_STACK_LINE(316)
					(i)++;
				}
				HX_STACK_LINE(319)
				this->_quantity = (int)0;
			}
			else{
				HX_STACK_LINE(322)
				if (((this->frequency <= (int)0))){
					HX_STACK_LINE(326)
					this->emitParticle();
					HX_STACK_LINE(328)
					if (((bool((this->_quantity > (int)0)) && bool((++(this->_counter) >= this->_quantity))))){
						HX_STACK_LINE(330)
						this->on = false;
						HX_STACK_LINE(331)
						this->_waitForKill = true;
						HX_STACK_LINE(332)
						this->_quantity = (int)0;
					}
				}
				else{
					HX_STACK_LINE(337)
					hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
					HX_STACK_LINE(339)
					while(((this->_timer > this->frequency))){
						HX_STACK_LINE(341)
						hx::SubEq(this->_timer,this->frequency);
						HX_STACK_LINE(342)
						this->emitParticle();
						HX_STACK_LINE(344)
						if (((bool((this->_quantity > (int)0)) && bool((++(this->_counter) >= this->_quantity))))){
							HX_STACK_LINE(346)
							this->on = false;
							HX_STACK_LINE(347)
							this->_waitForKill = true;
							HX_STACK_LINE(348)
							this->_quantity = (int)0;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(354)
			if ((this->_waitForKill)){
				HX_STACK_LINE(356)
				hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(358)
				if (((bool((this->life->max > (int)0)) && bool((this->_timer > this->life->max))))){
					HX_STACK_LINE(360)
					this->kill();
					HX_STACK_LINE(361)
					return null();
				}
			}
		}
		HX_STACK_LINE(365)
		this->super::update();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_BakedRotations,hx::Null< bool >  __o_Multiple,hx::Null< Float >  __o_Collide,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int BakedRotations = __o_BakedRotations.Default(16);
bool Multiple = __o_Multiple.Default(false);
Float Collide = __o_Collide.Default(0.8);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxTypedEmitter::makeParticles","flixel/effects/particles/FlxTypedEmitter.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphics,"Graphics");
	HX_STACK_ARG(Quantity,"Quantity");
	HX_STACK_ARG(BakedRotations,"BakedRotations");
	HX_STACK_ARG(Multiple,"Multiple");
	HX_STACK_ARG(Collide,"Collide");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
{
		HX_STACK_LINE(222)
		this->set_maxSize(Quantity);
		HX_STACK_LINE(223)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(225)
		if ((Multiple)){
			HX_STACK_LINE(227)
			::flixel::FlxSprite sprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(228)
			sprite->loadGraphic(Graphics,true,null(),null(),null(),null(),null());
			HX_STACK_LINE(229)
			totalFrames = sprite->frames;
			HX_STACK_LINE(230)
			sprite->destroy();
		}
		HX_STACK_LINE(233)
		int randomFrame;		HX_STACK_VAR(randomFrame,"randomFrame");
		HX_STACK_LINE(234)
		Dynamic particle;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(235)
		::Class pClass = this->_particleClass;		HX_STACK_VAR(pClass,"pClass");
		HX_STACK_LINE(236)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		while(((i < Quantity))){
			HX_STACK_LINE(240)
			particle = ::Type_obj::createInstance(pClass,Dynamic( Array_obj<Dynamic>::__new()));
			HX_STACK_LINE(242)
			if ((Multiple)){
				struct _Function_3_1{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","flixel/effects/particles/FlxTypedEmitter.hx",244);
						{
							HX_STACK_LINE(244)
							::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
							HX_STACK_LINE(244)
							if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
								HX_STACK_LINE(244)
								hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
							}
							HX_STACK_LINE(244)
							return ::flixel::util::FlxRandom_obj::globalSeed;
						}
						return null();
					}
				};
				HX_STACK_LINE(244)
				randomFrame = ::Std_obj::_int((_Function_3_1::Block() * totalFrames));
				HX_STACK_LINE(246)
				if (((BakedRotations > (int)0))){
					HX_STACK_LINE(247)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(255)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null(),null());
				}
				HX_STACK_LINE(258)
				particle->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("set_frameIndex"),true)(randomFrame);
			}
			else{
				HX_STACK_LINE(261)
				if (((BakedRotations > (int)0))){
					HX_STACK_LINE(263)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(271)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(275)
			if (((Collide > (int)0))){
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					Dynamic _g = particle;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(277)
					_g->__Field(HX_CSTRING("set_width"),true)((_g->__Field(HX_CSTRING("get_width"),true)() * Collide));
				}
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(278)
					Dynamic _g = particle;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(278)
					_g->__Field(HX_CSTRING("set_height"),true)((_g->__Field(HX_CSTRING("get_height"),true)() * Collide));
				}
				HX_STACK_LINE(279)
				particle->__Field(HX_CSTRING("centerOffsets"),true)(null());
			}
			else{
				HX_STACK_LINE(282)
				particle->__FieldRef(HX_CSTRING("allowCollisions")) = (int)0;
			}
			HX_STACK_LINE(286)
			particle->__Field(HX_CSTRING("set_exists"),true)(false);
			HX_STACK_LINE(287)
			this->add(particle);
			HX_STACK_LINE(288)
			(i)++;
		}
		HX_STACK_LINE(290)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedEmitter::destroy","flixel/effects/particles/FlxTypedEmitter.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_LINE(184)
		this->xPosition = null();
		HX_STACK_LINE(185)
		this->yPosition = null();
		HX_STACK_LINE(186)
		this->xVelocity = null();
		HX_STACK_LINE(187)
		this->yVelocity = null();
		HX_STACK_LINE(188)
		this->rotation = null();
		HX_STACK_LINE(189)
		this->startScale = null();
		HX_STACK_LINE(190)
		this->endScale = null();
		HX_STACK_LINE(191)
		this->startAlpha = null();
		HX_STACK_LINE(192)
		this->endAlpha = null();
		HX_STACK_LINE(193)
		this->startRed = null();
		HX_STACK_LINE(194)
		this->startGreen = null();
		HX_STACK_LINE(195)
		this->startBlue = null();
		HX_STACK_LINE(196)
		this->endRed = null();
		HX_STACK_LINE(197)
		this->endGreen = null();
		HX_STACK_LINE(198)
		this->endBlue = null();
		HX_STACK_LINE(199)
		this->blend = null();
		HX_STACK_LINE(200)
		this->acceleration = null();
		HX_STACK_LINE(202)
		this->particleDrag = null();
		HX_STACK_LINE(203)
		this->_particleClass = null();
		HX_STACK_LINE(204)
		this->_point = null();
		HX_STACK_LINE(206)
		this->super::destroy();
	}
return null();
}



FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_particleClass,"_particleClass");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(endBlue,"endBlue");
	HX_MARK_MEMBER_NAME(endGreen,"endGreen");
	HX_MARK_MEMBER_NAME(endRed,"endRed");
	HX_MARK_MEMBER_NAME(startBlue,"startBlue");
	HX_MARK_MEMBER_NAME(startGreen,"startGreen");
	HX_MARK_MEMBER_NAME(startRed,"startRed");
	HX_MARK_MEMBER_NAME(endAlpha,"endAlpha");
	HX_MARK_MEMBER_NAME(startAlpha,"startAlpha");
	HX_MARK_MEMBER_NAME(endScale,"endScale");
	HX_MARK_MEMBER_NAME(startScale,"startScale");
	HX_MARK_MEMBER_NAME(life,"life");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(on,"on");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(particleDrag,"particleDrag");
	HX_MARK_MEMBER_NAME(yVelocity,"yVelocity");
	HX_MARK_MEMBER_NAME(xVelocity,"xVelocity");
	HX_MARK_MEMBER_NAME(yPosition,"yPosition");
	HX_MARK_MEMBER_NAME(xPosition,"xPosition");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_particleClass,"_particleClass");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(endBlue,"endBlue");
	HX_VISIT_MEMBER_NAME(endGreen,"endGreen");
	HX_VISIT_MEMBER_NAME(endRed,"endRed");
	HX_VISIT_MEMBER_NAME(startBlue,"startBlue");
	HX_VISIT_MEMBER_NAME(startGreen,"startGreen");
	HX_VISIT_MEMBER_NAME(startRed,"startRed");
	HX_VISIT_MEMBER_NAME(endAlpha,"endAlpha");
	HX_VISIT_MEMBER_NAME(startAlpha,"startAlpha");
	HX_VISIT_MEMBER_NAME(endScale,"endScale");
	HX_VISIT_MEMBER_NAME(startScale,"startScale");
	HX_VISIT_MEMBER_NAME(life,"life");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(on,"on");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(particleDrag,"particleDrag");
	HX_VISIT_MEMBER_NAME(yVelocity,"yVelocity");
	HX_VISIT_MEMBER_NAME(xVelocity,"xVelocity");
	HX_VISIT_MEMBER_NAME(yPosition,"yPosition");
	HX_VISIT_MEMBER_NAME(xPosition,"xPosition");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"life") ) { return life; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		if (HX_FIELD_EQ(inName,"endRed") ) { return endRed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return get_gravity(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endBlue") ) { return endBlue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return get_lifespan(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { return endGreen; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { return endAlpha; }
		if (HX_FIELD_EQ(inName,"endScale") ) { return endScale; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"setYSpeed") ) { return setYSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setXSpeed") ) { return setXSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { return yVelocity; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { return xVelocity; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { return yPosition; }
		if (HX_FIELD_EQ(inName,"xPosition") ) { return xPosition; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxRotation") ) { return get_maxRotation(); }
		if (HX_FIELD_EQ(inName,"minRotation") ) { return get_minRotation(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_lifespan") ) { return set_lifespan_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lifespan") ) { return get_lifespan_dyn(); }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"particleDrag") ) { return particleDrag; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return get_particleClass(); }
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { return _particleClass; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_maxRotation") ) { return set_maxRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxRotation") ) { return get_maxRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minRotation") ) { return set_minRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minRotation") ) { return get_minRotation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_particleClass") ) { return set_particleClass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_particleClass") ) { return get_particleClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { life=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endRed") ) { endRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return set_gravity(inValue); }
		if (HX_FIELD_EQ(inName,"endBlue") ) { endBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return set_lifespan(inValue); }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { endGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { endAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endScale") ) { endScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { yVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { xVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { yPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPosition") ) { xPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxRotation") ) { return set_maxRotation(inValue); }
		if (HX_FIELD_EQ(inName,"minRotation") ) { return set_minRotation(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particleDrag") ) { particleDrag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return set_particleClass(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { _particleClass=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lifespan"));
	outFields->push(HX_CSTRING("maxRotation"));
	outFields->push(HX_CSTRING("minRotation"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("particleClass"));
	outFields->push(HX_CSTRING("_waitForKill"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_counter"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_explode"));
	outFields->push(HX_CSTRING("_quantity"));
	outFields->push(HX_CSTRING("_particleClass"));
	outFields->push(HX_CSTRING("bounce"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("endBlue"));
	outFields->push(HX_CSTRING("endGreen"));
	outFields->push(HX_CSTRING("endRed"));
	outFields->push(HX_CSTRING("startBlue"));
	outFields->push(HX_CSTRING("startGreen"));
	outFields->push(HX_CSTRING("startRed"));
	outFields->push(HX_CSTRING("endAlpha"));
	outFields->push(HX_CSTRING("startAlpha"));
	outFields->push(HX_CSTRING("endScale"));
	outFields->push(HX_CSTRING("startScale"));
	outFields->push(HX_CSTRING("life"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("on"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("particleDrag"));
	outFields->push(HX_CSTRING("yVelocity"));
	outFields->push(HX_CSTRING("xVelocity"));
	outFields->push(HX_CSTRING("yPosition"));
	outFields->push(HX_CSTRING("xPosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_lifespan"),
	HX_CSTRING("get_lifespan"),
	HX_CSTRING("set_maxRotation"),
	HX_CSTRING("get_maxRotation"),
	HX_CSTRING("set_minRotation"),
	HX_CSTRING("get_minRotation"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_particleClass"),
	HX_CSTRING("get_particleClass"),
	HX_CSTRING("at"),
	HX_CSTRING("setColor"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("setScale"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setYSpeed"),
	HX_CSTRING("setXSpeed"),
	HX_CSTRING("setSize"),
	HX_CSTRING("emitParticle"),
	HX_CSTRING("start"),
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("makeParticles"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_waitForKill"),
	HX_CSTRING("_point"),
	HX_CSTRING("_counter"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_explode"),
	HX_CSTRING("_quantity"),
	HX_CSTRING("_particleClass"),
	HX_CSTRING("bounce"),
	HX_CSTRING("blend"),
	HX_CSTRING("endBlue"),
	HX_CSTRING("endGreen"),
	HX_CSTRING("endRed"),
	HX_CSTRING("startBlue"),
	HX_CSTRING("startGreen"),
	HX_CSTRING("startRed"),
	HX_CSTRING("endAlpha"),
	HX_CSTRING("startAlpha"),
	HX_CSTRING("endScale"),
	HX_CSTRING("startScale"),
	HX_CSTRING("life"),
	HX_CSTRING("frequency"),
	HX_CSTRING("on"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("rotation"),
	HX_CSTRING("particleDrag"),
	HX_CSTRING("yVelocity"),
	HX_CSTRING("xVelocity"),
	HX_CSTRING("yPosition"),
	HX_CSTRING("xPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxTypedEmitter"), hx::TCanCast< FlxTypedEmitter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedEmitter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
