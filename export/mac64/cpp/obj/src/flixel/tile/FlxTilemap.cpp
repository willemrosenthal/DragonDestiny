#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_PUSH("FlxTilemap::new","flixel/tile/FlxTilemap.hx",33);
{
	HX_STACK_LINE(114)
	this->_randomLambda = null();
	HX_STACK_LINE(109)
	this->_randomChoices = null();
	HX_STACK_LINE(108)
	this->_randomIndices = null();
	HX_STACK_LINE(92)
	this->customTileRemap = null();
	HX_STACK_LINE(79)
	this->tileScaleHack = 1.01;
	HX_STACK_LINE(58)
	this->scaleY = 1.0;
	HX_STACK_LINE(57)
	this->scaleX = 1.0;
	HX_STACK_LINE(199)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(201)
	this->collisionType = ::flixel::system::FlxCollisionType_obj::TILEMAP;
	HX_STACK_LINE(203)
	this->_auto = (int)0;
	HX_STACK_LINE(204)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(205)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(206)
	this->totalTiles = (int)0;
	HX_STACK_LINE(207)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(208)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(209)
	this->_flashRect = null();
	HX_STACK_LINE(210)
	this->_data = null();
	HX_STACK_LINE(211)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(212)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(220)
	this->_rectIDs = null();
	HX_STACK_LINE(222)
	this->_tileObjects = null();
	HX_STACK_LINE(223)
	this->set_immovable(true);
	HX_STACK_LINE(224)
	this->set_moves(false);
	HX_STACK_LINE(225)
	this->cameras = null();
	HX_STACK_LINE(235)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(238)
	this->_helperPoint = ::flash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Float FlxTilemap_obj::set_scaleY( Float Scale){
	HX_STACK_PUSH("FlxTilemap::set_scaleY","flixel/tile/FlxTilemap.hx",2584);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_LINE(2585)
	Scale = ::Math_obj::abs(Scale);
	HX_STACK_LINE(2586)
	this->scaleY = Scale;
	HX_STACK_LINE(2587)
	this->_scaledTileHeight = (this->_tileHeight * Scale);
	HX_STACK_LINE(2588)
	this->set_height((this->heightInTiles * this->_scaledTileHeight));
	HX_STACK_LINE(2590)
	if (((this->cameras != null()))){
		HX_STACK_LINE(2592)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2593)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2594)
		while(((i < l))){
			HX_STACK_LINE(2596)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
				HX_STACK_LINE(2597)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateRows(this->_tileHeight,this->heightInTiles,Scale,this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >());
			}
			HX_STACK_LINE(2600)
			(i)++;
		}
	}
	HX_STACK_LINE(2604)
	return Scale;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_scaleY,return )

Float FlxTilemap_obj::set_scaleX( Float Scale){
	HX_STACK_PUSH("FlxTilemap::set_scaleX","flixel/tile/FlxTilemap.hx",2560);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_LINE(2561)
	Scale = ::Math_obj::abs(Scale);
	HX_STACK_LINE(2562)
	this->scaleX = Scale;
	HX_STACK_LINE(2563)
	this->_scaledTileWidth = (this->_tileWidth * Scale);
	HX_STACK_LINE(2564)
	this->set_width((this->widthInTiles * this->_scaledTileWidth));
	HX_STACK_LINE(2566)
	if (((this->cameras != null()))){
		HX_STACK_LINE(2568)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2569)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2570)
		while(((i < l))){
			HX_STACK_LINE(2572)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
				HX_STACK_LINE(2573)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateColumns(this->_tileWidth,this->widthInTiles,Scale,this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >());
			}
			HX_STACK_LINE(2576)
			(i)++;
		}
	}
	HX_STACK_LINE(2580)
	return Scale;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_scaleX,return )

bool FlxTilemap_obj::set_forceComplexRender( bool Value){
	HX_STACK_PUSH("FlxTilemap::set_forceComplexRender","flixel/tile/FlxTilemap.hx",2541);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(2542)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(2543)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(2545)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(2547)
		i = (int)0;
		HX_STACK_LINE(2548)
		l = this->_buffers->length;
		HX_STACK_LINE(2550)
		{
			HX_STACK_LINE(2550)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2550)
			while(((_g < l))){
				HX_STACK_LINE(2550)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2552)
				this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->forceComplexRender = Value;
			}
		}
	}
	HX_STACK_LINE(2556)
	return this->super::set_forceComplexRender(Value);
}


Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_PUSH("FlxTilemap::updateBuffers","flixel/tile/FlxTilemap.hx",2520);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2521)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2522)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2524)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(2526)
			i = (int)0;
			HX_STACK_LINE(2527)
			l = this->_buffers->length;
			HX_STACK_LINE(2529)
			{
				HX_STACK_LINE(2529)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2529)
				while(((_g < l))){
					HX_STACK_LINE(2529)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2531)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(2534)
			this->_buffers = null();
		}
		HX_STACK_LINE(2537)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_PUSH("FlxTilemap::tileToFlxSprite","flixel/tile/FlxTilemap.hx",2461);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(NewTile,"NewTile");
{
		HX_STACK_LINE(2462)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(2464)
		::flash::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2470)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2472)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(2478)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * ((this->_tileWidth + this->region->spacingX)));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(2479)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(2481)
			if (((rx >= this->region->width))){
				HX_STACK_LINE(2483)
				ry = (::Std_obj::_int((Float(rx) / Float(this->region->width))) * ((this->_tileHeight + this->region->spacingY)));
				HX_STACK_LINE(2484)
				hx::ModEq(rx,this->region->width);
			}
			HX_STACK_LINE(2487)
			rect = ::flash::geom::Rectangle_obj::__new((rx + this->region->startX),(ry + this->region->startY),this->_tileWidth,this->_tileHeight);
		}
		HX_STACK_LINE(2492)
		::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2493)
		::flixel::FlxSprite tileSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(2494)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(2495)
		tileSprite->set_x(((X * this->_tileWidth) + this->x));
		HX_STACK_LINE(2496)
		tileSprite->set_y(((Y * this->_tileHeight) + this->y));
		HX_STACK_LINE(2497)
		tileSprite->scale->set_x(this->scaleX);
		HX_STACK_LINE(2498)
		tileSprite->scale->set_y(this->scaleY);
		HX_STACK_LINE(2500)
		if (((rect != null()))){
			HX_STACK_LINE(2501)
			tileSprite->get_pixels()->copyPixels(this->cachedGraphics->bitmap,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(2505)
		tileSprite->dirty = true;
		HX_STACK_LINE(2506)
		tileSprite->updateFrameData();
		HX_STACK_LINE(2508)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(2509)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(2513)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxTilemap::updateFrameData","flixel/tile/FlxTilemap.hx",2434);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2434)
		if (((bool((bool((this->cachedGraphics != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(2437)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,::flash::geom::Point_obj::__new((int)0,(int)0));
			HX_STACK_LINE(2439)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(2440)
			::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(2442)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2444)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(2445)
				this->updateTile((i)++);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateFrameData,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::updateTile","flixel/tile/FlxTilemap.hx",2400);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(2401)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2403)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(2408)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2411)
			return null();
		}
		HX_STACK_LINE(2425)
		this->_rectIDs[Index] = this->framesData->frames->__get((this->_data->__get(Index) - this->_startingIndex)).StaticCast< ::flixel::system::layer::frames::FlxFrame >()->tileID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::autoTile","flixel/tile/FlxTilemap.hx",2337);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(2338)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(2339)
			return null();
		}
		HX_STACK_LINE(2343)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(2346)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2347)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(2351)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(2352)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(2356)
		if (((bool((::Std_obj::_int((Index + this->widthInTiles)) >= this->totalTiles)) || bool((this->_data->__get((Index + this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2357)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(2361)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(2362)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(2367)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			HX_STACK_LINE(2370)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2371)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2375)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2376)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2380)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2381)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(2385)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2386)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2391)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::flixel::util::FlxPoint FlxTilemap_obj::rayHit( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::rayHit","flixel/tile/FlxTilemap.hx",2031);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(2032)
		::flixel::util::FlxPoint Result = null();		HX_STACK_VAR(Result,"Result");
		HX_STACK_LINE(2033)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(2035)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(2036)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(2040)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(2041)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(2042)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(2043)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(2044)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(2045)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(2046)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(2047)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(2048)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(2049)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(2050)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(2051)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2053)
		while(((i < steps))){
			HX_STACK_LINE(2055)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(2056)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(2058)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->get_width())))) || bool((curY < (int)0)))) || bool((curY > this->get_height()))))){
				HX_STACK_LINE(2060)
				(i)++;
				HX_STACK_LINE(2061)
				continue;
			}
			HX_STACK_LINE(2064)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));
			HX_STACK_LINE(2065)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));
			HX_STACK_LINE(2067)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(2070)
				hx::MultEq(tileX,::Std_obj::_int(this->_scaledTileWidth));
				HX_STACK_LINE(2071)
				hx::MultEq(tileY,::Std_obj::_int(this->_scaledTileHeight));
				HX_STACK_LINE(2072)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(2073)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(2074)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(2075)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(2076)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(2079)
				q = tileX;
				HX_STACK_LINE(2081)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(2082)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(2086)
				rx = q;
				HX_STACK_LINE(2087)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(2089)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(2091)
					if (((Result == null()))){
						HX_STACK_LINE(2092)
						Result = ::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(2096)
					Result->set_x(rx);
					HX_STACK_LINE(2097)
					Result->set_y(ry);
					HX_STACK_LINE(2098)
					return Result;
				}
				HX_STACK_LINE(2102)
				q = tileY;
				HX_STACK_LINE(2104)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(2105)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(2109)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(2110)
				ry = q;
				HX_STACK_LINE(2112)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(2114)
					if (((Result == null()))){
						HX_STACK_LINE(2115)
						Result = ::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(2119)
					Result->set_x(rx);
					HX_STACK_LINE(2120)
					Result->set_y(ry);
					HX_STACK_LINE(2121)
					return Result;
				}
				HX_STACK_LINE(2124)
				return null();
			}
			HX_STACK_LINE(2127)
			(i)++;
		}
		HX_STACK_LINE(2130)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,rayHit,return )

bool FlxTilemap_obj::ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::ray","flixel/tile/FlxTilemap.hx",1917);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Result,"Result");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1918)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1920)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(1921)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(1925)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1926)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1927)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1928)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1929)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1930)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1931)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1932)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1933)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1934)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1935)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1936)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1938)
		while(((i < steps))){
			HX_STACK_LINE(1940)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1941)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1943)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->get_width())))) || bool((curY < (int)0)))) || bool((curY > this->get_height()))))){
				HX_STACK_LINE(1945)
				(i)++;
				HX_STACK_LINE(1946)
				continue;
			}
			HX_STACK_LINE(1949)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));
			HX_STACK_LINE(1950)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));
			HX_STACK_LINE(1952)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1955)
				hx::MultEq(tileX,::Std_obj::_int(this->_scaledTileWidth));
				HX_STACK_LINE(1956)
				hx::MultEq(tileY,::Std_obj::_int(this->_scaledTileHeight));
				HX_STACK_LINE(1957)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1958)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1959)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1960)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1961)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1964)
				q = tileX;
				HX_STACK_LINE(1966)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1967)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(1971)
				rx = q;
				HX_STACK_LINE(1972)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1974)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(1976)
					if (((Result != null()))){
						HX_STACK_LINE(1978)
						Result->set_x(rx);
						HX_STACK_LINE(1979)
						Result->set_y(ry);
					}
					HX_STACK_LINE(1982)
					return false;
				}
				HX_STACK_LINE(1986)
				q = tileY;
				HX_STACK_LINE(1988)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1989)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(1993)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1994)
				ry = q;
				HX_STACK_LINE(1996)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(1998)
					if (((Result != null()))){
						HX_STACK_LINE(2000)
						Result->set_x(rx);
						HX_STACK_LINE(2001)
						Result->set_y(ry);
					}
					HX_STACK_LINE(2004)
					return false;
				}
				HX_STACK_LINE(2007)
				return true;
			}
			HX_STACK_LINE(2010)
			(i)++;
		}
		HX_STACK_LINE(2013)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::flixel::util::FlxRect Bounds){
	HX_STACK_PUSH("FlxTilemap::getBounds","flixel/tile/FlxTilemap.hx",1897);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Bounds,"Bounds");
	HX_STACK_LINE(1898)
	if (((Bounds == null()))){
		HX_STACK_LINE(1899)
		Bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	}
	struct _Function_1_1{
		inline static ::flixel::util::FlxRect Block( ::flixel::tile::FlxTilemap_obj *__this,::flixel::util::FlxRect &Bounds){
			HX_STACK_PUSH("*::closure","flixel/tile/FlxTilemap.hx",1903);
			{
				HX_STACK_LINE(1903)
				Bounds->x = __this->x;
				HX_STACK_LINE(1903)
				Bounds->y = __this->y;
				HX_STACK_LINE(1903)
				Bounds->width = __this->get_width();
				HX_STACK_LINE(1903)
				Bounds->height = __this->get_height();
				HX_STACK_LINE(1903)
				return Bounds;
			}
			return null();
		}
	};
	HX_STACK_LINE(1903)
	return _Function_1_1::Block(this,Bounds);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_PUSH("FlxTilemap::follow","flixel/tile/FlxTilemap.hx",1881);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Border,"Border");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(1882)
		if (((Camera == null()))){
			HX_STACK_LINE(1883)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1887)
		Camera->setBounds((this->x + (Border * this->_scaledTileWidth)),(this->y + (Border * this->_scaledTileHeight)),(this->get_width() - ((Border * this->_scaledTileWidth) * (int)2)),(this->get_height() - ((Border * this->_scaledTileHeight) * (int)2)),UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_PUSH("FlxTilemap::setTileProperties","flixel/tile/FlxTilemap.hx",1854);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(AllowCollisions,"AllowCollisions");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(CallbackFilter,"CallbackFilter");
	HX_STACK_ARG(Range,"Range");
{
		HX_STACK_LINE(1855)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1856)
			Range = (int)1;
		}
		HX_STACK_LINE(1860)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1861)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1862)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1864)
		while(((i < l))){
			HX_STACK_LINE(1866)
			tile = this->_tileObjects->__get((i)++).StaticCast< ::flixel::tile::FlxTile >();
			HX_STACK_LINE(1867)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1868)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1869)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTileByIndex","flixel/tile/FlxTilemap.hx",1793);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1794)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1795)
			return false;
		}
		HX_STACK_LINE(1799)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1800)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1802)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1803)
			return ok;
		}
		HX_STACK_LINE(1807)
		this->setDirty(null());
		HX_STACK_LINE(1809)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1811)
			this->updateTile(Index);
			HX_STACK_LINE(1812)
			return ok;
		}
		HX_STACK_LINE(1816)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1817)
		int row = (::Std_obj::_int((Float(Index) / Float(this->widthInTiles))) - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1818)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1819)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1820)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1822)
		while(((row < rowLength))){
			HX_STACK_LINE(1824)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1826)
			while(((column < columnHeight))){
				HX_STACK_LINE(1828)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1830)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1831)
					this->autoTile(i);
					HX_STACK_LINE(1832)
					this->updateTile(i);
				}
				HX_STACK_LINE(1834)
				(column)++;
			}
			HX_STACK_LINE(1837)
			(row)++;
		}
		HX_STACK_LINE(1840)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTile","flixel/tile/FlxTilemap.hx",1775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1776)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1777)
			return false;
		}
		HX_STACK_LINE(1781)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_PUSH("FlxTilemap::getTileCoords","flixel/tile/FlxTilemap.hx",1733);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Midpoint,"Midpoint");
{
		HX_STACK_LINE(1734)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1736)
		::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1737)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1738)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1740)
		while(((i < l))){
			HX_STACK_LINE(1742)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1744)
				point = ::flixel::util::FlxPoint_obj::__new((this->x + (::Std_obj::_int(hx::Mod(i,this->widthInTiles)) * this->_scaledTileWidth)),(this->y + (::Std_obj::_int((Float(i) / Float(this->widthInTiles))) * this->_scaledTileHeight)));
				HX_STACK_LINE(1746)
				if ((Midpoint)){
					HX_STACK_LINE(1748)
					{
						HX_STACK_LINE(1748)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1748)
						_g->set_x((_g->x + (this->_scaledTileWidth * 0.5)));
					}
					HX_STACK_LINE(1749)
					{
						HX_STACK_LINE(1749)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1749)
						_g->set_y((_g->y + (this->_scaledTileHeight * 0.5)));
					}
				}
				HX_STACK_LINE(1752)
				if (((array == null()))){
					HX_STACK_LINE(1753)
					array = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1756)
				array->push(point);
			}
			HX_STACK_LINE(1759)
			(i)++;
		}
		HX_STACK_LINE(1762)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileInstances","flixel/tile/FlxTilemap.hx",1703);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1704)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1705)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1706)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1708)
	while(((i < l))){
		HX_STACK_LINE(1710)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1712)
			if (((array == null()))){
				HX_STACK_LINE(1713)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1716)
			array->push(i);
		}
		HX_STACK_LINE(1719)
		(i)++;
	}
	HX_STACK_LINE(1722)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

int FlxTilemap_obj::getTileCollisions( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileCollisions","flixel/tile/FlxTilemap.hx",1692);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1692)
	return this->_tileObjects->__get(Index).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileCollisions,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileByIndex","flixel/tile/FlxTilemap.hx",1681);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1681)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_PUSH("FlxTilemap::getTile","flixel/tile/FlxTilemap.hx",1670);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_LINE(1670)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

bool FlxTilemap_obj::overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsPoint","flixel/tile/FlxTilemap.hx",1644);
	HX_STACK_THIS(this);
	HX_STACK_ARG(WorldPoint,"WorldPoint");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1645)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1646)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((WorldPoint->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - this->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1650)
		if (((Camera == null()))){
			HX_STACK_LINE(1651)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1655)
		WorldPoint->set_x((WorldPoint->x - Camera->scroll->x));
		HX_STACK_LINE(1656)
		WorldPoint->set_y((WorldPoint->y - Camera->scroll->y));
		HX_STACK_LINE(1657)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1659)
		return (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((WorldPoint->y - WorldPoint->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - WorldPoint->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
	}
}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsWithCallback","flixel/tile/FlxTilemap.hx",1528);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(1529)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(1531)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1532)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1534)
		if (((Position != null()))){
			HX_STACK_LINE(1536)
			X = Position->x;
			HX_STACK_LINE(1537)
			Y = Position->y;
		}
		HX_STACK_LINE(1541)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(1542)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(1543)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->get_width()) / Float(this->_scaledTileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(1544)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->get_height()) / Float(this->_scaledTileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(1547)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(1548)
			selectionX = (int)0;
		}
		HX_STACK_LINE(1551)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(1552)
			selectionY = (int)0;
		}
		HX_STACK_LINE(1555)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(1556)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(1559)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(1560)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(1565)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(1566)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1567)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1568)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1569)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(1570)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1571)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1573)
		while(((row < selectionHeight))){
			HX_STACK_LINE(1575)
			column = selectionX;
			HX_STACK_LINE(1577)
			while(((column < selectionWidth))){
				HX_STACK_LINE(1579)
				int dataIndex = this->_data->__get((rowStart + column));		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(1581)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(1583)
					(column)++;
					HX_STACK_LINE(1584)
					continue;
				}
				HX_STACK_LINE(1587)
				tile = this->_tileObjects->__get(dataIndex).StaticCast< ::flixel::tile::FlxTile >();
				HX_STACK_LINE(1588)
				tile->set_width(this->_scaledTileWidth);
				HX_STACK_LINE(1589)
				tile->set_height(this->_scaledTileHeight);
				HX_STACK_LINE(1590)
				tile->set_x((X + (column * tile->get_width())));
				HX_STACK_LINE(1591)
				tile->set_y((Y + (row * tile->get_height())));
				HX_STACK_LINE(1592)
				tile->last->set_x((tile->x - deltaX));
				HX_STACK_LINE(1593)
				tile->last->set_y((tile->y - deltaY));
				HX_STACK_LINE(1594)
				overlapFound = (bool((bool((bool(((Object->x + Object->get_width()) > tile->x)) && bool((Object->x < (tile->x + tile->get_width()))))) && bool(((Object->y + Object->get_height()) > tile->y)))) && bool((Object->y < (tile->y + tile->get_height()))));
				HX_STACK_LINE(1596)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(1597)
					if (((Callback != null()))){
						HX_STACK_LINE(1599)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(1601)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1605)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
				}
				HX_STACK_LINE(1611)
				if ((overlapFound)){
					HX_STACK_LINE(1613)
					if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(1615)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1616)
						tile->callbackFunction(tile,Object);
					}
					HX_STACK_LINE(1619)
					if (((tile->allowCollisions != (int)0))){
						HX_STACK_LINE(1620)
						results = true;
					}
				}
				HX_STACK_LINE(1625)
				(column)++;
			}
			HX_STACK_LINE(1628)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1629)
			(row)++;
		}
		HX_STACK_LINE(1632)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsAt","flixel/tile/FlxTilemap.hx",1460);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1461)
		::flixel::system::FlxCollisionType objType = ObjectOrGroup->collisionType;		HX_STACK_VAR(objType,"objType");
		HX_STACK_LINE(1462)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(1464)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
			HX_STACK_LINE(1465)
			objType = ::flixel::system::FlxCollisionType_obj::GROUP;
		}
		HX_STACK_LINE(1468)
		if (((objType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(1470)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1471)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1472)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1473)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1474)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1476)
			while(((i < grp->length))){
				HX_STACK_LINE(1478)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(1480)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1482)
					objType = basic->collisionType;
					HX_STACK_LINE(1483)
					if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
						HX_STACK_LINE(1485)
						this->_point->set_x(X);
						HX_STACK_LINE(1486)
						this->_point->set_y(Y);
						HX_STACK_LINE(1488)
						if ((this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(basic),null(),false,this->_point))){
							HX_STACK_LINE(1489)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1494)
						if ((this->overlapsAt(X,Y,basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1496)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1503)
			return results;
		}
		else{
			HX_STACK_LINE(1505)
			if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
				HX_STACK_LINE(1507)
				this->_point->set_x(X);
				HX_STACK_LINE(1508)
				this->_point->set_y(Y);
				HX_STACK_LINE(1510)
				return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point);
			}
		}
		HX_STACK_LINE(1513)
		return false;
	}
}


bool FlxTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlaps","flixel/tile/FlxTilemap.hx",1397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1398)
		::flixel::system::FlxCollisionType objType = ObjectOrGroup->collisionType;		HX_STACK_VAR(objType,"objType");
		HX_STACK_LINE(1399)
		if (((objType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(1401)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
			HX_STACK_LINE(1402)
			objType = ::flixel::system::FlxCollisionType_obj::GROUP;
		}
		HX_STACK_LINE(1405)
		if (((objType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(1407)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1408)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1409)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1410)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1411)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1413)
			while(((i < grp->length))){
				HX_STACK_LINE(1415)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(1417)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1419)
					objType = basic->collisionType;
					HX_STACK_LINE(1420)
					if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
						HX_STACK_LINE(1421)
						if ((this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(basic),null(),null(),null()))){
							HX_STACK_LINE(1423)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1428)
						if ((this->overlaps(basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1430)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1437)
			return results;
		}
		else{
			HX_STACK_LINE(1439)
			if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
				HX_STACK_LINE(1440)
				return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null());
			}
		}
		HX_STACK_LINE(1444)
		return false;
	}
}


Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::walkPath","flixel/tile/FlxTilemap.hx",1293);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Start,"Start");
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1294)
		Points->push(::flixel::util::FlxPoint_obj::__new(((this->x + (::Math_obj::floor(hx::Mod(Start,this->widthInTiles)) * this->_scaledTileWidth)) + (this->_scaledTileWidth * 0.5)),((this->y + (::Math_obj::floor((Float(Start) / Float(this->widthInTiles))) * this->_scaledTileHeight)) + (this->_scaledTileHeight * 0.5))));
		HX_STACK_LINE(1296)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(1297)
			return null();
		}
		HX_STACK_LINE(1302)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1303)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1304)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1305)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1307)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1308)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1310)
		if ((up)){
			HX_STACK_LINE(1312)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(1314)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1315)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1319)
		if ((right)){
			HX_STACK_LINE(1321)
			i = (Start + (int)1);
			HX_STACK_LINE(1323)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1324)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1328)
		if ((down)){
			HX_STACK_LINE(1330)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(1332)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1333)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1337)
		if ((left)){
			HX_STACK_LINE(1339)
			i = (Start - (int)1);
			HX_STACK_LINE(1341)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1342)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1346)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(1348)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(1350)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1351)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1355)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1357)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1359)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1360)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1364)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1366)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1368)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1369)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1373)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1375)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1377)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1378)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1383)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal){
	HX_STACK_PUSH("FlxTilemap::computePathDistance","flixel/tile/FlxTilemap.hx",1113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(EndIndex,"EndIndex");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
	HX_STACK_LINE(1116)
	int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
	HX_STACK_LINE(1117)
	Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
	HX_STACK_LINE(1118)
	::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
	HX_STACK_LINE(1119)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1121)
	while(((i < mapSize))){
		HX_STACK_LINE(1123)
		if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
			HX_STACK_LINE(1124)
			distances[i] = (int)-2;
		}
		else{
			HX_STACK_LINE(1128)
			distances[i] = (int)-1;
		}
		HX_STACK_LINE(1131)
		(i)++;
	}
	HX_STACK_LINE(1134)
	distances[StartIndex] = (int)0;
	HX_STACK_LINE(1135)
	int distance = (int)1;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(1136)
	Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
	HX_STACK_LINE(1137)
	Array< int > current;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(1138)
	int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
	HX_STACK_LINE(1139)
	bool left;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(1140)
	bool right;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(1141)
	bool up;		HX_STACK_VAR(up,"up");
	HX_STACK_LINE(1142)
	bool down;		HX_STACK_VAR(down,"down");
	HX_STACK_LINE(1143)
	int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(1144)
	bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
	HX_STACK_LINE(1146)
	while(((neighbors->length > (int)0))){
		HX_STACK_LINE(1148)
		current = neighbors;
		HX_STACK_LINE(1149)
		neighbors = Array_obj< int >::__new();
		HX_STACK_LINE(1151)
		i = (int)0;
		HX_STACK_LINE(1152)
		currentLength = current->length;
		HX_STACK_LINE(1153)
		while(((i < currentLength))){
			HX_STACK_LINE(1155)
			currentIndex = current->__get((i)++);
			HX_STACK_LINE(1157)
			if (((currentIndex == ::Std_obj::_int(EndIndex)))){
				HX_STACK_LINE(1159)
				foundEnd = true;
				HX_STACK_LINE(1161)
				neighbors = Array_obj< int >::__new();
				HX_STACK_LINE(1162)
				break;
			}
			HX_STACK_LINE(1166)
			left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
			HX_STACK_LINE(1167)
			right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
			HX_STACK_LINE(1168)
			up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
			HX_STACK_LINE(1169)
			down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
			HX_STACK_LINE(1171)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1173)
			if ((up)){
				HX_STACK_LINE(1175)
				index = (currentIndex - this->widthInTiles);
				HX_STACK_LINE(1177)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1179)
					distances[index] = distance;
					HX_STACK_LINE(1180)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1183)
			if ((right)){
				HX_STACK_LINE(1185)
				index = (currentIndex + (int)1);
				HX_STACK_LINE(1187)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1189)
					distances[index] = distance;
					HX_STACK_LINE(1190)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1193)
			if ((down)){
				HX_STACK_LINE(1195)
				index = (currentIndex + this->widthInTiles);
				HX_STACK_LINE(1197)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1199)
					distances[index] = distance;
					HX_STACK_LINE(1200)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1203)
			if ((left)){
				HX_STACK_LINE(1205)
				index = (currentIndex - (int)1);
				HX_STACK_LINE(1207)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1209)
					distances[index] = distance;
					HX_STACK_LINE(1210)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1213)
			if (((bool(up) && bool(right)))){
				HX_STACK_LINE(1215)
				index = ((currentIndex - this->widthInTiles) + (int)1);
				HX_STACK_LINE(1217)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1219)
					distances[index] = distance;
					HX_STACK_LINE(1220)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1222)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1224)
						distances[index] = distance;
						HX_STACK_LINE(1225)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1228)
			if (((bool(right) && bool(down)))){
				HX_STACK_LINE(1230)
				index = ((currentIndex + this->widthInTiles) + (int)1);
				HX_STACK_LINE(1232)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1234)
					distances[index] = distance;
					HX_STACK_LINE(1235)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1237)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1239)
						distances[index] = distance;
						HX_STACK_LINE(1240)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1243)
			if (((bool(left) && bool(down)))){
				HX_STACK_LINE(1245)
				index = ((currentIndex + this->widthInTiles) - (int)1);
				HX_STACK_LINE(1247)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1249)
					distances[index] = distance;
					HX_STACK_LINE(1250)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1252)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1254)
						distances[index] = distance;
						HX_STACK_LINE(1255)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1258)
			if (((bool(up) && bool(left)))){
				HX_STACK_LINE(1260)
				index = ((currentIndex - this->widthInTiles) - (int)1);
				HX_STACK_LINE(1262)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1264)
					distances[index] = distance;
					HX_STACK_LINE(1265)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1267)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1269)
						distances[index] = distance;
						HX_STACK_LINE(1270)
						neighbors->push(index);
					}
				}
			}
		}
		HX_STACK_LINE(1275)
		(distance)++;
	}
	HX_STACK_LINE(1277)
	if ((!(foundEnd))){
		HX_STACK_LINE(1278)
		distances = null();
	}
	HX_STACK_LINE(1282)
	return distances;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::raySimplifyPath","flixel/tile/FlxTilemap.hx",1071);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1072)
		::flixel::util::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1073)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1074)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1075)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1076)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1078)
		while(((i < l))){
			HX_STACK_LINE(1080)
			node = Points->__get((i)++).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1082)
			if (((node == null()))){
				HX_STACK_LINE(1083)
				continue;
			}
			HX_STACK_LINE(1087)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1088)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1090)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1095)
				source = Points->__get(lastIndex).StaticCast< ::flixel::util::FlxPoint >();
			}
			HX_STACK_LINE(1099)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::simplifyPath","flixel/tile/FlxTilemap.hx",1038);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1039)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1040)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1041)
		::flixel::util::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1042)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1043)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1044)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1046)
		while(((i < l))){
			HX_STACK_LINE(1048)
			node = Points->__get(i).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1049)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1050)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y))));
			HX_STACK_LINE(1052)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1053)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1057)
				last = node;
			}
			HX_STACK_LINE(1061)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

Array< ::Dynamic > FlxTilemap_obj::findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_PUSH("FlxTilemap::findPath","flixel/tile/FlxTilemap.hx",973);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Simplify,"Simplify");
	HX_STACK_ARG(RaySimplify,"RaySimplify");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
{
		HX_STACK_LINE(975)
		int startIndex = ((::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(976)
		int endIndex = ((::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(979)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))))){
			HX_STACK_LINE(980)
			return null();
		}
		HX_STACK_LINE(985)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal);		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(987)
		if (((distances == null()))){
			HX_STACK_LINE(988)
			return null();
		}
		HX_STACK_LINE(993)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(994)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(997)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(998)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(999)
		node->set_x(Start->x);
		HX_STACK_LINE(1000)
		node->set_y(Start->y);
		HX_STACK_LINE(1001)
		node = points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(1002)
		node->set_x(End->x);
		HX_STACK_LINE(1003)
		node->set_y(End->y);
		HX_STACK_LINE(1006)
		if ((Simplify)){
			HX_STACK_LINE(1007)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(1010)
		if ((RaySimplify)){
			HX_STACK_LINE(1011)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(1016)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(1017)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1019)
		while(((i >= (int)0))){
			HX_STACK_LINE(1021)
			node = points->__get((i)--).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1023)
			if (((node != null()))){
				HX_STACK_LINE(1024)
				path->push(node);
			}
		}
		HX_STACK_LINE(1029)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_PUSH("FlxTilemap::setDirty","flixel/tile/FlxTilemap.hx",951);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Dirty,"Dirty");
{
		HX_STACK_LINE(952)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(953)
		int l = this->_buffers->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(955)
		while(((i < l))){
			HX_STACK_LINE(956)
			this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->dirty = Dirty;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_PUSH("FlxTilemap::getData","flixel/tile/FlxTilemap.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Simple,"Simple");
{
		HX_STACK_LINE(925)
		if ((!(Simple))){
			HX_STACK_LINE(926)
			return this->_data;
		}
		HX_STACK_LINE(930)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(931)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(932)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(933)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(935)
		while(((i < l))){
			HX_STACK_LINE(937)
			data[i] = (  (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))) ? int((int)1) : int((int)0) );
			HX_STACK_LINE(938)
			(i)++;
		}
		HX_STACK_LINE(941)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::draw( ){
{
		HX_STACK_PUSH("FlxTilemap::draw","flixel/tile/FlxTilemap.hx",860);
		HX_STACK_THIS(this);
		HX_STACK_LINE(861)
		if (((this->cameras == null()))){
			HX_STACK_LINE(862)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(866)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(867)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(868)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(869)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(871)
		while(((i < l))){
			HX_STACK_LINE(873)
			camera = this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(875)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(876)
				continue;
			}
			HX_STACK_LINE(880)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(882)
				this->_buffers[i] = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scaleX,this->scaleY);
				HX_STACK_LINE(883)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->forceComplexRender = this->forceComplexRender;
			}
			HX_STACK_LINE(886)
			buffer = this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
			HX_STACK_LINE(887)
			buffer->dirty = true;
			HX_STACK_LINE(908)
			this->drawTilemap(buffer,camera);
		}
	}
return null();
}


Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemap::drawTilemap","flixel/tile/FlxTilemap.hx",577);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Buffer,"Buffer");
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(581)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(582)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(584)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(585)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(586)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(588)
		Float hackScaleX = (this->tileScaleHack * this->scaleX);		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(589)
		Float hackScaleY = (this->tileScaleHack * this->scaleY);		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(592)
		::flixel::system::layer::DrawStackItem drawItem = Camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(596)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(597)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(601)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(602)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(604)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(605)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(606)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(607)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(610)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(611)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(614)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(615)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(618)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(619)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(622)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(623)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(627)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(628)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(629)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(630)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(631)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(632)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(638)
		while(((row < screenRows))){
			HX_STACK_LINE(640)
			columnIndex = rowIndex;
			HX_STACK_LINE(641)
			column = (int)0;
			HX_STACK_LINE(642)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(644)
			while(((column < screenColumns))){
				HX_STACK_LINE(682)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(684)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(686)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(687)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_scaledTileHeight));
					HX_STACK_LINE(690)
					currDrawData[(currIndex)++] = drawX;
					HX_STACK_LINE(691)
					currDrawData[(currIndex)++] = drawY;
					HX_STACK_LINE(696)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(699)
					currDrawData[(currIndex)++] = hackScaleX;
					HX_STACK_LINE(700)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(701)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(703)
					currDrawData[(currIndex)++] = hackScaleY;
					HX_STACK_LINE(707)
					currDrawData[(currIndex)++] = 1.0;
				}
				HX_STACK_LINE(715)
				(column)++;
				HX_STACK_LINE(716)
				(columnIndex)++;
			}
			HX_STACK_LINE(722)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(723)
			(row)++;
		}
		HX_STACK_LINE(727)
		drawItem->position = currIndex;
		HX_STACK_LINE(730)
		Buffer->x = (screenXInTiles * this->_scaledTileWidth);
		HX_STACK_LINE(731)
		Buffer->y = (screenYInTiles * this->_scaledTileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_PUSH("FlxTilemap::setCustomTileMappings","flixel/tile/FlxTilemap.hx",514);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mappings,"mappings");
		HX_STACK_ARG(randomIndices,"randomIndices");
		HX_STACK_ARG(randomChoices,"randomChoices");
		HX_STACK_ARG(randomLambda,"randomLambda");
		HX_STACK_LINE(515)
		this->customTileRemap = mappings;
		HX_STACK_LINE(516)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(517)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(518)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(521)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(522)
			hx::Throw (HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setCustomTileMappings,(void))

::flixel::tile::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_PUSH("FlxTilemap::loadMap","flixel/tile/FlxTilemap.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MapData,"MapData");
	HX_STACK_ARG(TileGraphic,"TileGraphic");
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(AutoTile,"AutoTile");
	HX_STACK_ARG(StartingIndex,"StartingIndex");
	HX_STACK_ARG(DrawIndex,"DrawIndex");
	HX_STACK_ARG(CollideIndex,"CollideIndex");
{
		HX_STACK_LINE(310)
		this->_auto = AutoTile;
		HX_STACK_LINE(311)
		this->_startingIndex = (  (((StartingIndex <= (int)0))) ? int((int)0) : int(StartingIndex) );
		HX_STACK_LINE(314)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(317)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(318)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(319)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(320)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(321)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(322)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(323)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(325)
			while(((row < this->heightInTiles))){
				HX_STACK_LINE(327)
				columns = rows->__get((row)++).split(HX_CSTRING(","));
				HX_STACK_LINE(329)
				if (((columns->length <= (int)1))){
					HX_STACK_LINE(331)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(332)
					continue;
				}
				HX_STACK_LINE(334)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(335)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(338)
				column = (int)0;
				HX_STACK_LINE(340)
				while(((column < this->widthInTiles))){
					HX_STACK_LINE(341)
					this->_data->push(::Std_obj::parseInt(columns->__get((column)++)));
				}
			}
		}
		else{
			HX_STACK_LINE(348)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(349)
				this->_data = MapData;
			}
			else{
				HX_STACK_LINE(353)
				hx::Throw (((HX_CSTRING("Unexpected MapData format '") + ::Std_obj::string(::Type_obj::_typeof(MapData))) + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(358)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(359)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(361)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(363)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(364)
			DrawIndex = (int)1;
			HX_STACK_LINE(365)
			CollideIndex = (int)1;
			HX_STACK_LINE(366)
			i = (int)0;
			HX_STACK_LINE(368)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(369)
				this->autoTile((i)++);
			}
		}
		HX_STACK_LINE(374)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(376)
			i = (int)0;
			HX_STACK_LINE(377)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(379)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(380)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(381)
				if (((old_index < this->customTileRemap->length))){
					HX_STACK_LINE(382)
					new_index = this->customTileRemap->__get(old_index);
				}
				HX_STACK_LINE(385)
				this->_data[i] = new_index;
				HX_STACK_LINE(386)
				(i)++;
			}
		}
		HX_STACK_LINE(390)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(392)
			Dynamic randLambda = (  (((this->_randomLambda_dyn() != null()))) ? Dynamic(this->_randomLambda_dyn()) : Dynamic(::Math_obj::random_dyn()) );		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(394)
			i = (int)0;
			HX_STACK_LINE(395)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(397)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(398)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(399)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(400)
					while(((_g < _g1->length))){
						HX_STACK_LINE(400)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(400)
						++(_g);
						HX_STACK_LINE(402)
						if (((old_index == rand))){
							HX_STACK_LINE(404)
							int k = ::Std_obj::_int((randLambda().Cast< Float >() * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length));		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(405)
							new_index = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(407)
						(j)++;
					}
				}
				HX_STACK_LINE(409)
				this->_data[i] = new_index;
				HX_STACK_LINE(410)
				(i)++;
			}
		}
		HX_STACK_LINE(415)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null()));
		HX_STACK_LINE(416)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(418)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(419)
			this->_tileWidth = this->cachedGraphics->bitmap->get_height();
		}
		HX_STACK_LINE(423)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(425)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(426)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(430)
		if ((!(::Std_obj::is(TileGraphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(432)
			this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,this->_tileWidth,this->_tileHeight,null(),null(),null(),null());
			HX_STACK_LINE(433)
			this->region->width = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_width()) / Float(this->_tileWidth))) * this->_tileWidth);
			HX_STACK_LINE(434)
			this->region->height = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_height()) / Float(this->_tileHeight))) * this->_tileHeight);
		}
		else{
			HX_STACK_LINE(438)
			::flixel::util::loaders::TextureRegion spriteRegion = TileGraphic;		HX_STACK_VAR(spriteRegion,"spriteRegion");
			HX_STACK_LINE(439)
			this->region = spriteRegion->region->clone();
			HX_STACK_LINE(440)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(441)
				this->_tileWidth = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(445)
				this->region->tileWidth = this->_tileWidth;
			}
			HX_STACK_LINE(449)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(450)
				this->_tileHeight = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(454)
				this->region->tileHeight = this->_tileHeight;
			}
		}
		HX_STACK_LINE(460)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(462)
		int length = this->region->get_numTiles();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(463)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(465)
		{
			HX_STACK_LINE(465)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(465)
			while(((_g < length))){
				HX_STACK_LINE(465)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(467)
				this->_tileObjects[i1] = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(477)
		this->_scaledTileWidth = (this->_tileWidth * this->scaleX);
		HX_STACK_LINE(478)
		this->_scaledTileHeight = (this->_tileHeight * this->scaleY);
		HX_STACK_LINE(481)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(482)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(498)
		this->updateFrameData();
		HX_STACK_LINE(501)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemap::destroy","flixel/tile/FlxTilemap.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_LINE(247)
		this->_flashPoint = null();
		HX_STACK_LINE(248)
		this->_flashRect = null();
		HX_STACK_LINE(249)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(250)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(252)
		if (((this->_tileObjects != null()))){
			HX_STACK_LINE(254)
			l = this->_tileObjects->length;
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(256)
				while(((_g < l))){
					HX_STACK_LINE(256)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(258)
					this->_tileObjects->__get(i1).StaticCast< ::flixel::tile::FlxTile >()->destroy();
				}
			}
			HX_STACK_LINE(261)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(264)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(266)
			i = (int)0;
			HX_STACK_LINE(267)
			l = this->_buffers->length;
			HX_STACK_LINE(269)
			{
				HX_STACK_LINE(269)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(269)
				while(((_g < l))){
					HX_STACK_LINE(269)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(271)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(274)
			this->_buffers = null();
		}
		HX_STACK_LINE(277)
		this->_data = null();
		HX_STACK_LINE(288)
		this->_helperPoint = null();
		HX_STACK_LINE(289)
		this->_rectIDs = null();
		HX_STACK_LINE(292)
		this->super::destroy();
	}
return null();
}


::String FlxTilemap_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_PUSH("FlxTilemap::arrayToCSV","flixel/tile/FlxTilemap.hx",2142);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Invert,"Invert");
{
		HX_STACK_LINE(2143)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(2144)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(2145)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(2146)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(2147)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(2148)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(2150)
		while(((row < Height))){
			HX_STACK_LINE(2152)
			column = (int)0;
			HX_STACK_LINE(2154)
			while(((column < Width))){
				HX_STACK_LINE(2156)
				index = Data->__get(offset);
				HX_STACK_LINE(2158)
				if ((Invert)){
					HX_STACK_LINE(2159)
					if (((index == (int)0))){
						HX_STACK_LINE(2161)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(2164)
						if (((index == (int)1))){
							HX_STACK_LINE(2165)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(2170)
				if (((column == (int)0))){
					HX_STACK_LINE(2171)
					if (((row == (int)0))){
						HX_STACK_LINE(2173)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(2177)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(2182)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(2186)
				(column)++;
				HX_STACK_LINE(2187)
				(offset)++;
			}
			HX_STACK_LINE(2190)
			(row)++;
		}
		HX_STACK_LINE(2193)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,arrayToCSV,return )

::String FlxTilemap_obj::bitmapToCSV( ::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::bitmapToCSV","flixel/tile/FlxTilemap.hx",2209);
	HX_STACK_ARG(Bitmap,"Bitmap");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(ColorMap,"ColorMap");
{
		HX_STACK_LINE(2210)
		if (((Scale < (int)1))){
			HX_STACK_LINE(2211)
			Scale = (int)1;
		}
		HX_STACK_LINE(2216)
		if (((Scale > (int)1))){
			HX_STACK_LINE(2218)
			::flash::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(2219)
			Bitmap = ::flash::display::BitmapData_obj::__new((Bitmap->get_width() * Scale),(Bitmap->get_height() * Scale),null(),null(),null());
			HX_STACK_LINE(2242)
			::flash::geom::Matrix mtx = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(2243)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(2244)
			Bitmap->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(2249)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(2250)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(2251)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(2252)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(2253)
		int bitmapWidth = Bitmap->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(2254)
		int bitmapHeight = Bitmap->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(2256)
		while(((row < bitmapHeight))){
			HX_STACK_LINE(2258)
			column = (int)0;
			HX_STACK_LINE(2260)
			while(((column < bitmapWidth))){
				HX_STACK_LINE(2263)
				pixel = Bitmap->getPixel(column,row);
				HX_STACK_LINE(2265)
				if (((ColorMap != null()))){
					HX_STACK_LINE(2266)
					pixel = ::flixel::util::FlxArrayUtil_obj::indexOf_Int(ColorMap,pixel,null());
				}
				else{
					HX_STACK_LINE(2269)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(2270)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(2274)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(2279)
				if (((column == (int)0))){
					HX_STACK_LINE(2280)
					if (((row == (int)0))){
						HX_STACK_LINE(2282)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(2286)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(2291)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(2295)
				(column)++;
			}
			HX_STACK_LINE(2298)
			(row)++;
		}
		HX_STACK_LINE(2301)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,bitmapToCSV,return )

::String FlxTilemap_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::imageToCSV","flixel/tile/FlxTilemap.hx",2316);
	HX_STACK_ARG(ImageFile,"ImageFile");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
{
		HX_STACK_LINE(2317)
		::flash::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(2319)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			struct _Function_2_1{
				inline static ::flash::display::BitmapData Block( Dynamic &ImageFile){
					HX_STACK_PUSH("*::closure","flixel/tile/FlxTilemap.hx",2321);
					{
						HX_STACK_LINE(2321)
						::String id = ImageFile;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(2321)
						return ::openfl::Assets_obj::getBitmapData(id,false);
					}
					return null();
				}
			};
			HX_STACK_LINE(2320)
			tempBitmapData = _Function_2_1::Block(ImageFile);
		}
		else{
			HX_STACK_LINE(2324)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(2328)
		return ::flixel::tile::FlxTilemap_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,imageToCSV,return )


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rayHit") ) { return rayHit_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_forceComplexRender") ) { return set_forceComplexRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rectIDs"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_scaledTileHeight"));
	outFields->push(HX_CSTRING("_scaledTileWidth"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("set_forceComplexRender"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("rayHit"),
	HX_CSTRING("ray"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("follow"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTile"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTile"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("findPath"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("getData"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_scaledTileHeight"),
	HX_CSTRING("_scaledTileWidth"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_data"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("auto"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
};

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
