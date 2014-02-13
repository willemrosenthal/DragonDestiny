#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxObject::new","flixel/FlxObject.hx",22);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(173)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(168)
	this->wasTouching = (int)0;
	HX_STACK_LINE(163)
	this->touching = (int)0;
	HX_STACK_LINE(158)
	this->health = (int)1;
	HX_STACK_LINE(154)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(150)
	this->angularDrag = (int)0;
	HX_STACK_LINE(146)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(142)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(138)
	this->elasticity = (int)0;
	HX_STACK_LINE(134)
	this->mass = (int)1;
	HX_STACK_LINE(105)
	this->forceComplexRender = false;
	HX_STACK_LINE(94)
	this->immovable = false;
	HX_STACK_LINE(90)
	this->moves = true;
	HX_STACK_LINE(85)
	this->angle = (int)0;
	HX_STACK_LINE(72)
	this->y = (int)0;
	HX_STACK_LINE(68)
	this->x = (int)0;
	HX_STACK_LINE(207)
	super::__construct();
	HX_STACK_LINE(209)
	this->set_x(X);
	HX_STACK_LINE(210)
	this->set_y(Y);
	HX_STACK_LINE(211)
	this->set_width(Width);
	HX_STACK_LINE(212)
	this->set_height(Height);
	HX_STACK_LINE(214)
	this->initVars();
}
;
	return null();
}

FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flixel::util::FlxPoint FlxObject_obj::set_scrollFactor( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxObject::set_scrollFactor","flixel/FlxObject.hx",1047);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1048)
	this->_scrollFactor = Value;
	HX_STACK_LINE(1049)
	return this->scrollFactor = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_scrollFactor,return )

bool FlxObject_obj::set_forceComplexRender( bool Value){
	HX_STACK_PUSH("FlxObject::set_forceComplexRender","flixel/FlxObject.hx",1042);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1042)
	return this->forceComplexRender = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_forceComplexRender,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_PUSH("FlxObject::set_immovable","flixel/FlxObject.hx",1037);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1037)
	return this->immovable = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_PUSH("FlxObject::set_moves","flixel/FlxObject.hx",1032);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1032)
	return this->moves = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_PUSH("FlxObject::set_angle","flixel/FlxObject.hx",1027);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1027)
	return this->angle = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_PUSH("FlxObject::set_solid","flixel/FlxObject.hx",1014);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Solid,"Solid");
	HX_STACK_LINE(1015)
	if ((Solid)){
		HX_STACK_LINE(1016)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(1020)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(1023)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_PUSH("FlxObject::get_solid","flixel/FlxObject.hx",1009);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1009)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_PUSH("FlxObject::get_height","flixel/FlxObject.hx",1004);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1004)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_PUSH("FlxObject::get_width","flixel/FlxObject.hx",999);
	HX_STACK_THIS(this);
	HX_STACK_LINE(999)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_PUSH("FlxObject::set_height","flixel/FlxObject.hx",981);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Height,"Height");
	HX_STACK_LINE(990)
	this->height = Height;
	HX_STACK_LINE(995)
	return Height;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_PUSH("FlxObject::set_width","flixel/FlxObject.hx",963);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_LINE(972)
	this->width = Width;
	HX_STACK_LINE(977)
	return Width;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_PUSH("FlxObject::set_y","flixel/FlxObject.hx",958);
	HX_STACK_THIS(this);
	HX_STACK_ARG(NewY,"NewY");
	HX_STACK_LINE(958)
	return this->y = NewY;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_PUSH("FlxObject::set_x","flixel/FlxObject.hx",953);
	HX_STACK_THIS(this);
	HX_STACK_ARG(NewX,"NewX");
	HX_STACK_LINE(953)
	return this->x = NewX;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

::flixel::util::loaders::CachedGraphics FlxObject_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_PUSH("FlxObject::set_cachedGraphics","flixel/FlxObject.hx",936);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(937)
	if (((bool((this->cachedGraphics != null())) && bool((this->cachedGraphics != Value))))){
		HX_STACK_LINE(939)
		::flixel::util::loaders::CachedGraphics _g = this->cachedGraphics;		HX_STACK_VAR(_g,"_g");
		int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(939)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(939)
		_g1;
	}
	HX_STACK_LINE(942)
	if (((bool((this->cachedGraphics != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(944)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(944)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(944)
		_g1;
	}
	HX_STACK_LINE(946)
	return this->cachedGraphics = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_cachedGraphics,return )

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_PUSH("FlxObject::setSize","flixel/FlxObject.hx",925);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(926)
		this->set_width(Width);
		HX_STACK_LINE(927)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxObject::setPosition","flixel/FlxObject.hx",914);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(915)
		this->set_x(X);
		HX_STACK_LINE(916)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_PUSH("FlxObject::hurt","flixel/FlxObject.hx",652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Damage,"Damage");
		HX_STACK_LINE(653)
		this->health = (this->health - Damage);
		HX_STACK_LINE(654)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(655)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_PUSH("FlxObject::justTouched","flixel/FlxObject.hx",642);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(642)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_PUSH("FlxObject::isTouching","flixel/FlxObject.hx",632);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(632)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_PUSH("FlxObject::reset","flixel/FlxObject.hx",617);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(618)
		this->revive();
		HX_STACK_LINE(619)
		this->touching = (int)0;
		HX_STACK_LINE(620)
		this->wasTouching = (int)0;
		HX_STACK_LINE(621)
		this->setPosition(X,Y);
		HX_STACK_LINE(622)
		this->last->set(this->x,this->y);
		HX_STACK_LINE(623)
		this->velocity->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

::flixel::util::FlxPoint FlxObject_obj::getMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxObject::getMidpoint","flixel/FlxObject.hx",602);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(603)
	if (((point == null()))){
		HX_STACK_LINE(604)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(607)
	return point->set((this->x + (this->get_width() * 0.5)),(this->y + (this->get_height() * 0.5)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

::flixel::util::FlxPoint FlxObject_obj::getScreenXY( ::flixel::util::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::getScreenXY","flixel/FlxObject.hx",584);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(585)
	if (((point == null()))){
		HX_STACK_LINE(586)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(589)
	if (((Camera == null()))){
		HX_STACK_LINE(590)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(593)
	return point->set((this->x - (Camera->scroll->x * this->_scrollFactor->x)),(this->y - (Camera->scroll->y * this->_scrollFactor->y)));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_PUSH("FlxObject::inWorldBounds","flixel/FlxObject.hx",573);
	HX_STACK_THIS(this);
	HX_STACK_LINE(573)
	return (bool((bool((bool(((this->x + this->get_width()) > ::flixel::FlxG_obj::worldBounds->x)) && bool((this->x < ::flixel::FlxG_obj::worldBounds->get_right())))) && bool(((this->y + this->get_height()) > ::flixel::FlxG_obj::worldBounds->y)))) && bool((this->y < ::flixel::FlxG_obj::worldBounds->get_bottom())));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

bool FlxObject_obj::onScreen( ::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreen","flixel/FlxObject.hx",559);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(560)
	if (((Camera == null()))){
		HX_STACK_LINE(561)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(564)
	this->getScreenXY(this->_point,Camera);
	HX_STACK_LINE(565)
	return (bool((bool((bool(((this->_point->x + this->get_width()) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->get_height()) > (int)0)))) && bool((this->_point->y < Camera->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreen,return )

bool FlxObject_obj::overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsPoint","flixel/FlxObject.hx",537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(538)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(539)
			return (bool((bool((bool((point->x > this->x)) && bool((point->x < (this->x + this->get_width()))))) && bool((point->y > this->y)))) && bool((point->y < (this->y + this->get_height()))));
		}
		HX_STACK_LINE(543)
		if (((Camera == null()))){
			HX_STACK_LINE(544)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(547)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(548)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(549)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(550)
		return (bool((bool((bool((X > this->_point->x)) && bool((X < (this->_point->x + this->get_width()))))) && bool((Y > this->_point->y)))) && bool((Y < (this->_point->y + this->get_height()))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsAt","flixel/FlxObject.hx",477);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(478)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(479)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
		}
		HX_STACK_LINE(483)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(485)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(486)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(487)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(488)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(489)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(490)
			while(((i < ::Std_obj::_int(grp->length)))){
				HX_STACK_LINE(492)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(493)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlapsAt(X,Y,basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(495)
					results = true;
					HX_STACK_LINE(496)
					break;
				}
			}
			HX_STACK_LINE(499)
			return results;
		}
		HX_STACK_LINE(502)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
			HX_STACK_LINE(508)
			::flixel::tile::FlxTilemap tilemap = hx::TCast< flixel::tile::FlxTilemap >::cast(ObjectOrGroup);		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(509)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(512)
		::flixel::FlxObject object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(513)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(514)
			return (bool((bool((bool(((object->x + object->get_width()) > X)) && bool((object->x < (X + this->get_width()))))) && bool(((object->y + object->get_height()) > Y)))) && bool((object->y < (Y + this->get_height()))));
		}
		HX_STACK_LINE(519)
		if (((Camera == null()))){
			HX_STACK_LINE(520)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(523)
		::flixel::util::FlxPoint objectScreenPos = object->getScreenXY(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(524)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(525)
		return (bool((bool((bool(((objectScreenPos->x + object->get_width()) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->get_width()))))) && bool(((objectScreenPos->y + object->get_height()) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->get_height()))));
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlaps","flixel/FlxObject.hx",417);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(418)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(419)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
		}
		HX_STACK_LINE(423)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(425)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(426)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(427)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(428)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(429)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(430)
			while(((i < grp->length))){
				HX_STACK_LINE(432)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(433)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlaps(basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(435)
					results = true;
					HX_STACK_LINE(436)
					break;
				}
			}
			HX_STACK_LINE(439)
			return results;
		}
		HX_STACK_LINE(442)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
			HX_STACK_LINE(443)
			return (hx::TCast< flixel::tile::FlxTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(449)
		::flixel::FlxObject object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(450)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(451)
			return (bool((bool((bool(((object->x + object->get_width()) > this->x)) && bool((object->x < (this->x + this->get_width()))))) && bool(((object->y + object->get_height()) > this->y)))) && bool((object->y < (this->y + this->get_height()))));
		}
		HX_STACK_LINE(456)
		if (((Camera == null()))){
			HX_STACK_LINE(457)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(460)
		::flixel::util::FlxPoint objectScreenPos = object->getScreenXY(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(461)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(462)
		return (bool((bool((bool(((objectScreenPos->x + object->get_width()) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->get_width()))))) && bool(((objectScreenPos->y + object->get_height()) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->get_height()))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

Void FlxObject_obj::draw( ){
{
		HX_STACK_PUSH("FlxObject::draw","flixel/FlxObject.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_LINE(320)
		if (((this->cameras == null()))){
			HX_STACK_LINE(321)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(324)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(325)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(326)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(327)
		while(((i < l))){
			HX_STACK_LINE(329)
			camera = this->cameras->__get((i)++).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(330)
			if (((bool((bool(!(camera->visible)) || bool(!(camera->exists)))) || bool(!(this->onScreen(camera)))))){
				HX_STACK_LINE(331)
				continue;
			}
		}
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_PUSH("FlxObject::updateMotion","flixel/FlxObject.hx",291);
		HX_STACK_THIS(this);
		HX_STACK_LINE(292)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(293)
		Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(295)
		Float dt = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(297)
		velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular) - this->angularVelocity)));
		HX_STACK_LINE(298)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			_g->set_angle((_g->angle + (this->angularVelocity * dt)));
		}
		HX_STACK_LINE(300)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(302)
		velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x) - this->velocity->x)));
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(303)
			_g->set_x((_g->x + velocityDelta));
		}
		HX_STACK_LINE(304)
		delta = (this->velocity->x * dt);
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			_g->set_x((_g->x + velocityDelta));
		}
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(306)
			_g->set_x((_g->x + delta));
		}
		HX_STACK_LINE(308)
		velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y) - this->velocity->y)));
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			_g->set_y((_g->y + velocityDelta));
		}
		HX_STACK_LINE(310)
		delta = (this->velocity->y * dt);
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			_g->set_y((_g->y + velocityDelta));
		}
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			_g->set_y((_g->y + delta));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::update( ){
{
		HX_STACK_PUSH("FlxObject::update","flixel/FlxObject.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_LINE(274)
		this->last->set_x(this->x);
		HX_STACK_LINE(275)
		this->last->set_y(this->y);
		HX_STACK_LINE(277)
		if ((this->moves)){
			HX_STACK_LINE(279)
			Float delta;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(279)
			Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(279)
			Float dt = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(279)
			velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular) - this->angularVelocity)));
			HX_STACK_LINE(279)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_angle((_g->angle + (this->angularVelocity * dt)));
			}
			HX_STACK_LINE(279)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(279)
			velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x) - this->velocity->x)));
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_x((_g->x + velocityDelta));
			}
			HX_STACK_LINE(279)
			delta = (this->velocity->x * dt);
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_x((_g->x + velocityDelta));
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_x((_g->x + delta));
			}
			HX_STACK_LINE(279)
			velocityDelta = (0.5 * ((::flixel::util::FlxMath_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y) - this->velocity->y)));
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_y((_g->y + velocityDelta));
			}
			HX_STACK_LINE(279)
			delta = (this->velocity->y * dt);
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_y((_g->y + velocityDelta));
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_y((_g->y + delta));
			}
		}
		HX_STACK_LINE(282)
		this->wasTouching = this->touching;
		HX_STACK_LINE(283)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::destroy( ){
{
		HX_STACK_PUSH("FlxObject::destroy","flixel/FlxObject.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_LINE(247)
		this->super::destroy();
		HX_STACK_LINE(249)
		this->velocity = null();
		HX_STACK_LINE(250)
		this->acceleration = null();
		HX_STACK_LINE(251)
		this->drag = null();
		HX_STACK_LINE(252)
		this->maxVelocity = null();
		HX_STACK_LINE(253)
		this->set_scrollFactor(null());
		HX_STACK_LINE(254)
		this->last = null();
		HX_STACK_LINE(255)
		this->cameras = null();
		HX_STACK_LINE(256)
		this->_point = null();
		HX_STACK_LINE(257)
		this->_scrollFactor = null();
		HX_STACK_LINE(259)
		this->framesData = null();
		HX_STACK_LINE(260)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(261)
		this->region = null();
	}
return null();
}


Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_PUSH("FlxObject::initMotionVars","flixel/FlxObject.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(235)
		this->velocity = ::flixel::util::FlxPoint_obj::__new(null(),null());
		HX_STACK_LINE(236)
		this->acceleration = ::flixel::util::FlxPoint_obj::__new(null(),null());
		HX_STACK_LINE(237)
		this->drag = ::flixel::util::FlxPoint_obj::__new(null(),null());
		HX_STACK_LINE(238)
		this->maxVelocity = ::flixel::util::FlxPoint_obj::__new((int)10000,(int)10000);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::initVars( ){
{
		HX_STACK_PUSH("FlxObject::initVars","flixel/FlxObject.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_LINE(222)
		this->collisionType = ::flixel::system::FlxCollisionType_obj::OBJECT;
		HX_STACK_LINE(223)
		this->last = ::flixel::util::FlxPoint_obj::__new(this->x,this->y);
		HX_STACK_LINE(224)
		this->set_scrollFactor(::flixel::util::FlxPoint_obj::__new((int)1,(int)1));
		HX_STACK_LINE(225)
		this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			this->velocity = ::flixel::util::FlxPoint_obj::__new(null(),null());
			HX_STACK_LINE(227)
			this->acceleration = ::flixel::util::FlxPoint_obj::__new(null(),null());
			HX_STACK_LINE(227)
			this->drag = ::flixel::util::FlxPoint_obj::__new(null(),null());
			HX_STACK_LINE(227)
			this->maxVelocity = ::flixel::util::FlxPoint_obj::__new((int)10000,(int)10000);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Float FlxObject_obj::SEPARATE_BIAS;

::flixel::util::FlxPoint FlxObject_obj::_pZero;

::flixel::util::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::util::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separate","flixel/FlxObject.hx",667);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(668)
	bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(669)
	bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(670)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateX","flixel/FlxObject.hx",680);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(682)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(683)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(684)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(685)
		return false;
	}
	HX_STACK_LINE(690)
	if (((Object1->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
		HX_STACK_LINE(691)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(694)
	if (((Object2->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
		HX_STACK_LINE(695)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(700)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(701)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(702)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(704)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(707)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(708)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::flixel::util::FlxRect Block( ::flixel::FlxObject &Object1,Float &obj1delta){
				HX_STACK_PUSH("*::closure","flixel/FlxObject.hx",710);
				{
					HX_STACK_LINE(710)
					::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(710)
					_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(710)
					_this->y = Object1->last->y;
					HX_STACK_LINE(710)
					_this->width = (Object1->get_width() + ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) )));
					HX_STACK_LINE(710)
					_this->height = Object1->get_height();
					HX_STACK_LINE(710)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(710)
		::flixel::util::FlxRect obj1rect = _Function_2_1::Block(Object1,obj1delta);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::flixel::util::FlxRect Block( Float &obj2delta,::flixel::FlxObject &Object2){
				HX_STACK_PUSH("*::closure","flixel/FlxObject.hx",711);
				{
					HX_STACK_LINE(711)
					::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(711)
					_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(711)
					_this->y = Object2->last->y;
					HX_STACK_LINE(711)
					_this->width = (Object2->get_width() + ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) )));
					HX_STACK_LINE(711)
					_this->height = Object2->get_height();
					HX_STACK_LINE(711)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(711)
		::flixel::util::FlxRect obj2rect = _Function_2_2::Block(obj2delta,Object2);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(713)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(715)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(718)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(720)
				overlap = ((Object1->x + Object1->get_width()) - Object2->x);
				HX_STACK_LINE(721)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(722)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(727)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(728)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(731)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(733)
					overlap = ((Object1->x - Object2->get_width()) - Object2->x);
					HX_STACK_LINE(734)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(735)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(740)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(741)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(748)
	if (((overlap != (int)0))){
		HX_STACK_LINE(750)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(751)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(753)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(755)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(756)
			Object1->set_x((Object1->x - overlap));
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(757)
				_g->set_x((_g->x + overlap));
			}
			HX_STACK_LINE(759)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(760)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(761)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(762)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(763)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(764)
			Object1->velocity->set_x((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(765)
			Object2->velocity->set_x((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(767)
			if ((!(obj1immovable))){
				HX_STACK_LINE(769)
				Object1->set_x((Object1->x - overlap));
				HX_STACK_LINE(770)
				Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
			}
			else{
				HX_STACK_LINE(772)
				if ((!(obj2immovable))){
					HX_STACK_LINE(774)
					{
						HX_STACK_LINE(774)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(774)
						_g->set_x((_g->x + overlap));
					}
					HX_STACK_LINE(775)
					Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
				}
			}
		}
		HX_STACK_LINE(777)
		return true;
	}
	else{
		HX_STACK_LINE(780)
		return false;
	}
	HX_STACK_LINE(748)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateY","flixel/FlxObject.hx",792);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(794)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(795)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(796)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(797)
		return false;
	}
	HX_STACK_LINE(802)
	if (((Object1->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
		HX_STACK_LINE(803)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(806)
	if (((Object2->collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))){
		HX_STACK_LINE(807)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(812)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(813)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(814)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(816)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(819)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(820)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::flixel::util::FlxRect Block( ::flixel::FlxObject &Object1,Float &obj1deltaAbs,Float &obj1delta){
				HX_STACK_PUSH("*::closure","flixel/FlxObject.hx",822);
				{
					HX_STACK_LINE(822)
					::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					_this->x = Object1->x;
					HX_STACK_LINE(822)
					_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(822)
					_this->width = Object1->get_width();
					HX_STACK_LINE(822)
					_this->height = (Object1->get_height() + obj1deltaAbs);
					HX_STACK_LINE(822)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(822)
		::flixel::util::FlxRect obj1rect = _Function_2_1::Block(Object1,obj1deltaAbs,obj1delta);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::flixel::util::FlxRect Block( Float &obj2deltaAbs,Float &obj2delta,::flixel::FlxObject &Object2){
				HX_STACK_PUSH("*::closure","flixel/FlxObject.hx",823);
				{
					HX_STACK_LINE(823)
					::flixel::util::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					_this->x = Object2->x;
					HX_STACK_LINE(823)
					_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(823)
					_this->width = Object2->get_width();
					HX_STACK_LINE(823)
					_this->height = (Object2->get_height() + obj2deltaAbs);
					HX_STACK_LINE(823)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(823)
		::flixel::util::FlxRect obj2rect = _Function_2_2::Block(obj2deltaAbs,obj2delta,Object2);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(825)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(827)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(830)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(832)
				overlap = ((Object1->y + Object1->get_height()) - Object2->y);
				HX_STACK_LINE(833)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(834)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(839)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(840)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(843)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(845)
					overlap = ((Object1->y - Object2->get_height()) - Object2->y);
					HX_STACK_LINE(846)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(847)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(852)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(853)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(860)
	if (((overlap != (int)0))){
		HX_STACK_LINE(862)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(863)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(865)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(867)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(868)
			Object1->set_y((Object1->y - overlap));
			HX_STACK_LINE(869)
			{
				HX_STACK_LINE(869)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(869)
				_g->set_y((_g->y + overlap));
			}
			HX_STACK_LINE(871)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(872)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(873)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(874)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(875)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(876)
			Object1->velocity->set_y((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(877)
			Object2->velocity->set_y((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(879)
			if ((!(obj1immovable))){
				HX_STACK_LINE(881)
				Object1->set_y((Object1->y - overlap));
				HX_STACK_LINE(882)
				Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
				HX_STACK_LINE(884)
				if (((bool((bool(Object2->active) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(886)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(886)
					_g->set_x((_g->x + ((Object2->x - Object2->last->x))));
				}
			}
			else{
				HX_STACK_LINE(889)
				if ((!(obj2immovable))){
					HX_STACK_LINE(891)
					{
						HX_STACK_LINE(891)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(891)
						_g->set_y((_g->y + overlap));
					}
					HX_STACK_LINE(892)
					Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
					HX_STACK_LINE(894)
					if (((bool((bool(Object1->active) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(896)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(896)
						_g->set_x((_g->x + ((Object1->x - Object1->last->x))));
					}
				}
			}
		}
		HX_STACK_LINE(899)
		return true;
	}
	else{
		HX_STACK_LINE(902)
		return false;
	}
	HX_STACK_LINE(860)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(_scrollFactor,"_scrollFactor");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollFactor,"_scrollFactor");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"solid") ) { return get_solid(); }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { return _pZero; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_scrollFactor") ) { return _scrollFactor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_scrollFactor") ) { return set_scrollFactor_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { return forceComplexRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"set_forceComplexRender") ) { return set_forceComplexRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solid") ) { return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { _pZero=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { if (inCallProp) return set_scrollFactor(inValue);scrollFactor=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollFactor") ) { _scrollFactor=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { if (inCallProp) return set_forceComplexRender(inValue);forceComplexRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scrollFactor"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("framesData"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("forceComplexRender"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("_pZero"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_scrollFactor"),
	HX_CSTRING("set_forceComplexRender"),
	HX_CSTRING("set_immovable"),
	HX_CSTRING("set_moves"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_solid"),
	HX_CSTRING("get_solid"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("hurt"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("reset"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("getScreenXY"),
	HX_CSTRING("inWorldBounds"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("initMotionVars"),
	HX_CSTRING("initVars"),
	HX_CSTRING("_scrollFactor"),
	HX_CSTRING("_point"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("framesData"),
	HX_CSTRING("region"),
	HX_CSTRING("last"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("touching"),
	HX_CSTRING("health"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("mass"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("velocity"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("forceComplexRender"),
	HX_CSTRING("immovable"),
	HX_CSTRING("moves"),
	HX_CSTRING("angle"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	_pZero= ::flixel::util::FlxPoint_obj::__new(null(),null());
	_firstSeparateFlxRect= ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	_secondSeparateFlxRect= ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
