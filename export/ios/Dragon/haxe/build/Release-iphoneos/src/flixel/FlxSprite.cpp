#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_PUSH("FlxSprite::new","flixel/FlxSprite.hx",31);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(168)
	this->_angleChanged = false;
	HX_STACK_LINE(167)
	this->_cosAngle = (int)1;
	HX_STACK_LINE(166)
	this->_sinAngle = (int)0;
	HX_STACK_LINE(155)
	this->useColorTransform = false;
	HX_STACK_LINE(130)
	this->_facingMult = (int)1;
	HX_STACK_LINE(129)
	this->_blue = 1.0;
	HX_STACK_LINE(128)
	this->_green = 1.0;
	HX_STACK_LINE(127)
	this->_red = 1.0;
	HX_STACK_LINE(117)
	this->color = (int)16777215;
	HX_STACK_LINE(111)
	this->_blendInt = (int)0;
	HX_STACK_LINE(98)
	this->antialiasing = false;
	HX_STACK_LINE(69)
	this->alpha = 1.0;
	HX_STACK_LINE(184)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(186)
	this->set_facing((int)16);
	HX_STACK_LINE(188)
	if (((SimpleGraphic == null()))){
		HX_STACK_LINE(189)
		SimpleGraphic = HX_CSTRING("flixel/img/logo/default.png");
	}
	HX_STACK_LINE(192)
	this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::display::BlendMode FlxSprite_obj::set_blend( ::flash::display::BlendMode Value){
	HX_STACK_PUSH("FlxSprite::set_blend","flixel/FlxSprite.hx",1498);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1500)
	if (((Value != null()))){
		HX_STACK_LINE(1501)
		{
			::flash::display::BlendMode _switch_1 = (Value);
			switch((_switch_1)->GetIndex()){
				case 7: {
					HX_STACK_LINE(1504)
					this->_blendInt = (int)65536;
				}
				;break;
				case 2: {
					HX_STACK_LINE(1507)
					this->_blendInt = (int)131072;
				}
				;break;
				case 3: {
					HX_STACK_LINE(1509)
					this->_blendInt = (int)262144;
				}
				;break;
				default: {
					HX_STACK_LINE(1512)
					this->_blendInt = (int)0;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(1517)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1521)
	this->_blend = Value;
	HX_STACK_LINE(1522)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flash::display::BlendMode FlxSprite_obj::get_blend( ){
	HX_STACK_PUSH("FlxSprite::get_blend","flixel/FlxSprite.hx",1493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1493)
	return this->_blend;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_blend,return )

::flixel::util::FlxPoint FlxSprite_obj::set_scale( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_scale","flixel/FlxSprite.hx",1487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1488)
	this->_scale = Value;
	HX_STACK_LINE(1489)
	return this->scale = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_scale,return )

::flixel::util::FlxPoint FlxSprite_obj::set_offset( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_offset","flixel/FlxSprite.hx",1481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1482)
	this->_offset = Value;
	HX_STACK_LINE(1483)
	return this->offset = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_offset,return )

::flixel::util::FlxPoint FlxSprite_obj::set_origin( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_origin","flixel/FlxSprite.hx",1475);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1476)
	this->_origin = Value;
	HX_STACK_LINE(1477)
	return this->origin = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_origin,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_PUSH("FlxSprite::set_angle","flixel/FlxSprite.hx",1469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1470)
	this->_angleChanged = (bool((this->angle != Value)) || bool(this->_angleChanged));
	HX_STACK_LINE(1471)
	return this->super::set_angle(Value);
}


::flash::geom::ColorTransform FlxSprite_obj::get_colorTransform( ){
	HX_STACK_PUSH("FlxSprite::get_colorTransform","flixel/FlxSprite.hx",1464);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1464)
	return this->_colorTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_colorTransform,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_PUSH("FlxSprite::set_color","flixel/FlxSprite.hx",1444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1445)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1446)
	if (((this->color == Color))){
		HX_STACK_LINE(1447)
		return Color;
	}
	HX_STACK_LINE(1450)
	this->color = Color;
	HX_STACK_LINE(1451)
	this->updateColorTransform();
	HX_STACK_LINE(1454)
	this->_red = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1455)
	this->_green = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1456)
	this->_blue = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1457)
	this->isColored = (this->color < (int)16777215);
	HX_STACK_LINE(1460)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxSprite::set_alpha","flixel/FlxSprite.hx",1425);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_LINE(1426)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1427)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1430)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1431)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1434)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1435)
		return this->alpha;
	}
	HX_STACK_LINE(1438)
	this->alpha = Alpha;
	HX_STACK_LINE(1439)
	this->updateColorTransform();
	HX_STACK_LINE(1440)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_PUSH("FlxSprite::set_facing","flixel/FlxSprite.hx",1412);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1413)
	if (((this->facing != Direction))){
		HX_STACK_LINE(1414)
		this->dirty = true;
	}
	HX_STACK_LINE(1417)
	this->facing = Direction;
	HX_STACK_LINE(1419)
	this->_facingMult = (  (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))) ? int((int)-1) : int((int)1) );
	HX_STACK_LINE(1421)
	return Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

::flixel::system::layer::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::system::layer::frames::FlxFrame Value){
	HX_STACK_PUSH("FlxSprite::set_frame","flixel/FlxSprite.hx",1396);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1397)
	this->frame = Value;
	HX_STACK_LINE(1398)
	if (((this->frame != null()))){
		HX_STACK_LINE(1400)
		{
			HX_STACK_LINE(1400)
			this->frameWidth = ::Std_obj::_int(this->frame->sourceSize->x);
			HX_STACK_LINE(1400)
			this->frameHeight = ::Std_obj::_int(this->frame->sourceSize->y);
			HX_STACK_LINE(1400)
			{
				HX_STACK_LINE(1400)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(1400)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(1400)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(1400)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(1401)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1403)
		if (((bool((bool((this->framesData != null())) && bool((this->framesData->frames != null())))) && bool((this->framesData->frames->length > (int)0))))){
			HX_STACK_LINE(1405)
			this->frame = this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(1406)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1408)
	return this->frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

::flash::display::BitmapData FlxSprite_obj::set_pixels( ::flash::display::BitmapData Pixels){
	HX_STACK_PUSH("FlxSprite::set_pixels","flixel/FlxSprite.hx",1358);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Pixels,"Pixels");
	HX_STACK_LINE(1359)
	::String key = ::flixel::FlxG_obj::bitmap->getCacheKeyFor(Pixels);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1361)
	if (((key == null()))){
		HX_STACK_LINE(1363)
		key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
		HX_STACK_LINE(1364)
		::flixel::FlxG_obj::bitmap->add(Pixels,false,key);
	}
	HX_STACK_LINE(1367)
	this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->get(key));
	HX_STACK_LINE(1369)
	if (((this->region == null()))){
		HX_STACK_LINE(1370)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(1374)
	this->region->startX = (int)0;
	HX_STACK_LINE(1375)
	this->region->startY = (int)0;
	HX_STACK_LINE(1376)
	this->region->tileWidth = (int)0;
	HX_STACK_LINE(1377)
	this->region->tileHeight = (int)0;
	HX_STACK_LINE(1378)
	this->region->spacingX = (int)0;
	HX_STACK_LINE(1379)
	this->region->spacingY = (int)0;
	HX_STACK_LINE(1380)
	this->region->width = this->cachedGraphics->bitmap->get_width();
	HX_STACK_LINE(1381)
	this->region->height = this->cachedGraphics->bitmap->get_height();
	HX_STACK_LINE(1383)
	this->set_width(this->frameWidth = this->cachedGraphics->bitmap->get_width());
	HX_STACK_LINE(1384)
	this->set_height(this->frameHeight = this->cachedGraphics->bitmap->get_height());
	HX_STACK_LINE(1385)
	this->animation->destroyAnimations();
	HX_STACK_LINE(1387)
	this->updateFrameData();
	HX_STACK_LINE(1388)
	this->resetHelpers();
	HX_STACK_LINE(1390)
	this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(1392)
	return Pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flash::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_PUSH("FlxSprite::get_pixels","flixel/FlxSprite.hx",1353);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1353)
	return this->cachedGraphics->bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

bool FlxSprite_obj::simpleRenderSprite( ){
	HX_STACK_PUSH("FlxSprite::simpleRenderSprite","flixel/FlxSprite.hx",1341);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1341)
	return (bool((bool(((bool((bool((this->angle == (int)0)) && bool((this->frame->additionalAngle == (int)0)))) || bool((this->bakedRotation > (int)0))))) && bool((this->_scale->x == (int)1)))) && bool((this->_scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,simpleRenderSprite,return )

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameBitmapDatas","flixel/FlxSprite.hx",1332);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1332)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

::flash::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_PUSH("FlxSprite::getFlxFrameBitmapData","flixel/FlxSprite.hx",1310);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1311)
	::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
	HX_STACK_LINE(1312)
	if (((this->frame != null()))){
		HX_STACK_LINE(1313)
		if (((bool((this->facing == (int)1)) && bool((this->flipped > (int)0))))){
			HX_STACK_LINE(1315)
			frameBmd = this->frame->getHReversedBitmap();
		}
		else{
			HX_STACK_LINE(1319)
			frameBmd = this->frame->getBitmap();
		}
	}
	HX_STACK_LINE(1324)
	return frameBmd;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxSprite::updateFrameData","flixel/FlxSprite.hx",1286);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1287)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1288)
			return null();
		}
		HX_STACK_LINE(1292)
		if (((bool((this->cachedGraphics->data != null())) && bool(((bool((this->region->tileWidth == (int)0)) && bool((this->region->tileHeight == (int)0)))))))){
			HX_STACK_LINE(1293)
			this->framesData = this->cachedGraphics->get_tilesheet()->getTexturePackerFrames(this->cachedGraphics->data,null(),null());
		}
		else{
			HX_STACK_LINE(1297)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());
		}
		HX_STACK_LINE(1301)
		this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
		HX_STACK_LINE(1302)
		this->frames = this->framesData->frames->length;
		HX_STACK_LINE(1303)
		{
			HX_STACK_LINE(1303)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(1303)
			this->set_height(this->frameHeight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFrameData,(void))

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxSprite::calcFrame","flixel/FlxSprite.hx",1251);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(1254)
		if ((AreYouSure)){
			HX_STACK_LINE(1257)
			if (((this->frame != null()))){
				HX_STACK_LINE(1259)
				if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->frameWidth)))) || bool((this->framePixels->get_height() != this->frameHeight))))){
					HX_STACK_LINE(1261)
					if (((this->framePixels != null()))){
						HX_STACK_LINE(1262)
						this->framePixels->dispose();
					}
					HX_STACK_LINE(1264)
					this->framePixels = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->frame->sourceSize->x),::Std_obj::_int(this->frame->sourceSize->y),null(),null(),null());
				}
				struct _Function_3_1{
					inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite_obj *__this){
						HX_STACK_PUSH("*::closure","flixel/FlxSprite.hx",1267);
						{
							HX_STACK_LINE(1267)
							::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
							HX_STACK_LINE(1267)
							if (((__this->frame != null()))){
								HX_STACK_LINE(1267)
								if (((bool((__this->facing == (int)1)) && bool((__this->flipped > (int)0))))){
									HX_STACK_LINE(1267)
									frameBmd = __this->frame->getHReversedBitmap();
								}
								else{
									HX_STACK_LINE(1267)
									frameBmd = __this->frame->getBitmap();
								}
							}
							HX_STACK_LINE(1267)
							return frameBmd;
						}
						return null();
					}
				};
				HX_STACK_LINE(1267)
				this->framePixels->copyPixels(_Function_3_1::Block(this),this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			HX_STACK_LINE(1270)
			if ((this->useColorTransform)){
				HX_STACK_LINE(1271)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
		}
		HX_STACK_LINE(1278)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_PUSH("FlxSprite::pixelsOverlapPoint","flixel/FlxSprite.hx",1215);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Mask,"Mask");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1216)
		if (((Camera == null()))){
			HX_STACK_LINE(1217)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1220)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1221)
		this->_point->set_x((this->_point->x - this->_offset->x));
		HX_STACK_LINE(1222)
		this->_point->set_y((this->_point->y - this->_offset->y));
		HX_STACK_LINE(1223)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1224)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1229)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1230)
			return false;
		}
		else{
			struct _Function_2_1{
				inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/FlxSprite.hx",1235);
					{
						HX_STACK_LINE(1235)
						::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
						HX_STACK_LINE(1235)
						if (((__this->frame != null()))){
							HX_STACK_LINE(1235)
							if (((bool((__this->facing == (int)1)) && bool((__this->flipped > (int)0))))){
								HX_STACK_LINE(1235)
								frameBmd = __this->frame->getHReversedBitmap();
							}
							else{
								HX_STACK_LINE(1235)
								frameBmd = __this->frame->getBitmap();
							}
						}
						HX_STACK_LINE(1235)
						return frameBmd;
					}
					return null();
				}
			};
			HX_STACK_LINE(1235)
			::flash::display::BitmapData frameData = _Function_2_1::Block(this);		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1236)
			int pixelColor = frameData->getPixel32(::Std_obj::_int(this->_flashPoint->x),::Std_obj::_int(this->_flashPoint->y));		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1237)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1238)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(1229)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

bool FlxSprite_obj::overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxSprite::overlapsPoint","flixel/FlxSprite.hx",1185);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1186)
		if (((bool((this->_scale->x == (int)1)) && bool((this->_scale->y == (int)1))))){
			HX_STACK_LINE(1187)
			return this->super::overlapsPoint(point,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1191)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1192)
			return (bool((bool((bool((point->x > (this->x - ((0.5 * this->get_width()) * ((this->_scale->x - (int)1)))))) && bool((point->x < ((this->x + this->get_width()) + ((0.5 * this->get_width()) * ((this->_scale->x - (int)1)))))))) && bool((point->y > (this->y - ((0.5 * this->get_height()) * ((this->_scale->y - (int)1)))))))) && bool((point->y < ((this->y + this->get_height()) + ((0.5 * this->get_height()) * ((this->_scale->y - (int)1)))))));
		}
		HX_STACK_LINE(1196)
		if (((Camera == null()))){
			HX_STACK_LINE(1197)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1200)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1201)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1202)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1203)
		return (bool((bool((bool((X > (this->_point->x - ((0.5 * this->get_width()) * ((this->_scale->x - (int)1)))))) && bool((X < ((this->_point->x + this->get_width()) + ((0.5 * this->get_width()) * ((this->_scale->x - (int)1)))))))) && bool((Y > (this->_point->y - ((0.5 * this->get_height()) * ((this->_scale->y - (int)1)))))))) && bool((Y < ((this->_point->y + this->get_height()) + ((0.5 * this->get_height()) * ((this->_scale->y - (int)1)))))));
	}
}


bool FlxSprite_obj::onScreen( ::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreen","flixel/FlxSprite.hx",1109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(1110)
	if (((Camera == null()))){
		HX_STACK_LINE(1111)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1115)
	Float minX = ((this->x - this->_offset->x) - (Camera->scroll->x * this->_scrollFactor->x));		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1116)
	Float minY = ((this->y - this->_offset->y) - (Camera->scroll->y * this->_scrollFactor->y));		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1117)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1118)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1120)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->_scale->x == (int)1)))) && bool((this->_scale->y == (int)1))))){
		HX_STACK_LINE(1122)
		maxX = (minX + this->frameWidth);
		HX_STACK_LINE(1123)
		maxY = (minY + this->frameHeight);
	}
	else{
		HX_STACK_LINE(1127)
		Float radiusX = this->_halfWidth;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1128)
		Float radiusY = this->_halfHeight;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1130)
		if (((this->_origin->x == this->_halfWidth))){
			HX_STACK_LINE(1131)
			radiusX = ::Math_obj::abs((this->_halfWidth * this->_scale->x));
		}
		else{
			HX_STACK_LINE(1136)
			Float sox = (this->_scale->x * this->_origin->x);		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1137)
			Float sfw = (this->_scale->x * this->frameWidth);		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1138)
			Float x1 = ::Math_obj::abs(sox);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1139)
			Float x2 = ::Math_obj::abs((sfw - sox));		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1140)
			radiusX = ::Math_obj::max(x2,x1);
		}
		HX_STACK_LINE(1143)
		if (((this->_origin->y == this->_halfHeight))){
			HX_STACK_LINE(1144)
			radiusY = ::Math_obj::abs((this->_halfHeight * this->_scale->y));
		}
		else{
			HX_STACK_LINE(1149)
			Float soy = (this->_scale->y * this->_origin->y);		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1150)
			Float sfh = (this->_scale->y * this->frameHeight);		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1151)
			Float y1 = ::Math_obj::abs(soy);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1152)
			Float y2 = ::Math_obj::abs((sfh - soy));		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1153)
			radiusY = ::Math_obj::max(y2,y1);
		}
		HX_STACK_LINE(1156)
		Float radius = ::Math_obj::max(radiusX,radiusY);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1157)
		hx::MultEq(radius,1.415);
		HX_STACK_LINE(1159)
		hx::AddEq(minX,this->_origin->x);
		HX_STACK_LINE(1160)
		maxX = (minX + radius);
		HX_STACK_LINE(1161)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1163)
		hx::AddEq(minY,this->_origin->y);
		HX_STACK_LINE(1164)
		maxY = (minY + radius);
		HX_STACK_LINE(1165)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1168)
	if (((bool((maxX < (int)0)) || bool((minX > Camera->width))))){
		HX_STACK_LINE(1169)
		return false;
	}
	HX_STACK_LINE(1171)
	if (((bool((maxY < (int)0)) || bool((minY > Camera->height))))){
		HX_STACK_LINE(1172)
		return false;
	}
	HX_STACK_LINE(1174)
	return true;
}


Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_PUSH("FlxSprite::updateColorTransform","flixel/FlxSprite.hx",1069);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1070)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(1072)
			if (((this->_colorTransform == null()))){
				HX_STACK_LINE(1073)
				this->_colorTransform = ::flash::geom::ColorTransform_obj::__new((Float(((int(this->color) >> int((int)16)))) / Float((int)255)),(Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this->color) & int((int)255)))) / Float((int)255)),this->alpha,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(1078)
				this->_colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
				HX_STACK_LINE(1079)
				this->_colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1080)
				this->_colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1081)
				this->_colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(1083)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(1087)
			if (((this->_colorTransform != null()))){
				HX_STACK_LINE(1089)
				this->_colorTransform->redMultiplier = (int)1;
				HX_STACK_LINE(1090)
				this->_colorTransform->greenMultiplier = (int)1;
				HX_STACK_LINE(1091)
				this->_colorTransform->blueMultiplier = (int)1;
				HX_STACK_LINE(1092)
				this->_colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(1095)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(1097)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

Void FlxSprite_obj::setColorTransformation( hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(1.0);
Float greenMultiplier = __o_greenMultiplier.Default(1.0);
Float blueMultiplier = __o_blueMultiplier.Default(1.0);
Float alphaMultiplier = __o_alphaMultiplier.Default(1.0);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
	HX_STACK_PUSH("FlxSprite::setColorTransformation","flixel/FlxSprite.hx",1044);
	HX_STACK_THIS(this);
	HX_STACK_ARG(redMultiplier,"redMultiplier");
	HX_STACK_ARG(greenMultiplier,"greenMultiplier");
	HX_STACK_ARG(blueMultiplier,"blueMultiplier");
	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier");
	HX_STACK_ARG(redOffset,"redOffset");
	HX_STACK_ARG(greenOffset,"greenOffset");
	HX_STACK_ARG(blueOffset,"blueOffset");
	HX_STACK_ARG(alphaOffset,"alphaOffset");
{
		HX_STACK_LINE(1045)
		this->set_color((int((int((int(::Std_obj::_int((redMultiplier * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((greenMultiplier * (int)255))) << int((int)8))))) | int(::Std_obj::_int((blueMultiplier * (int)255)))));
		HX_STACK_LINE(1046)
		this->set_alpha(alphaMultiplier);
		HX_STACK_LINE(1048)
		if (((this->_colorTransform == null()))){
			HX_STACK_LINE(1049)
			this->_colorTransform = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(1054)
			this->_colorTransform->redMultiplier = redMultiplier;
			HX_STACK_LINE(1055)
			this->_colorTransform->greenMultiplier = greenMultiplier;
			HX_STACK_LINE(1056)
			this->_colorTransform->blueMultiplier = blueMultiplier;
			HX_STACK_LINE(1057)
			this->_colorTransform->alphaMultiplier = alphaMultiplier;
			HX_STACK_LINE(1058)
			this->_colorTransform->redOffset = redOffset;
			HX_STACK_LINE(1059)
			this->_colorTransform->greenOffset = greenOffset;
			HX_STACK_LINE(1060)
			this->_colorTransform->blueOffset = blueOffset;
			HX_STACK_LINE(1061)
			this->_colorTransform->alphaOffset = alphaOffset;
		}
		HX_STACK_LINE(1064)
		this->useColorTransform = (bool((bool((bool((bool((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215)))) || bool((redOffset != (int)0)))) || bool((greenOffset != (int)0)))) || bool((blueOffset != (int)0)))) || bool((alphaOffset != (int)0)));
		HX_STACK_LINE(1065)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransformation,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_PUSH("FlxSprite::replaceColor","flixel/FlxSprite.hx",997);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(NewColor,"NewColor");
	HX_STACK_ARG(FetchPositions,"FetchPositions");
{
		HX_STACK_LINE(998)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(999)
		if ((FetchPositions)){
			HX_STACK_LINE(1000)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(1004)
		int row = this->region->startY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1005)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1006)
		int rows = this->region->height;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1007)
		int columns = this->region->width;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1008)
		this->cachedGraphics->bitmap->lock();
		HX_STACK_LINE(1009)
		while(((row < rows))){
			HX_STACK_LINE(1011)
			column = this->region->startX;
			HX_STACK_LINE(1012)
			while(((column < columns))){
				HX_STACK_LINE(1014)
				if (((this->cachedGraphics->bitmap->getPixel32(column,row) == Color))){
					HX_STACK_LINE(1016)
					this->cachedGraphics->bitmap->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1017)
					if ((FetchPositions)){
						HX_STACK_LINE(1018)
						positions->push(::flixel::util::FlxPoint_obj::__new(column,row));
					}
					HX_STACK_LINE(1021)
					this->dirty = true;
				}
				HX_STACK_LINE(1023)
				(column)++;
			}
			HX_STACK_LINE(1025)
			(row)++;
		}
		HX_STACK_LINE(1027)
		this->cachedGraphics->bitmap->unlock(null());
		HX_STACK_LINE(1028)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
		HX_STACK_LINE(1029)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_PUSH("FlxSprite::centerOffsets","flixel/FlxSprite.hx",979);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AdjustPosition,"AdjustPosition");
{
		HX_STACK_LINE(980)
		this->_offset->set_x((((this->frameWidth - this->get_width())) * 0.5));
		HX_STACK_LINE(981)
		this->_offset->set_y((((this->frameHeight - this->get_height())) * 0.5));
		HX_STACK_LINE(982)
		if ((AdjustPosition)){
			HX_STACK_LINE(984)
			{
				HX_STACK_LINE(984)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(984)
				_g->set_x((_g->x + this->_offset->x));
			}
			HX_STACK_LINE(985)
			{
				HX_STACK_LINE(985)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(985)
				_g->set_y((_g->y + this->_offset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::drawFrame","flixel/FlxSprite.hx",963);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(963)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSprite::stamp","flixel/FlxSprite.hx",917);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Brush,"Brush");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(918)
		{
			HX_STACK_LINE(918)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(918)
			Brush->calcFrame(true);
		}
		HX_STACK_LINE(919)
		::flash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(922)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotation > (int)0))))) && bool((Brush->_scale->x == (int)1)))) && bool((Brush->_scale->y == (int)1)))) && bool((Brush->_blend == null()))))){
			HX_STACK_LINE(924)
			this->_flashPoint->x = (X + this->region->startX);
			HX_STACK_LINE(925)
			this->_flashPoint->y = (Y + this->region->startY);
			HX_STACK_LINE(926)
			this->_flashRect2->width = bitmapData->get_width();
			HX_STACK_LINE(927)
			this->_flashRect2->height = bitmapData->get_height();
			HX_STACK_LINE(928)
			this->cachedGraphics->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(929)
			this->_flashRect2->width = this->cachedGraphics->bitmap->get_width();
			HX_STACK_LINE(930)
			this->_flashRect2->height = this->cachedGraphics->bitmap->get_height();
			HX_STACK_LINE(932)
			this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
			HX_STACK_LINE(937)
			return null();
		}
		HX_STACK_LINE(941)
		this->_matrix->identity();
		HX_STACK_LINE(942)
		this->_matrix->translate(-(Brush->_origin->x),-(Brush->_origin->y));
		HX_STACK_LINE(943)
		this->_matrix->scale(Brush->_scale->x,Brush->_scale->y);
		HX_STACK_LINE(944)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(945)
			this->_matrix->rotate((Brush->angle * ::flixel::util::FlxAngle_obj::TO_RAD));
		}
		HX_STACK_LINE(948)
		this->_matrix->translate(((X + this->region->startX) + Brush->_origin->x),((Y + this->region->startY) + Brush->_origin->y));
		HX_STACK_LINE(949)
		::flash::display::BlendMode brushBlend = Brush->_blend;		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(950)
		this->cachedGraphics->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(951)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_PUSH("FlxSprite::draw","flixel/FlxSprite.hx",730);
		HX_STACK_THIS(this);
		HX_STACK_LINE(731)
		if ((this->dirty)){
			HX_STACK_LINE(732)
			this->calcFrame(null());
		}
		HX_STACK_LINE(736)
		if (((this->cameras == null()))){
			HX_STACK_LINE(737)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(742)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(743)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(744)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(749)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(750)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(753)
		bool isSimpleRender = this->simpleRenderSprite();		HX_STACK_VAR(isSimpleRender,"isSimpleRender");
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(755)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->cameras;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(755)
			while(((_g < _g1->length))){
				HX_STACK_LINE(755)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(755)
				++(_g);
				HX_STACK_LINE(757)
				if (((bool((bool(!(camera->visible)) || bool(!(camera->exists)))) || bool(!(this->onScreen(camera)))))){
					HX_STACK_LINE(758)
					continue;
				}
				HX_STACK_LINE(764)
				drawItem = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,this->antialiasing);
				HX_STACK_LINE(768)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(769)
				currIndex = drawItem->position;
				HX_STACK_LINE(771)
				this->_point->set_x(((this->x - (camera->scroll->x * this->_scrollFactor->x)) - this->_offset->x));
				HX_STACK_LINE(772)
				this->_point->set_y(((this->y - (camera->scroll->y * this->_scrollFactor->y)) - this->_offset->y));
				HX_STACK_LINE(774)
				this->_point->set_x((this->_point->x + this->_origin->x));
				HX_STACK_LINE(775)
				this->_point->set_y((this->_point->y + this->_origin->y));
				HX_STACK_LINE(806)
				Float csx = this->_facingMult;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(807)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(808)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(809)
				Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(811)
				Float x1 = (this->_origin->x - this->frame->center->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(812)
				Float y1 = (this->_origin->y - this->frame->center->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(814)
				Float x2 = x1;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(815)
				Float y2 = y1;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(818)
				Float a = csx;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(819)
				Float b = ssx;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(820)
				Float c = ssy;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(821)
				Float d = csy;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(823)
				if ((!(isSimpleRender))){
					HX_STACK_LINE(825)
					if ((this->_angleChanged)){
						HX_STACK_LINE(827)
						Float radians = (-(this->angle) * ::flixel::util::FlxAngle_obj::TO_RAD);		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(828)
						this->_sinAngle = ::Math_obj::sin(radians);
						HX_STACK_LINE(829)
						this->_cosAngle = ::Math_obj::cos(radians);
						HX_STACK_LINE(830)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(833)
					Float sx = (this->_scale->x * this->_facingMult);		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(835)
					if ((this->frame->rotated)){
						HX_STACK_LINE(837)
						cos = -(this->_sinAngle);
						HX_STACK_LINE(838)
						sin = this->_cosAngle;
						HX_STACK_LINE(840)
						csx = (cos * sx);
						HX_STACK_LINE(841)
						ssy = (sin * this->_scale->y);
						HX_STACK_LINE(842)
						ssx = (sin * sx);
						HX_STACK_LINE(843)
						csy = (cos * this->_scale->y);
						HX_STACK_LINE(845)
						x2 = ((x1 * ssx) - (y1 * csy));
						HX_STACK_LINE(846)
						y2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(848)
						a = csy;
						HX_STACK_LINE(849)
						b = ssy;
						HX_STACK_LINE(850)
						c = ssx;
						HX_STACK_LINE(851)
						d = csx;
					}
					else{
						HX_STACK_LINE(855)
						cos = this->_cosAngle;
						HX_STACK_LINE(856)
						sin = this->_sinAngle;
						HX_STACK_LINE(858)
						csx = (cos * sx);
						HX_STACK_LINE(859)
						ssy = (sin * this->_scale->y);
						HX_STACK_LINE(860)
						ssx = (sin * sx);
						HX_STACK_LINE(861)
						csy = (cos * this->_scale->y);
						HX_STACK_LINE(863)
						x2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(864)
						y2 = ((-(x1) * ssx) + (y1 * csy));
						HX_STACK_LINE(866)
						a = csx;
						HX_STACK_LINE(867)
						b = ssx;
						HX_STACK_LINE(868)
						c = ssy;
						HX_STACK_LINE(869)
						d = csy;
					}
				}
				else{
					HX_STACK_LINE(873)
					x2 = (x1 * csx);
				}
				HX_STACK_LINE(877)
				currDrawData[(currIndex)++] = (this->_point->x - x2);
				HX_STACK_LINE(878)
				currDrawData[(currIndex)++] = (this->_point->y - y2);
				HX_STACK_LINE(880)
				currDrawData[(currIndex)++] = this->frame->tileID;
				HX_STACK_LINE(882)
				currDrawData[(currIndex)++] = a;
				HX_STACK_LINE(883)
				currDrawData[(currIndex)++] = -(b);
				HX_STACK_LINE(884)
				currDrawData[(currIndex)++] = c;
				HX_STACK_LINE(885)
				currDrawData[(currIndex)++] = d;
				HX_STACK_LINE(888)
				if ((this->isColored)){
					HX_STACK_LINE(890)
					currDrawData[(currIndex)++] = this->_red;
					HX_STACK_LINE(891)
					currDrawData[(currIndex)++] = this->_green;
					HX_STACK_LINE(892)
					currDrawData[(currIndex)++] = this->_blue;
				}
				HX_STACK_LINE(894)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(901)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxSprite_obj::update( ){
{
		HX_STACK_PUSH("FlxSprite::update","flixel/FlxSprite.hx",721);
		HX_STACK_THIS(this);
		HX_STACK_LINE(722)
		this->super::update();
		HX_STACK_LINE(723)
		this->animation->update();
	}
return null();
}


Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxSprite::resetHelpers","flixel/FlxSprite.hx",699);
		HX_STACK_THIS(this);
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(700)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(700)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(700)
			this->_flashRect->height = this->frameHeight;
		}
		HX_STACK_LINE(701)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(702)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(703)
		this->_flashRect2->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(704)
		this->_flashRect2->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(705)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(716)
		this->_halfWidth = (this->frameWidth * 0.5);
		HX_STACK_LINE(717)
		this->_halfHeight = (this->frameHeight * 0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_PUSH("FlxSprite::updateHitbox","flixel/FlxSprite.hx",685);
		HX_STACK_THIS(this);
		HX_STACK_LINE(686)
		Float newWidth = (this->scale->x * this->frameWidth);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(687)
		Float newHeight = (this->scale->y * this->frameHeight);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(689)
		this->set_width(newWidth);
		HX_STACK_LINE(690)
		this->set_height(newHeight);
		HX_STACK_LINE(691)
		this->offset->set(-(((((newWidth - this->frameWidth)) * 0.5))),-(((((newHeight - this->frameHeight)) * 0.5))));
		HX_STACK_LINE(692)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::setGraphicDimensions( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_UpdateHitbox){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool UpdateHitbox = __o_UpdateHitbox.Default(true);
	HX_STACK_PUSH("FlxSprite::setGraphicDimensions","flixel/FlxSprite.hx",658);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateHitbox,"UpdateHitbox");
{
		HX_STACK_LINE(659)
		if (((bool((Width <= (int)0)) && bool((Height <= (int)0))))){
			HX_STACK_LINE(659)
			return null();
		}
		HX_STACK_LINE(663)
		Float newScaleX = (Float(Width) / Float(this->frameWidth));		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(664)
		Float newScaleY = (Float(Height) / Float(this->frameHeight));		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(665)
		this->scale->set(newScaleX,newScaleY);
		HX_STACK_LINE(667)
		if (((Width <= (int)0))){
			HX_STACK_LINE(667)
			this->scale->set_x(newScaleY);
		}
		else{
			HX_STACK_LINE(670)
			if (((Height <= (int)0))){
				HX_STACK_LINE(670)
				this->scale->set_y(newScaleX);
			}
		}
		HX_STACK_LINE(674)
		if ((UpdateHitbox)){
			HX_STACK_LINE(675)
			this->updateHitbox();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setGraphicDimensions,(void))

Void FlxSprite_obj::setOriginToCenter( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCenter","flixel/FlxSprite.hx",645);
		HX_STACK_THIS(this);
		HX_STACK_LINE(645)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCenter,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_PUSH("FlxSprite::resetSizeFromFrame","flixel/FlxSprite.hx",635);
		HX_STACK_THIS(this);
		HX_STACK_LINE(636)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(637)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameSize","flixel/FlxSprite.hx",625);
		HX_STACK_THIS(this);
		HX_STACK_LINE(626)
		this->frameWidth = ::Std_obj::_int(this->frame->sourceSize->x);
		HX_STACK_LINE(627)
		this->frameHeight = ::Std_obj::_int(this->frame->sourceSize->y);
		HX_STACK_LINE(628)
		{
			HX_STACK_LINE(628)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(628)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(628)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(628)
			this->_flashRect->height = this->frameHeight;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetSize","flixel/FlxSprite.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(615)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(616)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(617)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(618)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

::flixel::FlxSprite FlxSprite_obj::loadRotatedImageFromTexture( Dynamic Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedImageFromTexture","flixel/FlxSprite.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Image,"Image");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
{
		HX_STACK_LINE(591)
		::flixel::FlxSprite temp = this->loadImageFromTexture(Data,null(),null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(593)
		if (((temp == null()))){
			HX_STACK_LINE(594)
			return null();
		}
		HX_STACK_LINE(598)
		this->animation->set_frameName(Image);
		HX_STACK_LINE(601)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(607)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedImageFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::loadImageFromTexture( Dynamic Data,hx::Null< bool >  __o_Reverse,hx::Null< bool >  __o_Unique,::String FrameName){
bool Reverse = __o_Reverse.Default(false);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadImageFromTexture","flixel/FlxSprite.hx",537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(FrameName,"FrameName");
{
		HX_STACK_LINE(538)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(540)
		if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(542)
			this->set_cachedGraphics(Data);
			HX_STACK_LINE(543)
			if (((this->cachedGraphics->data == null()))){
				HX_STACK_LINE(544)
				return null();
			}
		}
		else{
			HX_STACK_LINE(548)
			if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::TexturePackerData >()))){
				HX_STACK_LINE(550)
				this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(Data->__Field(HX_CSTRING("assetName"),true),Unique,null()));
				HX_STACK_LINE(551)
				this->cachedGraphics->data = Data;
			}
			else{
				HX_STACK_LINE(554)
				return null();
			}
		}
		HX_STACK_LINE(558)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(559)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(560)
		this->region->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(562)
		this->flipped = (  (((Reverse == true))) ? int(this->cachedGraphics->bitmap->get_width()) : int((int)0) );
		HX_STACK_LINE(564)
		this->animation->destroyAnimations();
		HX_STACK_LINE(565)
		this->updateFrameData();
		HX_STACK_LINE(566)
		this->resetHelpers();
		HX_STACK_LINE(568)
		if (((FrameName != null()))){
			HX_STACK_LINE(569)
			this->animation->set_frameName(FrameName);
		}
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(573)
			this->set_height(this->frameHeight);
		}
		HX_STACK_LINE(574)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(575)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadImageFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::makeGraphic","flixel/FlxSprite.hx",513);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(514)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(515)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key));
		HX_STACK_LINE(516)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(517)
		this->region->width = Width;
		HX_STACK_LINE(518)
		this->region->height = Height;
		HX_STACK_LINE(519)
		this->set_width(this->frameWidth = this->cachedGraphics->bitmap->get_width());
		HX_STACK_LINE(520)
		this->set_height(this->frameHeight = this->cachedGraphics->bitmap->get_height());
		HX_STACK_LINE(521)
		this->animation->destroyAnimations();
		HX_STACK_LINE(522)
		this->updateFrameData();
		HX_STACK_LINE(523)
		this->resetHelpers();
		HX_STACK_LINE(524)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedGraphic","flixel/FlxSprite.hx",364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(366)
		int rows = ::Std_obj::_int(::Math_obj::sqrt(Rotations));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(367)
		::flash::display::BitmapData brush = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key)->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(368)
		bool isRegion = ::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(369)
		::flixel::util::loaders::TextureRegion spriteRegion = (  (((isRegion == true))) ? ::flixel::util::loaders::TextureRegion(Graphic) : ::flixel::util::loaders::TextureRegion(null()) );		HX_STACK_VAR(spriteRegion,"spriteRegion");
		HX_STACK_LINE(370)
		::flixel::system::layer::Region tempRegion = (  (((isRegion == true))) ? ::flixel::system::layer::Region(spriteRegion->region) : ::flixel::system::layer::Region(null()) );		HX_STACK_VAR(tempRegion,"tempRegion");
		HX_STACK_LINE(372)
		if (((bool((Frame >= (int)0)) || bool(isRegion)))){
			HX_STACK_LINE(375)
			::flash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(377)
			if ((isRegion)){
				HX_STACK_LINE(379)
				brush = ::flash::display::BitmapData_obj::__new(tempRegion->width,tempRegion->height,null(),null(),null());
				HX_STACK_LINE(380)
				this->_flashRect->x = tempRegion->startX;
				HX_STACK_LINE(381)
				this->_flashRect->y = tempRegion->startY;
				HX_STACK_LINE(382)
				this->_flashRect->width = tempRegion->width;
				HX_STACK_LINE(383)
				this->_flashRect->height = tempRegion->height;
				HX_STACK_LINE(384)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			else{
				HX_STACK_LINE(388)
				brush = ::flash::display::BitmapData_obj::__new(full->get_height(),full->get_height(),null(),null(),null());
				HX_STACK_LINE(389)
				int rx = (Frame * brush->get_width());		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(390)
				int ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(391)
				int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
				HX_STACK_LINE(392)
				if (((rx >= fw))){
					HX_STACK_LINE(394)
					ry = (::Std_obj::_int((Float(rx) / Float(fw))) * brush->get_height());
					HX_STACK_LINE(395)
					hx::ModEq(rx,fw);
				}
				HX_STACK_LINE(397)
				this->_flashRect->x = rx;
				HX_STACK_LINE(398)
				this->_flashRect->y = ry;
				HX_STACK_LINE(399)
				this->_flashRect->width = brush->get_width();
				HX_STACK_LINE(400)
				this->_flashRect->height = brush->get_height();
				HX_STACK_LINE(401)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
		}
		HX_STACK_LINE(405)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(406)
		if (((brush->get_height() > max))){
			HX_STACK_LINE(407)
			max = brush->get_height();
		}
		HX_STACK_LINE(411)
		if ((AutoBuffer)){
			HX_STACK_LINE(412)
			max = ::Std_obj::_int((max * 1.5));
		}
		HX_STACK_LINE(416)
		int columns = ::Math_obj::ceil((Float(Rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(417)
		this->set_width((max * columns));
		HX_STACK_LINE(418)
		this->set_height((max * rows));
		HX_STACK_LINE(419)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(420)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(421)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(424)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(425)
				key = ::Type_obj::getClassName(Graphic);
			}
			else{
				HX_STACK_LINE(428)
				if (((bool(::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >())) && bool((Key != null()))))){
					HX_STACK_LINE(429)
					key = Key;
				}
				else{
					HX_STACK_LINE(432)
					if ((isRegion)){
						HX_STACK_LINE(434)
						key = spriteRegion->data->key;
						HX_STACK_LINE(435)
						hx::AddEq(key,(((((((((HX_CSTRING(":") + tempRegion->startX) + HX_CSTRING(":")) + tempRegion->startY) + HX_CSTRING(":")) + tempRegion->width) + HX_CSTRING(":")) + tempRegion->height) + HX_CSTRING(":")) + Rotations));
					}
					else{
						HX_STACK_LINE(438)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(442)
		if ((!(isRegion))){
			HX_STACK_LINE(443)
			hx::AddEq(key,(((((((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + this->get_width()) + HX_CSTRING("x")) + this->get_height()) + HX_CSTRING(":")) + Rotations));
		}
		HX_STACK_LINE(447)
		bool skipGen = ::flixel::FlxG_obj::bitmap->checkCache(key);		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(448)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->create(((::Std_obj::_int(this->get_width()) + columns) - (int)1),((::Std_obj::_int(this->get_height()) + rows) - (int)1),(int)0,true,key));
		HX_STACK_LINE(449)
		this->bakedRotation = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(452)
		if ((!(skipGen))){
			HX_STACK_LINE(454)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(455)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(456)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(457)
			int halfBrushWidth = ::Std_obj::_int((brush->get_width() * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(458)
			int halfBrushHeight = ::Std_obj::_int((brush->get_height() * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(459)
			int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(460)
			int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(461)
			while(((row < rows))){
				HX_STACK_LINE(463)
				column = (int)0;
				HX_STACK_LINE(464)
				while(((column < columns))){
					HX_STACK_LINE(466)
					this->_matrix->identity();
					HX_STACK_LINE(467)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(468)
					this->_matrix->rotate((bakedAngle * ::flixel::util::FlxAngle_obj::TO_RAD));
					HX_STACK_LINE(469)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(470)
					hx::AddEq(bakedAngle,this->bakedRotation);
					HX_STACK_LINE(471)
					this->cachedGraphics->bitmap->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(472)
					(column)++;
				}
				HX_STACK_LINE(474)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(475)
				(row)++;
			}
		}
		HX_STACK_LINE(478)
		this->frameWidth = this->frameHeight = max;
		HX_STACK_LINE(479)
		this->set_width(this->set_height(max));
		HX_STACK_LINE(481)
		this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,max,max,(int)1,(int)1,null(),null());
		HX_STACK_LINE(482)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(483)
		this->region->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(486)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(489)
		this->updateFrameData();
		HX_STACK_LINE(490)
		this->resetHelpers();
		HX_STACK_LINE(492)
		if ((AutoBuffer)){
			HX_STACK_LINE(494)
			this->set_width(brush->get_width());
			HX_STACK_LINE(495)
			this->set_height(brush->get_height());
			HX_STACK_LINE(496)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(499)
		this->animation->createPrerotated(null());
		HX_STACK_LINE(500)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< bool >  __o_Reverse,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
bool Reverse = __o_Reverse.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadGraphic","flixel/FlxSprite.hx",304);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Animated,"Animated");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(305)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(306)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key));
		HX_STACK_LINE(308)
		this->flipped = (  (((Reverse == true))) ? int(this->cachedGraphics->bitmap->get_width()) : int((int)0) );
		HX_STACK_LINE(310)
		if (((Width == (int)0))){
			HX_STACK_LINE(311)
			Width = (  (((Animated == true))) ? int(this->cachedGraphics->bitmap->get_height()) : int(this->cachedGraphics->bitmap->get_width()) );
		}
		HX_STACK_LINE(315)
		if (((Height == (int)0))){
			HX_STACK_LINE(316)
			Height = (  (((Animated == true))) ? int(Width) : int(this->cachedGraphics->bitmap->get_height()) );
		}
		HX_STACK_LINE(320)
		if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(322)
			this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,Width,Height,null(),null(),null(),null());
			HX_STACK_LINE(323)
			this->region->width = this->cachedGraphics->bitmap->get_width();
			HX_STACK_LINE(324)
			this->region->height = this->cachedGraphics->bitmap->get_height();
		}
		else{
			HX_STACK_LINE(328)
			this->region = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();
			HX_STACK_LINE(330)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(331)
				Width = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(333)
				this->region->tileWidth = this->region->width;
			}
			HX_STACK_LINE(335)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(336)
				Height = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(338)
				this->region->tileHeight = this->region->height;
			}
		}
		HX_STACK_LINE(341)
		this->set_width(this->frameWidth = Width);
		HX_STACK_LINE(342)
		this->set_height(this->frameHeight = Height);
		HX_STACK_LINE(344)
		this->animation->destroyAnimations();
		HX_STACK_LINE(346)
		this->updateFrameData();
		HX_STACK_LINE(347)
		this->resetHelpers();
		HX_STACK_LINE(349)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadfromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxSprite::loadfromSprite","flixel/FlxSprite.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(266)
	if ((!(this->exists))){
		HX_STACK_LINE(267)
		::flixel::FlxG_obj::log->warn(((HX_CSTRING("Warning, trying to clone ") + ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)))) + HX_CSTRING(" object that doesn't exist.")));
	}
	HX_STACK_LINE(271)
	this->region = Sprite->region->clone();
	HX_STACK_LINE(272)
	this->flipped = Sprite->flipped;
	HX_STACK_LINE(273)
	this->bakedRotation = Sprite->bakedRotation;
	HX_STACK_LINE(274)
	this->set_cachedGraphics(Sprite->cachedGraphics);
	HX_STACK_LINE(276)
	this->set_width(this->frameWidth = Sprite->frameWidth);
	HX_STACK_LINE(277)
	this->set_height(this->frameHeight = Sprite->frameHeight);
	HX_STACK_LINE(278)
	if (((this->bakedRotation > (int)0))){
		HX_STACK_LINE(280)
		this->set_width(Sprite->get_width());
		HX_STACK_LINE(281)
		this->set_height(Sprite->get_height());
		HX_STACK_LINE(282)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(285)
	this->updateFrameData();
	HX_STACK_LINE(286)
	this->resetHelpers();
	HX_STACK_LINE(287)
	this->antialiasing = Sprite->antialiasing;
	HX_STACK_LINE(288)
	this->animation->copyFrom(Sprite->animation);
	HX_STACK_LINE(289)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadfromSprite,return )

::flixel::FlxSprite FlxSprite_obj::clone( ::flixel::FlxSprite NewSprite){
	HX_STACK_PUSH("FlxSprite::clone","flixel/FlxSprite.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(NewSprite,"NewSprite");
	HX_STACK_LINE(249)
	if (((NewSprite == null()))){
		HX_STACK_LINE(250)
		NewSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	}
	HX_STACK_LINE(254)
	NewSprite->loadfromSprite(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(255)
	return NewSprite;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,clone,return )

Void FlxSprite_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSprite::destroy","flixel/FlxSprite.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_LINE(217)
		this->super::destroy();
		HX_STACK_LINE(219)
		if (((this->animation != null()))){
			HX_STACK_LINE(220)
			this->animation->destroy();
		}
		HX_STACK_LINE(223)
		this->animation = null();
		HX_STACK_LINE(225)
		this->_flashPoint = null();
		HX_STACK_LINE(226)
		this->_flashRect = null();
		HX_STACK_LINE(227)
		this->_flashRect2 = null();
		HX_STACK_LINE(228)
		this->_flashPointZero = null();
		HX_STACK_LINE(229)
		this->set_offset(null());
		HX_STACK_LINE(230)
		this->set_origin(null());
		HX_STACK_LINE(231)
		this->set_scale(null());
		HX_STACK_LINE(232)
		this->_matrix = null();
		HX_STACK_LINE(233)
		this->_colorTransform = null();
		HX_STACK_LINE(234)
		if (((this->framePixels != null()))){
			HX_STACK_LINE(235)
			this->framePixels->dispose();
		}
		HX_STACK_LINE(238)
		this->framePixels = null();
		HX_STACK_LINE(242)
		this->_blend = null();
		HX_STACK_LINE(244)
		this->set_frame(null());
	}
return null();
}


Void FlxSprite_obj::initVars( ){
{
		HX_STACK_PUSH("FlxSprite::initVars","flixel/FlxSprite.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		this->super::initVars();
		HX_STACK_LINE(199)
		this->animation = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(201)
		this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(202)
		this->_flashRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(203)
		this->_flashRect2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(204)
		this->_flashPointZero = ::flash::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(205)
		this->set_offset(::flixel::util::FlxPoint_obj::__new(null(),null()));
		HX_STACK_LINE(206)
		this->set_origin(::flixel::util::FlxPoint_obj::__new(null(),null()));
		HX_STACK_LINE(207)
		this->set_scale(::flixel::util::FlxPoint_obj::__new((int)1,(int)1));
		HX_STACK_LINE(208)
		this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	}
return null();
}



FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_origin,"_origin");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_facingMult,"_facingMult");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(animation,"animation");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_origin,"_origin");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_facingMult,"_facingMult");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return get_pixels(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_origin") ) { return _origin; }
		if (HX_FIELD_EQ(inName,"_offset") ) { return _offset; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_offset") ) { return set_offset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_facingMult") ) { return _facingMult; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { return bakedRotation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"loadfromSprite") ) { return loadfromSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setOriginToCenter") ) { return setOriginToCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"simpleRenderSprite") ) { return simpleRenderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphicDimensions") ) { return setGraphicDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImageFromTexture") ) { return loadImageFromTexture_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resetFrameBitmapDatas") ) { return resetFrameBitmapDatas_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setColorTransformation") ) { return setColorTransformation_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"loadRotatedImageFromTexture") ) { return loadRotatedImageFromTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return set_frame(inValue);frame=inValue.Cast< ::flixel::system::layer::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp) return set_offset(inValue);offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp) return set_origin(inValue);origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return set_pixels(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { _origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isColored") ) { isColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingMult") ) { _facingMult=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { bakedRotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_origin"));
	outFields->push(HX_CSTRING("_offset"));
	outFields->push(HX_CSTRING("_angleChanged"));
	outFields->push(HX_CSTRING("_cosAngle"));
	outFields->push(HX_CSTRING("_sinAngle"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("useColorTransform"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_facingMult"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("isColored"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("facing"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("bakedRotation"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("animation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("set_offset"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("simpleRenderSprite"),
	HX_CSTRING("resetFrameBitmapDatas"),
	HX_CSTRING("getFlxFrameBitmapData"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("setColorTransformation"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("stamp"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("updateHitbox"),
	HX_CSTRING("setGraphicDimensions"),
	HX_CSTRING("setOriginToCenter"),
	HX_CSTRING("resetSizeFromFrame"),
	HX_CSTRING("resetFrameSize"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("loadRotatedImageFromTexture"),
	HX_CSTRING("loadImageFromTexture"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadfromSprite"),
	HX_CSTRING("clone"),
	HX_CSTRING("destroy"),
	HX_CSTRING("initVars"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_origin"),
	HX_CSTRING("_offset"),
	HX_CSTRING("_angleChanged"),
	HX_CSTRING("_cosAngle"),
	HX_CSTRING("_sinAngle"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("useColorTransform"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_facingMult"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("isColored"),
	HX_CSTRING("color"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_blend"),
	HX_CSTRING("dirty"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("flipped"),
	HX_CSTRING("facing"),
	HX_CSTRING("alpha"),
	HX_CSTRING("bakedRotation"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("frame"),
	HX_CSTRING("animation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSprite_obj::__boot()
{
}

} // end namespace flixel
