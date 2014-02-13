#include <hxcpp.h>

#ifndef INCLUDED_DragonHead
#include <DragonHead.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void DragonHead_obj::__construct(Float X,Float Y,int NumBodies,int FollowDistance)
{
HX_STACK_PUSH("DragonHead::new","DragonHead.hx",9);
{
	HX_STACK_LINE(26)
	this->brokenSpin = (int)6;
	HX_STACK_LINE(25)
	this->broken = false;
	HX_STACK_LINE(21)
	this->bTimer = (int)0;
	HX_STACK_LINE(19)
	this->mouseDown = false;
	HX_STACK_LINE(14)
	this->maxrot = (int)50;
	HX_STACK_LINE(12)
	this->speed = (int)8;
	HX_STACK_LINE(11)
	this->maxSpeed = (int)120;
	HX_STACK_LINE(30)
	super::__construct(X,Y,null());
	HX_STACK_LINE(32)
	this->lastY = this->y;
	HX_STACK_LINE(34)
	::Global_obj::posY = Array_obj< Float >::__new();
	HX_STACK_LINE(37)
	while(((::Global_obj::posY->length < ((NumBodies * FollowDistance) + (int)1)))){
		HX_STACK_LINE(38)
		::Global_obj::posY->push(this->y);
	}
	HX_STACK_LINE(42)
	this->loadGraphic(HX_CSTRING("assets/dragon_head.png"),false,false,(int)34,(int)18,null(),null());
	HX_STACK_LINE(46)
	this->scale->set_x(1.25);
	HX_STACK_LINE(47)
	this->scale->set_y(1.25);
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::DragonHead _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		_g->set_width((_g->get_width() * 0.7));
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::DragonHead _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		_g->set_height((_g->get_height() * 0.8));
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		_g->set_y((_g->y + (int)5));
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		_g->set_x((_g->x + (int)5));
	}
}
;
	return null();
}

DragonHead_obj::~DragonHead_obj() { }

Dynamic DragonHead_obj::__CreateEmpty() { return  new DragonHead_obj; }
hx::ObjectPtr< DragonHead_obj > DragonHead_obj::__new(Float X,Float Y,int NumBodies,int FollowDistance)
{  hx::ObjectPtr< DragonHead_obj > result = new DragonHead_obj();
	result->__construct(X,Y,NumBodies,FollowDistance);
	return result;}

Dynamic DragonHead_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DragonHead_obj > result = new DragonHead_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void DragonHead_obj::breakHead( ){
{
		HX_STACK_PUSH("DragonHead::breakHead","DragonHead.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		this->broken = true;
		HX_STACK_LINE(116)
		this->acceleration->set_y((int)300);
		HX_STACK_LINE(117)
		this->acceleration->set_x((int)50);
		HX_STACK_LINE(118)
		this->maxVelocity->set_y((int)500);
		HX_STACK_LINE(119)
		this->maxVelocity->set_x((int)200);
		HX_STACK_LINE(120)
		this->velocity->set_x(((::Math_obj::random() * (int)180) + (::Math_obj::random() * (int)-50)));
		HX_STACK_LINE(121)
		this->velocity->set_y(((::Math_obj::random() * (int)-220) + (::Math_obj::random() * (int)50)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DragonHead_obj,breakHead,(void))

Void DragonHead_obj::update( ){
{
		HX_STACK_PUSH("DragonHead::update","DragonHead.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		this->super::update();
		HX_STACK_LINE(58)
		if ((this->broken)){
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::DragonHead _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				_g->set_angle((_g->angle + this->brokenSpin));
			}
			HX_STACK_LINE(63)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","DragonHead.hx",67);
				{
					HX_STACK_LINE(67)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(67)
		if (((bool(_Function_1_1::Block()) && bool(!(this->mouseDown))))){
			HX_STACK_LINE(68)
			this->mouseDown = true;
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","DragonHead.hx",69);
				{
					HX_STACK_LINE(69)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(69)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(69)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(70)
			this->mouseDown = false;
		}
		HX_STACK_LINE(72)
		if ((this->mouseDown)){
			HX_STACK_LINE(74)
			if (((this->y < (Float(::flixel::FlxG_obj::game->get_stage()->get_mouseY()) / Float(::Global_obj::ratio))))){
				HX_STACK_LINE(75)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				_g->set_y((_g->y + this->speed));
			}
			HX_STACK_LINE(77)
			if (((this->y > (Float(::flixel::FlxG_obj::game->get_stage()->get_mouseY()) / Float(::Global_obj::ratio))))){
				HX_STACK_LINE(78)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(78)
				_g->set_y((_g->y - this->speed));
			}
			HX_STACK_LINE(79)
			this->lastY = (Float(::flixel::FlxG_obj::game->get_stage()->get_mouseY()) / Float(::Global_obj::ratio));
		}
		else{
			HX_STACK_LINE(84)
			if (((this->y < this->lastY))){
				HX_STACK_LINE(85)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(85)
				_g->set_y((_g->y + this->speed));
			}
			HX_STACK_LINE(87)
			if (((this->y > this->lastY))){
				HX_STACK_LINE(88)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				_g->set_y((_g->y - this->speed));
			}
		}
		HX_STACK_LINE(91)
		this->set_angle((this->velocity->y * 0.14));
		HX_STACK_LINE(93)
		if (((this->velocity->y < (this->maxSpeed * (int)-1)))){
			HX_STACK_LINE(94)
			this->velocity->set_y((this->maxSpeed * (int)-1));
		}
		HX_STACK_LINE(95)
		if (((this->velocity->y > this->maxSpeed))){
			HX_STACK_LINE(96)
			this->velocity->set_y(this->maxSpeed);
		}
		HX_STACK_LINE(98)
		if (((this->velocity->y != (int)0))){
			HX_STACK_LINE(100)
			::Global_obj::posY->unshift(this->y);
			HX_STACK_LINE(101)
			::Global_obj::posY->pop();
		}
	}
return null();
}



DragonHead_obj::DragonHead_obj()
{
}

void DragonHead_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DragonHead);
	HX_MARK_MEMBER_NAME(brokenSpin,"brokenSpin");
	HX_MARK_MEMBER_NAME(broken,"broken");
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_MEMBER_NAME(bTimer,"bTimer");
	HX_MARK_MEMBER_NAME(mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(maxrot,"maxrot");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(maxSpeed,"maxSpeed");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DragonHead_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(brokenSpin,"brokenSpin");
	HX_VISIT_MEMBER_NAME(broken,"broken");
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
	HX_VISIT_MEMBER_NAME(bTimer,"bTimer");
	HX_VISIT_MEMBER_NAME(mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(maxrot,"maxrot");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(maxSpeed,"maxSpeed");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DragonHead_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lastY") ) { return lastY; }
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken; }
		if (HX_FIELD_EQ(inName,"bTimer") ) { return bTimer; }
		if (HX_FIELD_EQ(inName,"maxrot") ) { return maxrot; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { return maxSpeed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"breakHead") ) { return breakHead_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brokenSpin") ) { return brokenSpin; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DragonHead_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"broken") ) { broken=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bTimer") ) { bTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxrot") ) { maxrot=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { maxSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brokenSpin") ) { brokenSpin=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DragonHead_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("brokenSpin"));
	outFields->push(HX_CSTRING("broken"));
	outFields->push(HX_CSTRING("lastY"));
	outFields->push(HX_CSTRING("bTimer"));
	outFields->push(HX_CSTRING("mouseDown"));
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("maxrot"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("maxSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("breakHead"),
	HX_CSTRING("update"),
	HX_CSTRING("brokenSpin"),
	HX_CSTRING("broken"),
	HX_CSTRING("lastY"),
	HX_CSTRING("bTimer"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("music"),
	HX_CSTRING("maxrot"),
	HX_CSTRING("speed"),
	HX_CSTRING("maxSpeed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DragonHead_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DragonHead_obj::__mClass,"__mClass");
};

Class DragonHead_obj::__mClass;

void DragonHead_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DragonHead"), hx::TCanCast< DragonHead_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DragonHead_obj::__boot()
{
}

