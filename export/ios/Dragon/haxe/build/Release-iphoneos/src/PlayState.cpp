#include <hxcpp.h>

#ifndef INCLUDED_Calculations
#include <Calculations.h>
#endif
#ifndef INCLUDED_DragonBody
#include <DragonBody.h>
#endif
#ifndef INCLUDED_DragonHead
#include <DragonHead.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Wall
#include <Wall.h>
#endif
#ifndef INCLUDED_WeatherParticle
#include <WeatherParticle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void PlayState_obj::__construct()
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",28);
{
	HX_STACK_LINE(71)
	this->speedUpRate = 3.5;
	HX_STACK_LINE(69)
	this->current = (int)0;
	HX_STACK_LINE(68)
	this->last = (int)0;
	HX_STACK_LINE(67)
	this->change = (int)0;
	HX_STACK_LINE(66)
	this->maxStep = (int)50;
	HX_STACK_LINE(64)
	this->spaceSizeRange = (int)30;
	HX_STACK_LINE(63)
	this->spaceSizeMin = (int)25;
	HX_STACK_LINE(62)
	this->spaceSize = (int)50;
	HX_STACK_LINE(61)
	this->fp = (int)20;
	HX_STACK_LINE(60)
	this->numWalls = (int)4;
	HX_STACK_LINE(59)
	this->wallSpacing = (int)120;
	HX_STACK_LINE(50)
	this->dbLast = (int)4;
	HX_STACK_LINE(49)
	this->dbDistance = (int)8;
	HX_STACK_LINE(48)
	this->numBodies = (int)16;
	HX_STACK_LINE(77)
	super::__construct();
	HX_STACK_LINE(79)
	::Global_obj::gameOver = false;
	HX_STACK_LINE(80)
	::Global_obj::total = (int)0;
	HX_STACK_LINE(81)
	::Global_obj::speed = ::Global_obj::initialSpeed;
	HX_STACK_LINE(82)
	this->dbLast = ::Global_obj::dbLast;
}
;
	return null();
}

PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new()
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Void PlayState_obj::touchWall( ::flixel::FlxSprite d,::flixel::FlxSprite wall){
{
		HX_STACK_PUSH("PlayState::touchWall","PlayState.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_ARG(d,"d");
		HX_STACK_ARG(wall,"wall");
		HX_STACK_LINE(233)
		::Global_obj::gameOver = true;
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dragonBodies->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			while(((_g1 < _g))){
				HX_STACK_LINE(234)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				this->dragonBodies->__get(i).StaticCast< ::DragonBody >()->breakBody();
			}
		}
		HX_STACK_LINE(238)
		this->dragon->breakHead();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,touchWall,(void))

Void PlayState_obj::speedUp( ){
{
		HX_STACK_PUSH("PlayState::speedUp","PlayState.hx",225);
		HX_STACK_THIS(this);
		HX_STACK_LINE(226)
		hx::AddEq(::Global_obj::speed,this->speedUpRate);
		HX_STACK_LINE(227)
		hx::AddEq(this->dbLast,::Std_obj::_int(((Float(::Global_obj::dbLast) / Float(((::Global_obj::initialSpeed * 0.75)))) * this->speedUpRate)));
		HX_STACK_LINE(228)
		this->dragon->speed = ((int)4 + this->dbLast);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,speedUp,(void))

Void PlayState_obj::wallPlacer( ){
{
		HX_STACK_PUSH("PlayState::wallPlacer","PlayState.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->wallsTop->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		while(((_g1 < _g))){
			HX_STACK_LINE(199)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(201)
			if (((this->wallsTop->__get(i).StaticCast< ::Wall >()->x < (int)-40))){
				HX_STACK_LINE(203)
				if (((i != (int)0))){
					HX_STACK_LINE(204)
					this->wallsTop->__get(i).StaticCast< ::Wall >()->set_x((this->wallsTop->__get((i - (int)1)).StaticCast< ::Wall >()->x + this->wallSpacing));
					HX_STACK_LINE(205)
					this->wallsBottom->__get(i).StaticCast< ::Wall >()->set_x(this->wallsTop->__get(i).StaticCast< ::Wall >()->x);
				}
				HX_STACK_LINE(207)
				if (((i == (int)0))){
					HX_STACK_LINE(208)
					this->wallsTop->__get(i).StaticCast< ::Wall >()->set_x((this->wallsTop->__get((this->wallsTop->length - (int)1)).StaticCast< ::Wall >()->x + this->wallSpacing));
					HX_STACK_LINE(209)
					this->wallsBottom->__get(i).StaticCast< ::Wall >()->set_x(this->wallsTop->__get(i).StaticCast< ::Wall >()->x);
				}
				HX_STACK_LINE(211)
				this->change = ::Calculations_obj::plusOrMinus((::Math_obj::random() * this->maxStep));
				HX_STACK_LINE(212)
				if (((bool(((this->last + this->change) > (::flixel::FlxG_obj::height - this->spaceSize))) || bool(((this->last + this->change) < this->spaceSize))))){
					HX_STACK_LINE(213)
					hx::MultEq(this->change,(int)-1);
				}
				HX_STACK_LINE(214)
				this->last = (this->last + this->change);
				HX_STACK_LINE(215)
				this->wallsTop->__get(i).StaticCast< ::Wall >()->set_y(((this->last - this->spaceSize) - (int)160));
				HX_STACK_LINE(216)
				this->wallsBottom->__get(i).StaticCast< ::Wall >()->set_y((this->last + this->spaceSize));
				HX_STACK_LINE(217)
				this->spaceSize = (this->spaceSizeMin + (::Math_obj::random() * this->spaceSizeRange));
				HX_STACK_LINE(219)
				this->speedUp();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,wallPlacer,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_LINE(181)
		this->super::update();
		HX_STACK_LINE(182)
		this->wallPlacer();
		HX_STACK_LINE(184)
		if ((!(::Global_obj::gameOver))){
			HX_STACK_LINE(185)
			::flixel::FlxG_obj::overlap(this->dragon,this->walls,this->touchWall_dyn(),null());
			HX_STACK_LINE(186)
			this->scoreTxt->set_text(::Std_obj::string(::Global_obj::total));
		}
		HX_STACK_LINE(188)
		if ((::Global_obj::gameOver)){
			HX_STACK_LINE(190)
			hx::MultEq(::Global_obj::speed,0.97);
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","PlayState.hx",191);
					{
						HX_STACK_LINE(191)
						::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(191)
						return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(191)
			if (((bool((::Global_obj::speed < (int)5)) && bool(_Function_2_1::Block())))){
				HX_STACK_LINE(192)
				::flixel::FlxG_obj::game->requestedState = ::PlayState_obj::__new();
			}
		}
	}
return null();
}


Void PlayState_obj::addWalls( hx::Null< int >  __o_num){
int num = __o_num.Default(3);
	HX_STACK_PUSH("PlayState::addWalls","PlayState.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(num,"num");
{
		HX_STACK_LINE(157)
		this->last = (::flixel::FlxG_obj::height * 0.5);
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(159)
			while(((_g < num))){
				HX_STACK_LINE(159)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(161)
				this->wallsTop->push(::Wall_obj::__new(((::flixel::FlxG_obj::width + this->fp) + (i * this->wallSpacing)),(((::flixel::FlxG_obj::height * 0.5) - this->spaceSize) - (int)160),null()));
				HX_STACK_LINE(162)
				this->wallsBottom->push(::Wall_obj::__new(((::flixel::FlxG_obj::width + this->fp) + (i * this->wallSpacing)),((::flixel::FlxG_obj::height * 0.5) + this->spaceSize),false));
				HX_STACK_LINE(164)
				this->walls->add(this->wallsTop->__get(i).StaticCast< ::Wall >());
				HX_STACK_LINE(165)
				this->walls->add(this->wallsBottom->__get(i).StaticCast< ::Wall >());
				HX_STACK_LINE(167)
				this->change = ::Calculations_obj::plusOrMinus((::Math_obj::random() * this->maxStep));
				HX_STACK_LINE(168)
				if (((bool(((this->last + this->change) > (::flixel::FlxG_obj::height - this->spaceSize))) || bool(((this->last + this->change) < this->spaceSize))))){
					HX_STACK_LINE(169)
					hx::MultEq(this->change,(int)-1);
				}
				HX_STACK_LINE(170)
				this->last = (this->last + this->change);
				HX_STACK_LINE(171)
				this->wallsTop->__get(i).StaticCast< ::Wall >()->set_y(((this->last - this->spaceSize) - (int)160));
				HX_STACK_LINE(172)
				this->wallsBottom->__get(i).StaticCast< ::Wall >()->set_y((this->last + this->spaceSize));
				HX_STACK_LINE(173)
				this->spaceSize = (this->spaceSizeMin + (::Math_obj::random() * this->spaceSizeRange));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addWalls,(void))

Void PlayState_obj::addStars( hx::Null< int >  __o_num){
int num = __o_num.Default(50);
	HX_STACK_PUSH("PlayState::addStars","PlayState.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(num,"num");
{
		HX_STACK_LINE(146)
		this->stars = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			while(((_g < num))){
				HX_STACK_LINE(147)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(149)
				this->stars->push(::Star_obj::__new((((::Math_obj::random() * ::flixel::FlxG_obj::width) + (int)20) - (int)10),(((::Math_obj::random() * ::flixel::FlxG_obj::height) + (int)20) - (int)10)));
				HX_STACK_LINE(150)
				this->space->add(this->stars->__get(i).StaticCast< ::Star >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addStars,(void))

Void PlayState_obj::addBody( hx::Null< int >  __o_num){
int num = __o_num.Default(3);
	HX_STACK_PUSH("PlayState::addBody","PlayState.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(num,"num");
{
		HX_STACK_LINE(133)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		while(((_g < num))){
			HX_STACK_LINE(133)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(135)
			this->dragonBodies->push(::DragonBody_obj::__new(((this->dragon->x - (i * this->dbDistance)) - this->dbDistance),this->dragon->y));
			HX_STACK_LINE(136)
			this->dragonBodies->__get(i).StaticCast< ::DragonBody >()->position = ((i * this->dbLast) + this->dbLast);
			HX_STACK_LINE(137)
			this->body->add(this->dragonBodies->__get(i).StaticCast< ::DragonBody >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addBody,(void))

Void PlayState_obj::setupUI( ){
{
		HX_STACK_PUSH("PlayState::setupUI","PlayState.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(124)
		this->scoreTxt = ::flixel::text::FlxText_obj::__new((int)0,(int)4,::flixel::FlxG_obj::width,HX_CSTRING("0"),(int)16,null());
		HX_STACK_LINE(125)
		this->scoreTxt->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(126)
		this->scoreTxt->set_color((int)16118795);
		HX_STACK_LINE(127)
		this->scoreTxt->setBorderStyle((int)2,(int)8299727,(int)1,(int)1);
		HX_STACK_LINE(128)
		this->add(this->scoreTxt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setupUI,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		this->space = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(88)
		this->add(this->space);
		HX_STACK_LINE(91)
		this->blur = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(92)
		this->add(this->blur);
		HX_STACK_LINE(93)
		::Global_obj::blur = this->blur;
		HX_STACK_LINE(95)
		this->body = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(96)
		this->add(this->body);
		HX_STACK_LINE(99)
		::Global_obj::game = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(102)
		this->dragon = ::DragonHead_obj::__new(::Global_obj::dragonHeadX,(int)100,this->numBodies,this->dbLast);
		HX_STACK_LINE(103)
		this->add(this->dragon);
		HX_STACK_LINE(105)
		this->dragonBodies = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(106)
		this->addBody(this->numBodies);
		HX_STACK_LINE(111)
		this->walls = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(112)
		this->add(this->walls);
		HX_STACK_LINE(114)
		this->wallsTop = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(115)
		this->wallsBottom = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(116)
		this->addWalls(this->numWalls);
		HX_STACK_LINE(118)
		this->setupUI();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(scoreTxt,"scoreTxt");
	HX_MARK_MEMBER_NAME(speedUpRate,"speedUpRate");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(change,"change");
	HX_MARK_MEMBER_NAME(maxStep,"maxStep");
	HX_MARK_MEMBER_NAME(spaceSizeRange,"spaceSizeRange");
	HX_MARK_MEMBER_NAME(spaceSizeMin,"spaceSizeMin");
	HX_MARK_MEMBER_NAME(spaceSize,"spaceSize");
	HX_MARK_MEMBER_NAME(fp,"fp");
	HX_MARK_MEMBER_NAME(numWalls,"numWalls");
	HX_MARK_MEMBER_NAME(wallSpacing,"wallSpacing");
	HX_MARK_MEMBER_NAME(wallsBottom,"wallsBottom");
	HX_MARK_MEMBER_NAME(wallsTop,"wallsTop");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_tween,"_tween");
	HX_MARK_MEMBER_NAME(dbLast,"dbLast");
	HX_MARK_MEMBER_NAME(dbDistance,"dbDistance");
	HX_MARK_MEMBER_NAME(numBodies,"numBodies");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(blur,"blur");
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(stars,"stars");
	HX_MARK_MEMBER_NAME(dragonBodies,"dragonBodies");
	HX_MARK_MEMBER_NAME(dragon,"dragon");
	HX_MARK_MEMBER_NAME(blueScore,"blueScore");
	HX_MARK_MEMBER_NAME(redScore,"redScore");
	HX_MARK_MEMBER_NAME(UI,"UI");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoreTxt,"scoreTxt");
	HX_VISIT_MEMBER_NAME(speedUpRate,"speedUpRate");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(change,"change");
	HX_VISIT_MEMBER_NAME(maxStep,"maxStep");
	HX_VISIT_MEMBER_NAME(spaceSizeRange,"spaceSizeRange");
	HX_VISIT_MEMBER_NAME(spaceSizeMin,"spaceSizeMin");
	HX_VISIT_MEMBER_NAME(spaceSize,"spaceSize");
	HX_VISIT_MEMBER_NAME(fp,"fp");
	HX_VISIT_MEMBER_NAME(numWalls,"numWalls");
	HX_VISIT_MEMBER_NAME(wallSpacing,"wallSpacing");
	HX_VISIT_MEMBER_NAME(wallsBottom,"wallsBottom");
	HX_VISIT_MEMBER_NAME(wallsTop,"wallsTop");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_tween,"_tween");
	HX_VISIT_MEMBER_NAME(dbLast,"dbLast");
	HX_VISIT_MEMBER_NAME(dbDistance,"dbDistance");
	HX_VISIT_MEMBER_NAME(numBodies,"numBodies");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(blur,"blur");
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(stars,"stars");
	HX_VISIT_MEMBER_NAME(dragonBodies,"dragonBodies");
	HX_VISIT_MEMBER_NAME(dragon,"dragon");
	HX_VISIT_MEMBER_NAME(blueScore,"blueScore");
	HX_VISIT_MEMBER_NAME(redScore,"redScore");
	HX_VISIT_MEMBER_NAME(UI,"UI");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fp") ) { return fp; }
		if (HX_FIELD_EQ(inName,"UI") ) { return UI; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"blur") ) { return blur; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { return walls; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"stars") ) { return stars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"change") ) { return change; }
		if (HX_FIELD_EQ(inName,"_tween") ) { return _tween; }
		if (HX_FIELD_EQ(inName,"dbLast") ) { return dbLast; }
		if (HX_FIELD_EQ(inName,"dragon") ) { return dragon; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"speedUp") ) { return speedUp_dyn(); }
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		if (HX_FIELD_EQ(inName,"setupUI") ) { return setupUI_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"maxStep") ) { return maxStep; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addWalls") ) { return addWalls_dyn(); }
		if (HX_FIELD_EQ(inName,"addStars") ) { return addStars_dyn(); }
		if (HX_FIELD_EQ(inName,"scoreTxt") ) { return scoreTxt; }
		if (HX_FIELD_EQ(inName,"numWalls") ) { return numWalls; }
		if (HX_FIELD_EQ(inName,"wallsTop") ) { return wallsTop; }
		if (HX_FIELD_EQ(inName,"redScore") ) { return redScore; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"touchWall") ) { return touchWall_dyn(); }
		if (HX_FIELD_EQ(inName,"spaceSize") ) { return spaceSize; }
		if (HX_FIELD_EQ(inName,"numBodies") ) { return numBodies; }
		if (HX_FIELD_EQ(inName,"blueScore") ) { return blueScore; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wallPlacer") ) { return wallPlacer_dyn(); }
		if (HX_FIELD_EQ(inName,"dbDistance") ) { return dbDistance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"speedUpRate") ) { return speedUpRate; }
		if (HX_FIELD_EQ(inName,"wallSpacing") ) { return wallSpacing; }
		if (HX_FIELD_EQ(inName,"wallsBottom") ) { return wallsBottom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spaceSizeMin") ) { return spaceSizeMin; }
		if (HX_FIELD_EQ(inName,"dragonBodies") ) { return dragonBodies; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spaceSizeRange") ) { return spaceSizeRange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fp") ) { fp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UI") ) { UI=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blur") ) { blur=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stars") ) { stars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { change=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tween") ) { _tween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dbLast") ) { dbLast=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragon") ) { dragon=inValue.Cast< ::DragonHead >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxStep") ) { maxStep=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scoreTxt") ) { scoreTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numWalls") ) { numWalls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wallsTop") ) { wallsTop=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"redScore") ) { redScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spaceSize") ) { spaceSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numBodies") ) { numBodies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blueScore") ) { blueScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dbDistance") ) { dbDistance=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"speedUpRate") ) { speedUpRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wallSpacing") ) { wallSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wallsBottom") ) { wallsBottom=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spaceSizeMin") ) { spaceSizeMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragonBodies") ) { dragonBodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spaceSizeRange") ) { spaceSizeRange=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scoreTxt"));
	outFields->push(HX_CSTRING("speedUpRate"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("change"));
	outFields->push(HX_CSTRING("maxStep"));
	outFields->push(HX_CSTRING("spaceSizeRange"));
	outFields->push(HX_CSTRING("spaceSizeMin"));
	outFields->push(HX_CSTRING("spaceSize"));
	outFields->push(HX_CSTRING("fp"));
	outFields->push(HX_CSTRING("numWalls"));
	outFields->push(HX_CSTRING("wallSpacing"));
	outFields->push(HX_CSTRING("wallsBottom"));
	outFields->push(HX_CSTRING("wallsTop"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_tween"));
	outFields->push(HX_CSTRING("dbLast"));
	outFields->push(HX_CSTRING("dbDistance"));
	outFields->push(HX_CSTRING("numBodies"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("blur"));
	outFields->push(HX_CSTRING("walls"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("stars"));
	outFields->push(HX_CSTRING("dragonBodies"));
	outFields->push(HX_CSTRING("dragon"));
	outFields->push(HX_CSTRING("blueScore"));
	outFields->push(HX_CSTRING("redScore"));
	outFields->push(HX_CSTRING("UI"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("touchWall"),
	HX_CSTRING("speedUp"),
	HX_CSTRING("wallPlacer"),
	HX_CSTRING("update"),
	HX_CSTRING("addWalls"),
	HX_CSTRING("addStars"),
	HX_CSTRING("addBody"),
	HX_CSTRING("setupUI"),
	HX_CSTRING("create"),
	HX_CSTRING("scoreTxt"),
	HX_CSTRING("speedUpRate"),
	HX_CSTRING("current"),
	HX_CSTRING("last"),
	HX_CSTRING("change"),
	HX_CSTRING("maxStep"),
	HX_CSTRING("spaceSizeRange"),
	HX_CSTRING("spaceSizeMin"),
	HX_CSTRING("spaceSize"),
	HX_CSTRING("fp"),
	HX_CSTRING("numWalls"),
	HX_CSTRING("wallSpacing"),
	HX_CSTRING("wallsBottom"),
	HX_CSTRING("wallsTop"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_tween"),
	HX_CSTRING("dbLast"),
	HX_CSTRING("dbDistance"),
	HX_CSTRING("numBodies"),
	HX_CSTRING("body"),
	HX_CSTRING("blur"),
	HX_CSTRING("walls"),
	HX_CSTRING("space"),
	HX_CSTRING("stars"),
	HX_CSTRING("dragonBodies"),
	HX_CSTRING("dragon"),
	HX_CSTRING("blueScore"),
	HX_CSTRING("redScore"),
	HX_CSTRING("UI"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayState_obj::__boot()
{
}

