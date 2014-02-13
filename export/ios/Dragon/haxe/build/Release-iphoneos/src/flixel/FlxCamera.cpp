#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_PUSH("FlxCamera::new","flixel/FlxCamera.hx",24);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(1245)
	this->useBgAlphaBlending = true;
	HX_STACK_LINE(1055)
	this->antialiasing = false;
	HX_STACK_LINE(406)
	super::__construct();
	HX_STACK_LINE(408)
	this->_scrollTarget = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(410)
	this->x = X;
	HX_STACK_LINE(411)
	this->y = Y;
	HX_STACK_LINE(412)
	this->set_width(Width);
	HX_STACK_LINE(413)
	this->set_height(Height);
	HX_STACK_LINE(414)
	this->target = null();
	HX_STACK_LINE(415)
	this->deadzone = null();
	HX_STACK_LINE(416)
	this->scroll = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(417)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(418)
	this->bounds = null();
	HX_STACK_LINE(431)
	this->_canvas = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(432)
	this->_canvas->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(433)
	this->_canvas->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(439)
	this->set_color((int)-1);
	HX_STACK_LINE(442)
	this->_flashSprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(443)
	this->set_zoom(Zoom);
	HX_STACK_LINE(445)
	this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
	HX_STACK_LINE(446)
	this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
	HX_STACK_LINE(448)
	this->_flashSprite->set_x((this->x + this->_flashOffsetX));
	HX_STACK_LINE(449)
	this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	HX_STACK_LINE(454)
	this->_flashSprite->addChild(this->_canvas);
	HX_STACK_LINE(456)
	this->_flashRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	HX_STACK_LINE(457)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(459)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(460)
	this->_fxFlashDuration = 0.0;
	HX_STACK_LINE(461)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(462)
	this->_fxFlashAlpha = 0.0;
	HX_STACK_LINE(464)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(465)
	this->_fxFadeDuration = 0.0;
	HX_STACK_LINE(466)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(467)
	this->_fxFadeAlpha = 0.0;
	HX_STACK_LINE(469)
	this->_fxShakeIntensity = 0.0;
	HX_STACK_LINE(470)
	this->_fxShakeDuration = 0.0;
	HX_STACK_LINE(471)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(472)
	this->_fxShakeOffset = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(473)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(480)
	this->_canvas->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height));
	HX_STACK_LINE(493)
	this->_currentStackItem = ::flixel::system::layer::DrawStackItem_obj::__new();
	HX_STACK_LINE(494)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(497)
	this->bgColor = (  (((::flixel::FlxG_obj::camera == null()))) ? int((int)-16777216) : int(::flixel::FlxG_obj::camera->bgColor) );
	HX_STACK_LINE(499)
	this->_fxFadeIn = false;
	HX_STACK_LINE(501)
	this->set_alpha(1.0);
	HX_STACK_LINE(502)
	this->set_angle(0.0);
}
;
	return null();
}

FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(X,Y,Width,Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxCamera::setPosition","flixel/FlxCamera.hx",1293);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(1294)
		this->x = X;
		HX_STACK_LINE(1295)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_PUSH("FlxCamera::setSize","flixel/FlxCamera.hx",1281);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(1282)
		this->set_width(Width);
		HX_STACK_LINE(1283)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

bool FlxCamera_obj::set_useBgAlphaBlending( bool Value){
	HX_STACK_PUSH("FlxCamera::set_useBgAlphaBlending","flixel/FlxCamera.hx",1248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1248)
	return this->useBgAlphaBlending = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_useBgAlphaBlending,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_PUSH("FlxCamera::set_height","flixel/FlxCamera.hx",1208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1209)
	if (((Value > (int)0))){
		HX_STACK_LINE(1211)
		this->height = Value;
		HX_STACK_LINE(1220)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1222)
			::flash::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1224)
			rect->height = Value;
			HX_STACK_LINE(1228)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1230)
			this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
			HX_STACK_LINE(1231)
			this->_canvas->set_y((-(this->height) * 0.5));
		}
	}
	HX_STACK_LINE(1238)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_PUSH("FlxCamera::set_width","flixel/FlxCamera.hx",1174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1175)
	if (((Value > (int)0))){
		HX_STACK_LINE(1177)
		this->width = Value;
		HX_STACK_LINE(1186)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1188)
			::flash::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1190)
			rect->width = Value;
			HX_STACK_LINE(1194)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1196)
			this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
			HX_STACK_LINE(1197)
			this->_canvas->set_x((-(this->width) * 0.5));
		}
	}
	HX_STACK_LINE(1204)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_PUSH("FlxCamera::drawFX","flixel/FlxCamera.hx",1139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1140)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1143)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1145)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1150)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),this->_canvas->get_graphics());
		}
		HX_STACK_LINE(1155)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1157)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1162)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),this->_canvas->get_graphics());
		}
		HX_STACK_LINE(1166)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1168)
			{
				HX_STACK_LINE(1168)
				::flash::display::Sprite _g = this->_flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1168)
				_g->set_x((_g->get_x() + this->_fxShakeOffset->x));
			}
			HX_STACK_LINE(1169)
			{
				HX_STACK_LINE(1169)
				::flash::display::Sprite _g = this->_flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1169)
				_g->set_y((_g->get_y() + this->_fxShakeOffset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::flash::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_PUSH("FlxCamera::fill","flixel/FlxCamera.hx",1107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(BlendAlpha,"BlendAlpha");
	HX_STACK_ARG(FxAlpha,"FxAlpha");
	HX_STACK_ARG(graphics,"graphics");
{
		HX_STACK_LINE(1120)
		if (((FxAlpha == (int)0))){
			HX_STACK_LINE(1121)
			return null();
		}
		HX_STACK_LINE(1125)
		::flash::display::Graphics targetGraphics = (  (((graphics == null()))) ? ::flash::display::Graphics(this->_canvas->get_graphics()) : ::flash::display::Graphics(graphics) );		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1126)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1129)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1130)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(1131)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

::flash::display::Sprite FlxCamera_obj::getContainerSprite( ){
	HX_STACK_PUSH("FlxCamera::getContainerSprite","flixel/FlxCamera.hx",1097);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1097)
	return this->_flashSprite;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getContainerSprite,return )

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_PUSH("FlxCamera::setScale","flixel/FlxCamera.hx",1077);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1078)
		this->_flashSprite->set_scaleX(X);
		HX_STACK_LINE(1079)
		this->_flashSprite->set_scaleY(Y);
		HX_STACK_LINE(1082)
		this->_flashOffsetX = ((this->width * 0.5) * X);
		HX_STACK_LINE(1083)
		this->_flashOffsetY = ((this->height * 0.5) * Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_PUSH("FlxCamera::getScale","flixel/FlxCamera.hx",1072);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1072)
	return this->_point->set(this->_flashSprite->get_scaleX(),this->_flashSprite->get_scaleY());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_PUSH("FlxCamera::set_antialiasing","flixel/FlxCamera.hx",1058);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Antialiasing,"Antialiasing");
	HX_STACK_LINE(1059)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1063)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_PUSH("FlxCamera::set_color","flixel/FlxCamera.hx",1029);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1030)
	this->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(1041)
	::flash::geom::ColorTransform colorTransform = this->_canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1042)
	colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1043)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1044)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1045)
	this->_canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1048)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_PUSH("FlxCamera::set_angle","flixel/FlxCamera.hx",1013);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_LINE(1014)
	this->angle = Angle;
	HX_STACK_LINE(1015)
	this->_flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1016)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxCamera::set_alpha","flixel/FlxCamera.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	struct _Function_1_1{
		inline static Float Block( Float &Alpha){
			HX_STACK_PUSH("*::closure","flixel/FlxCamera.hx",996);
			{
				HX_STACK_LINE(996)
				Float lowerBound = (  (((Alpha < (int)0))) ? Float((int)0) : Float(Alpha) );		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(996)
				return (  (((lowerBound > (int)1))) ? Float((int)1) : Float(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(996)
	this->alpha = _Function_1_1::Block(Alpha);
	HX_STACK_LINE(1000)
	this->_canvas->set_alpha(Alpha);
	HX_STACK_LINE(1002)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_PUSH("FlxCamera::set_zoom","flixel/FlxCamera.hx",973);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Zoom,"Zoom");
	HX_STACK_LINE(974)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(975)
		this->zoom = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(979)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(982)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(983)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxCamera::copyFrom","flixel/FlxCamera.hx",934);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(935)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(936)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(941)
		if (((this->bounds == null()))){
			HX_STACK_LINE(942)
			this->bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(945)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(945)
			_this->x = Rect->x;
			HX_STACK_LINE(945)
			_this->y = Rect->y;
			HX_STACK_LINE(945)
			_this->width = Rect->width;
			HX_STACK_LINE(945)
			_this->height = Rect->height;
			HX_STACK_LINE(945)
			_this;
		}
	}
	HX_STACK_LINE(947)
	this->target = Camera->target;
	HX_STACK_LINE(948)
	if (((this->target != null()))){
		HX_STACK_LINE(949)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(951)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(956)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(957)
				this->deadzone = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
			}
			HX_STACK_LINE(960)
			{
				HX_STACK_LINE(960)
				::flixel::util::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(960)
				_this->x = Rect->x;
				HX_STACK_LINE(960)
				_this->y = Rect->y;
				HX_STACK_LINE(960)
				_this->width = Rect->width;
				HX_STACK_LINE(960)
				_this->height = Rect->height;
				HX_STACK_LINE(960)
				_this;
			}
		}
	}
	HX_STACK_LINE(963)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_PUSH("FlxCamera::stopFX","flixel/FlxCamera.hx",920);
		HX_STACK_THIS(this);
		HX_STACK_LINE(921)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(922)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(923)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(924)
		this->_flashSprite->set_x((this->x + this->_flashOffsetX));
		HX_STACK_LINE(925)
		this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxCamera::shake","flixel/FlxCamera.hx",904);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(905)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(906)
			return null();
		}
		HX_STACK_LINE(909)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(910)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(911)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(912)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(913)
		this->_fxShakeOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::fade","flixel/FlxCamera.hx",870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(871)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(872)
			return null();
		}
		HX_STACK_LINE(875)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(876)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(877)
			Duration = 0.0000000000000001;
		}
		HX_STACK_LINE(881)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(882)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(883)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(885)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(886)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(890)
			this->_fxFadeAlpha = 0.0000000000000001;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::flash","flixel/FlxCamera.hx",846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(847)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(848)
			return null();
		}
		HX_STACK_LINE(851)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(852)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(853)
			Duration = 0.0000000000000001;
		}
		HX_STACK_LINE(856)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(857)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(858)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_PUSH("FlxCamera::setBounds","flixel/FlxCamera.hx",825);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(826)
		if (((this->bounds == null()))){
			HX_STACK_LINE(827)
			this->bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(830)
			_this->x = X;
			HX_STACK_LINE(830)
			_this->y = Y;
			HX_STACK_LINE(830)
			_this->width = Width;
			HX_STACK_LINE(830)
			_this->height = Height;
			HX_STACK_LINE(830)
			_this;
		}
		HX_STACK_LINE(831)
		if ((UpdateWorld)){
			HX_STACK_LINE(833)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(833)
			_this->x = Rect->x;
			HX_STACK_LINE(833)
			_this->y = Rect->y;
			HX_STACK_LINE(833)
			_this->width = Rect->width;
			HX_STACK_LINE(833)
			_this->height = Rect->height;
			HX_STACK_LINE(833)
			_this;
		}
		HX_STACK_LINE(835)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::focusOn( ::flixel::util::FlxPoint point){
{
		HX_STACK_PUSH("FlxCamera::focusOn","flixel/FlxCamera.hx",812);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(812)
		this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::followAdjust( hx::Null< Float >  __o_LeadX,hx::Null< Float >  __o_LeadY){
Float LeadX = __o_LeadX.Default(0);
Float LeadY = __o_LeadY.Default(0);
	HX_STACK_PUSH("FlxCamera::followAdjust","flixel/FlxCamera.hx",803);
	HX_STACK_THIS(this);
	HX_STACK_ARG(LeadX,"LeadX");
	HX_STACK_ARG(LeadY,"LeadY");
{
		HX_STACK_LINE(803)
		this->followLead = ::flash::geom::Point_obj::__new(LeadX,LeadY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,followAdjust,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,hx::Null< int >  __o_Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_PUSH("FlxCamera::follow","flixel/FlxCamera.hx",760);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Offset,"Offset");
	HX_STACK_ARG(Lerp,"Lerp");
{
		HX_STACK_LINE(761)
		this->style = Style;
		HX_STACK_LINE(762)
		this->target = Target;
		HX_STACK_LINE(763)
		this->followLerp = Lerp;
		HX_STACK_LINE(764)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(765)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(766)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(767)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(768)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(771)
				Float w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(772)
				Float h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(773)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - w1))) / Float((int)2)),((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25)),w1,h1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(775)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)4));
				HX_STACK_LINE(776)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(778)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)8));
				HX_STACK_LINE(779)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(781)
				if (((this->target != null()))){
					HX_STACK_LINE(783)
					w = (this->target->get_width() + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(784)
					h = (this->target->get_height() + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				}
				HX_STACK_LINE(786)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - w))) / Float((int)2)),((Float(((this->height - h))) / Float((int)2)) - (h * 0.25)),w,h);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(787)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,this->width,this->height);
			}
			;break;
			default: {
				HX_STACK_LINE(789)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::update( ){
{
		HX_STACK_PUSH("FlxCamera::update","flixel/FlxCamera.hx",566);
		HX_STACK_THIS(this);
		HX_STACK_LINE(567)
		if ((::flixel::FlxG_obj::paused)){
			HX_STACK_LINE(568)
			return null();
		}
		HX_STACK_LINE(574)
		if (((this->target != null()))){
			HX_STACK_LINE(575)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(578)
				::flixel::util::FlxPoint point = this->target->getMidpoint(this->_point);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(578)
				this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
			}
			else{
				HX_STACK_LINE(582)
				Float edge;		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(583)
				Float targetX = this->target->x;		HX_STACK_VAR(targetX,"targetX");
				HX_STACK_LINE(584)
				Float targetY = this->target->y;		HX_STACK_VAR(targetY,"targetY");
				HX_STACK_LINE(586)
				if (((this->style == (int)4))){
					HX_STACK_LINE(588)
					if (((targetX > (this->scroll->x + this->width)))){
						HX_STACK_LINE(590)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(590)
						_g->set_x((_g->x + this->width));
					}
					else{
						HX_STACK_LINE(592)
						if (((targetX < this->scroll->x))){
							HX_STACK_LINE(594)
							::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(594)
							_g->set_x((_g->x - this->width));
						}
					}
					HX_STACK_LINE(597)
					if (((targetY > (this->scroll->y + this->height)))){
						HX_STACK_LINE(599)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(599)
						_g->set_y((_g->y + this->height));
					}
					else{
						HX_STACK_LINE(601)
						if (((targetY < this->scroll->y))){
							HX_STACK_LINE(603)
							::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(603)
							_g->set_y((_g->y - this->height));
						}
					}
				}
				else{
					HX_STACK_LINE(608)
					edge = (targetX - this->deadzone->x);
					HX_STACK_LINE(609)
					if (((this->_scrollTarget->x > edge))){
						HX_STACK_LINE(610)
						this->_scrollTarget->set_x(edge);
					}
					HX_STACK_LINE(613)
					edge = (((targetX + this->target->get_width()) - this->deadzone->x) - this->deadzone->width);
					HX_STACK_LINE(614)
					if (((this->_scrollTarget->x < edge))){
						HX_STACK_LINE(615)
						this->_scrollTarget->set_x(edge);
					}
					HX_STACK_LINE(619)
					edge = (targetY - this->deadzone->y);
					HX_STACK_LINE(620)
					if (((this->_scrollTarget->y > edge))){
						HX_STACK_LINE(621)
						this->_scrollTarget->set_y(edge);
					}
					HX_STACK_LINE(624)
					edge = (((targetY + this->target->get_height()) - this->deadzone->y) - this->deadzone->height);
					HX_STACK_LINE(625)
					if (((this->_scrollTarget->y < edge))){
						HX_STACK_LINE(626)
						this->_scrollTarget->set_y(edge);
					}
				}
				HX_STACK_LINE(631)
				if (((bool((this->followLead != null())) && bool(::Std_obj::is(this->target,hx::ClassOf< ::flixel::FlxSprite >()))))){
					HX_STACK_LINE(633)
					if (((this->_lastTargetPosition == null()))){
						HX_STACK_LINE(634)
						this->_lastTargetPosition = ::flixel::util::FlxPoint_obj::__new(this->target->x,this->target->y);
					}
					HX_STACK_LINE(637)
					{
						HX_STACK_LINE(637)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(637)
						_g->set_x((_g->x + (((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x)));
					}
					HX_STACK_LINE(638)
					{
						HX_STACK_LINE(638)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(638)
						_g->set_y((_g->y + (((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y)));
					}
					HX_STACK_LINE(640)
					this->_lastTargetPosition->set_x(this->target->x);
					HX_STACK_LINE(641)
					this->_lastTargetPosition->set_y(this->target->y);
				}
				HX_STACK_LINE(645)
				if (((this->followLerp == (int)0))){
					HX_STACK_LINE(647)
					this->scroll->set_x(this->_scrollTarget->x);
					HX_STACK_LINE(648)
					this->scroll->set_y(this->_scrollTarget->y);
				}
				else{
					HX_STACK_LINE(651)
					{
						HX_STACK_LINE(651)
						::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(651)
						_g->set_x((_g->x + (Float((((this->_scrollTarget->x - this->scroll->x)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
					}
					HX_STACK_LINE(652)
					{
						HX_STACK_LINE(652)
						::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(652)
						_g->set_y((_g->y + (Float((((this->_scrollTarget->y - this->scroll->y)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
					}
				}
			}
		}
		HX_STACK_LINE(659)
		if (((this->bounds != null()))){
			HX_STACK_LINE(661)
			if (((this->scroll->x < this->bounds->get_left()))){
				HX_STACK_LINE(662)
				this->scroll->set_x(this->bounds->get_left());
			}
			HX_STACK_LINE(665)
			if (((this->scroll->x > (this->bounds->get_right() - this->width)))){
				HX_STACK_LINE(666)
				this->scroll->set_x((this->bounds->get_right() - this->width));
			}
			HX_STACK_LINE(669)
			if (((this->scroll->y < this->bounds->get_top()))){
				HX_STACK_LINE(670)
				this->scroll->set_y(this->bounds->get_top());
			}
			HX_STACK_LINE(673)
			if (((this->scroll->y > (this->bounds->get_bottom() - this->height)))){
				HX_STACK_LINE(674)
				this->scroll->set_y((this->bounds->get_bottom() - this->height));
			}
		}
		HX_STACK_LINE(680)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(682)
			hx::SubEq(this->_fxFlashAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(683)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(684)
				this->_fxFlashComplete();
			}
		}
		HX_STACK_LINE(690)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(691)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(694)
				hx::SubEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(695)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(697)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(698)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(699)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(706)
				hx::AddEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(707)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(709)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(710)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(711)
						this->_fxFadeComplete();
					}
				}
			}
		}
		HX_STACK_LINE(719)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(721)
			hx::SubEq(this->_fxShakeDuration,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(722)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(724)
				this->_fxShakeOffset->set(null(),null());
				HX_STACK_LINE(725)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(726)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(733)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","flixel/FlxCamera.hx",735);
							{
								HX_STACK_LINE(735)
								::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(735)
								if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(735)
									hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(735)
								return ::flixel::util::FlxRandom_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(734)
					this->_fxShakeOffset->set_x(((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->width) * (int)2) - (this->_fxShakeIntensity * this->width))) * this->zoom));
				}
				HX_STACK_LINE(737)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","flixel/FlxCamera.hx",739);
							{
								HX_STACK_LINE(739)
								::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(739)
								if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(739)
									hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(739)
								return ::flixel::util::FlxRandom_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(738)
					this->_fxShakeOffset->set_y(((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->height) * (int)2) - (this->_fxShakeIntensity * this->height))) * this->zoom));
				}
			}
			HX_STACK_LINE(744)
			if (((this->target != null()))){
				HX_STACK_LINE(746)
				this->_flashSprite->set_x((this->x + this->_flashOffsetX));
				HX_STACK_LINE(747)
				this->_flashSprite->set_y((this->y + this->_flashOffsetY));
			}
		}
	}
return null();
}


Void FlxCamera_obj::destroy( ){
{
		HX_STACK_PUSH("FlxCamera::destroy","flixel/FlxCamera.hx",509);
		HX_STACK_THIS(this);
		HX_STACK_LINE(517)
		this->target = null();
		HX_STACK_LINE(518)
		this->scroll = null();
		HX_STACK_LINE(519)
		this->deadzone = null();
		HX_STACK_LINE(520)
		this->bounds = null();
		HX_STACK_LINE(525)
		this->_flashRect = null();
		HX_STACK_LINE(526)
		this->_flashPoint = null();
		HX_STACK_LINE(527)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(528)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(529)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(530)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(543)
		this->_flashSprite->removeChild(this->_canvas);
		HX_STACK_LINE(544)
		int canvasNumChildren = this->_canvas->get_numChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(545)
			while(((_g1 < _g))){
				HX_STACK_LINE(545)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(547)
				this->_canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(549)
		this->_canvas = null();
		HX_STACK_LINE(551)
		this->clearDrawStack();
		HX_STACK_LINE(553)
		this->_headOfDrawStack->dispose();
		HX_STACK_LINE(554)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(555)
		this->_currentStackItem = null();
		HX_STACK_LINE(557)
		this->_flashSprite = null();
		HX_STACK_LINE(559)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::render( ){
{
		HX_STACK_PUSH("FlxCamera::render","flixel/FlxCamera.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_LINE(357)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(358)
		while(((currItem != null()))){
			HX_STACK_LINE(360)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(361)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(362)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(363)
			if (((position > (int)0))){
				HX_STACK_LINE(365)
				if (((dataLen != position))){
					HX_STACK_LINE(366)
					data->length = position;
				}
				HX_STACK_LINE(369)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(371)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(372)
				if ((currItem->colored)){
					HX_STACK_LINE(373)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(376)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(383)
				currItem->graphics->get_tilesheet()->tileSheet->drawTiles(this->_canvas->get_graphics(),data,(bool(this->antialiasing) || bool(currItem->antialiasing)),tempFlags);
				HX_STACK_LINE(384)
				(::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(386)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_PUSH("FlxCamera::clearDrawStack","flixel/FlxCamera.hx",331);
		HX_STACK_THIS(this);
		HX_STACK_LINE(332)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(333)
		while(((currItem != null()))){
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				currItem->graphics = null();
				HX_STACK_LINE(335)
				currItem->initialized = false;
				HX_STACK_LINE(335)
				currItem->antialiasing = false;
				HX_STACK_LINE(335)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(336)
			::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(337)
			currItem = currItem->next;
			HX_STACK_LINE(338)
			if (((::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(340)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(341)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(345)
				newStorageHead->next = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(346)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(350)
			_this->graphics = null();
			HX_STACK_LINE(350)
			_this->initialized = false;
			HX_STACK_LINE(350)
			_this->antialiasing = false;
			HX_STACK_LINE(350)
			_this->position = (int)0;
		}
		HX_STACK_LINE(351)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(352)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

::flixel::system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_PUSH("FlxCamera::getDrawStackItem","flixel/FlxCamera.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjGraphics,"ObjGraphics");
	HX_STACK_ARG(ObjColored,"ObjColored");
	HX_STACK_ARG(ObjBlending,"ObjBlending");
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing");
{
		HX_STACK_LINE(271)
		::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(272)
		if (((this->_currentStackItem->initialized == false))){
			HX_STACK_LINE(274)
			this->_headOfDrawStack = this->_currentStackItem;
			HX_STACK_LINE(275)
			this->_currentStackItem->graphics = ObjGraphics;
			HX_STACK_LINE(276)
			this->_currentStackItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(278)
			this->_currentStackItem->colored = ObjColored;
			HX_STACK_LINE(279)
			this->_currentStackItem->blending = ObjBlending;
			HX_STACK_LINE(283)
			itemToReturn = this->_currentStackItem;
		}
		else{
			HX_STACK_LINE(286)
			if (((bool((bool((bool((this->_currentStackItem->graphics == ObjGraphics)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending)))) && bool((this->_currentStackItem->antialiasing == ObjAntialiasing))))){
				HX_STACK_LINE(294)
				itemToReturn = this->_currentStackItem;
			}
		}
		HX_STACK_LINE(298)
		if (((itemToReturn == null()))){
			HX_STACK_LINE(300)
			::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(301)
			if (((::flixel::FlxCamera_obj::_storageHead != null()))){
				HX_STACK_LINE(303)
				newItem = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(304)
				::flixel::system::layer::DrawStackItem newHead = ::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(305)
				newItem->next = null();
				HX_STACK_LINE(306)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(309)
				newItem = ::flixel::system::layer::DrawStackItem_obj::__new();
			}
			HX_STACK_LINE(313)
			newItem->graphics = ObjGraphics;
			HX_STACK_LINE(314)
			newItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(316)
			newItem->colored = ObjColored;
			HX_STACK_LINE(317)
			newItem->blending = ObjBlending;
			HX_STACK_LINE(321)
			this->_currentStackItem->next = newItem;
			HX_STACK_LINE(322)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(323)
			itemToReturn = this->_currentStackItem;
		}
		HX_STACK_LINE(326)
		itemToReturn->initialized = true;
		HX_STACK_LINE(327)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

Float FlxCamera_obj::defaultZoom;

::flixel::system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_MARK_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_MARK_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_VISIT_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_VISIT_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"followAdjust") ) { return followAdjust_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { return _flashSprite; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { return _flashOffsetY; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { return _flashOffsetX; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		if (HX_FIELD_EQ(inName,"getContainerSprite") ) { return getContainerSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_useBgAlphaBlending") ) { return set_useBgAlphaBlending_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { _flashSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { _flashOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { _flashOffsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { if (inCallProp) return set_useBgAlphaBlending(inValue);useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useBgAlphaBlending"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashOffsetY"));
	outFields->push(HX_CSTRING("_flashOffsetX"));
	outFields->push(HX_CSTRING("_flashSprite"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("_storageHead"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("set_useBgAlphaBlending"),
	HX_CSTRING("useBgAlphaBlending"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("fill"),
	HX_CSTRING("getContainerSprite"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("set_color"),
	HX_CSTRING("color"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("angle"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("zoom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("followAdjust"),
	HX_CSTRING("follow"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("render"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashOffsetY"),
	HX_CSTRING("_flashOffsetX"),
	HX_CSTRING("_flashSprite"),
	HX_CSTRING("_point"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bounds"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("followLead"),
	HX_CSTRING("target"),
	HX_CSTRING("style"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCamera_obj::__boot()
{
}

} // end namespace flixel
