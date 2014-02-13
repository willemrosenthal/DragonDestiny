#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

::flash::display::BitmapData FlxCollision_obj::debug;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectCheck","flixel/util/FlxCollision.hx",42);
	HX_STACK_ARG(Contact,"Contact");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(44)
		bool considerRotation = (bool((Contact->angle != (int)0)) || bool((Target->angle != (int)0)));		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(46)
		::flash::geom::Point pointA = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointA,"pointA");
		HX_STACK_LINE(47)
		::flash::geom::Point pointB = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointB,"pointB");
		HX_STACK_LINE(49)
		if (((Camera != null()))){
			HX_STACK_LINE(51)
			pointA->x = ((Contact->x - ::Std_obj::_int((Camera->scroll->x * Contact->scrollFactor->x))) - Contact->offset->x);
			HX_STACK_LINE(52)
			pointA->y = ((Contact->y - ::Std_obj::_int((Camera->scroll->y * Contact->scrollFactor->y))) - Contact->offset->y);
			HX_STACK_LINE(54)
			pointB->x = ((Target->x - ::Std_obj::_int((Camera->scroll->x * Target->scrollFactor->x))) - Target->offset->x);
			HX_STACK_LINE(55)
			pointB->y = ((Target->y - ::Std_obj::_int((Camera->scroll->y * Target->scrollFactor->y))) - Target->offset->y);
		}
		else{
			HX_STACK_LINE(59)
			pointA->x = ((Contact->x - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->x * Contact->scrollFactor->x))) - Contact->offset->x);
			HX_STACK_LINE(60)
			pointA->y = ((Contact->y - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->y * Contact->scrollFactor->y))) - Contact->offset->y);
			HX_STACK_LINE(62)
			pointB->x = ((Target->x - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->x * Target->scrollFactor->x))) - Target->offset->x);
			HX_STACK_LINE(63)
			pointB->y = ((Target->y - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->y * Target->scrollFactor->y))) - Target->offset->y);
		}
		HX_STACK_LINE(66)
		::flash::geom::Rectangle boundsA = null();		HX_STACK_VAR(boundsA,"boundsA");
		HX_STACK_LINE(67)
		::flash::geom::Rectangle boundsB = null();		HX_STACK_VAR(boundsB,"boundsB");
		HX_STACK_LINE(68)
		if ((considerRotation)){
			HX_STACK_LINE(71)
			::flash::geom::Point centerA = ::flash::geom::Point_obj::__new(Contact->origin->x,Contact->origin->y);		HX_STACK_VAR(centerA,"centerA");
			HX_STACK_LINE(72)
			::flash::geom::Point centerB = ::flash::geom::Point_obj::__new(Target->origin->x,Target->origin->y);		HX_STACK_VAR(centerB,"centerB");
			HX_STACK_LINE(75)
			boundsA = ::flash::geom::Rectangle_obj::__new(((pointA->x + centerA->x) - centerA->get_length()),((pointA->y + centerA->y) - centerA->get_length()),(centerA->get_length() * (int)2),(centerA->get_length() * (int)2));
			HX_STACK_LINE(79)
			boundsB = ::flash::geom::Rectangle_obj::__new(((pointB->x + centerB->x) - centerB->get_length()),((pointB->y + centerB->y) - centerB->get_length()),(centerB->get_length() * (int)2),(centerB->get_length() * (int)2));
		}
		else{
			HX_STACK_LINE(90)
			boundsA = ::flash::geom::Rectangle_obj::__new(pointA->x,pointA->y,Contact->frameWidth,Contact->frameHeight);
			HX_STACK_LINE(91)
			boundsB = ::flash::geom::Rectangle_obj::__new(pointB->x,pointB->y,Target->frameWidth,Target->frameHeight);
		}
		HX_STACK_LINE(95)
		::flash::geom::Rectangle intersect = boundsA->intersection(boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(97)
		if (((bool((bool(intersect->isEmpty()) || bool((intersect->width == (int)0)))) || bool((intersect->height == (int)0))))){
			HX_STACK_LINE(98)
			return false;
		}
		HX_STACK_LINE(103)
		intersect->x = ::Math_obj::floor(intersect->x);
		HX_STACK_LINE(104)
		intersect->y = ::Math_obj::floor(intersect->y);
		HX_STACK_LINE(105)
		intersect->width = ::Math_obj::ceil(intersect->width);
		HX_STACK_LINE(106)
		intersect->height = ::Math_obj::ceil(intersect->height);
		HX_STACK_LINE(108)
		if ((intersect->isEmpty())){
			HX_STACK_LINE(109)
			return false;
		}
		HX_STACK_LINE(114)
		::flash::geom::Matrix matrixA = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixA,"matrixA");
		HX_STACK_LINE(115)
		matrixA->translate(-(((intersect->x - boundsA->x))),-(((intersect->y - boundsA->y))));
		HX_STACK_LINE(117)
		::flash::geom::Matrix matrixB = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixB,"matrixB");
		HX_STACK_LINE(118)
		matrixB->translate(-(((intersect->x - boundsB->x))),-(((intersect->y - boundsB->y))));
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(121)
			Contact->calcFrame(true);
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(122)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(125)
		::flash::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(126)
		::flash::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(127)
		::flash::display::BitmapData overlapArea = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(intersect->width),::Std_obj::_int(intersect->height),false,null(),null());		HX_STACK_VAR(overlapArea,"overlapArea");
		HX_STACK_LINE(130)
		if ((considerRotation)){
			HX_STACK_LINE(132)
			::flash::geom::Matrix testAMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(testAMatrix,"testAMatrix");
			HX_STACK_LINE(133)
			testAMatrix->identity();
			HX_STACK_LINE(136)
			testAMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
			HX_STACK_LINE(139)
			testAMatrix->rotate((Contact->angle * 0.017453293));
			HX_STACK_LINE(142)
			testAMatrix->translate((Float(boundsA->width) / Float((int)2)),(Float(boundsA->height) / Float((int)2)));
			HX_STACK_LINE(145)
			::flash::display::BitmapData testA2 = ::flash::display::BitmapData_obj::__new(::Math_obj::floor(boundsA->width),::Math_obj::floor(boundsA->height),true,(int)0,null());		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(148)
			testA2->draw(testA,testAMatrix,null(),null(),null(),false);
			HX_STACK_LINE(149)
			testA = testA2;
			HX_STACK_LINE(152)
			::flash::geom::Matrix testBMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(testBMatrix,"testBMatrix");
			HX_STACK_LINE(153)
			testBMatrix->identity();
			HX_STACK_LINE(154)
			testBMatrix->translate(-(Target->origin->x),-(Target->origin->y));
			HX_STACK_LINE(155)
			testBMatrix->rotate((Target->angle * 0.017453293));
			HX_STACK_LINE(156)
			testBMatrix->translate((Float(boundsB->width) / Float((int)2)),(Float(boundsB->height) / Float((int)2)));
			HX_STACK_LINE(157)
			::flash::display::BitmapData testB2 = ::flash::display::BitmapData_obj::__new(::Math_obj::floor(boundsB->width),::Math_obj::floor(boundsB->height),true,(int)0,null());		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(158)
			testB2->draw(testB,testBMatrix,null(),null(),null(),false);
			HX_STACK_LINE(159)
			testB = testB2;
		}
		HX_STACK_LINE(169)
		int overlapWidth = overlapArea->get_width();		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(170)
		int overlapHeight = overlapArea->get_height();		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(171)
		int targetX;		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(172)
		int targetY;		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(173)
		int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
		HX_STACK_LINE(174)
		int pixelAlpha;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(175)
		int transformedAlpha;		HX_STACK_VAR(transformedAlpha,"transformedAlpha");
		HX_STACK_LINE(176)
		int maxX = (testA->get_width() + (int)1);		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(177)
		int maxY = (testA->get_height() + (int)1);		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			while(((_g < maxX))){
				HX_STACK_LINE(179)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(181)
				targetX = ::Math_obj::floor((i + matrixA->tx));
				HX_STACK_LINE(183)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(185)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(185)
					while(((_g1 < maxY))){
						HX_STACK_LINE(185)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(187)
						targetY = ::Math_obj::floor((j + matrixA->ty));
						HX_STACK_LINE(189)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(191)
							pixelColor = testA->getPixel32(i,j);
							HX_STACK_LINE(192)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(194)
							if (((pixelAlpha >= AlphaTolerance))){
								HX_STACK_LINE(195)
								overlapArea->setPixel32(targetX,targetY,(int)-65536);
							}
							else{
								HX_STACK_LINE(199)
								overlapArea->setPixel32(targetX,targetY,(int)-1);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(207)
		maxX = (testB->get_width() + (int)1);
		HX_STACK_LINE(208)
		maxY = (testB->get_height() + (int)1);
		HX_STACK_LINE(209)
		int secondColor;		HX_STACK_VAR(secondColor,"secondColor");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(211)
			while(((_g < maxX))){
				HX_STACK_LINE(211)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(213)
				targetX = ::Math_obj::floor((i + matrixB->tx));
				HX_STACK_LINE(215)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(217)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(217)
					while(((_g1 < maxY))){
						HX_STACK_LINE(217)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(219)
						targetY = ::Math_obj::floor((j + matrixB->ty));
						HX_STACK_LINE(221)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(223)
							pixelColor = testB->getPixel32(i,j);
							HX_STACK_LINE(224)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(226)
							if (((pixelAlpha >= AlphaTolerance))){
								HX_STACK_LINE(228)
								secondColor = overlapArea->getPixel32(targetX,targetY);
								HX_STACK_LINE(230)
								if (((secondColor == (int)-65536))){
									HX_STACK_LINE(231)
									overlapArea->setPixel32(targetX,targetY,(int)-16711681);
								}
								else{
									HX_STACK_LINE(235)
									overlapArea->setPixel32(targetX,targetY,(int)0);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(247)
		::flixel::util::FlxCollision_obj::debug = overlapArea;
		HX_STACK_LINE(249)
		::flash::geom::Rectangle overlap = overlapArea->getColorBoundsRect((int)-1,(int)-16711681,null());		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(250)
		overlap->offset(intersect->x,intersect->y);
		HX_STACK_LINE(252)
		return !(overlap->isEmpty());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectPointCheck","flixel/util/FlxCollision.hx",265);
	HX_STACK_ARG(PointX,"PointX");
	HX_STACK_ARG(PointY,"PointY");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance");
{
		HX_STACK_LINE(267)
		if (((::flixel::util::FlxMath_obj::pointInCoordinates(PointX,PointY,::Math_obj::floor(Target->x),::Math_obj::floor(Target->y),::Std_obj::_int(Target->get_width()),::Std_obj::_int(Target->get_height())) == false))){
			HX_STACK_LINE(268)
			return false;
		}
		struct _Function_1_1{
			inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite &Target){
				HX_STACK_PUSH("*::closure","flixel/util/FlxCollision.hx",276);
				{
					HX_STACK_LINE(276)
					::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(276)
					if (((Target->frame != null()))){
						HX_STACK_LINE(276)
						if (((bool((Target->facing == (int)1)) && bool((Target->flipped > (int)0))))){
							HX_STACK_LINE(276)
							frameBmd = Target->frame->getHReversedBitmap();
						}
						else{
							HX_STACK_LINE(276)
							frameBmd = Target->frame->getBitmap();
						}
					}
					HX_STACK_LINE(276)
					return frameBmd;
				}
				return null();
			}
		};
		HX_STACK_LINE(276)
		::flash::display::BitmapData test = _Function_1_1::Block(Target);		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(279)
		int pixelAlpha = (int)0;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(280)
		pixelAlpha = (int((int(test->getPixel32(::Math_obj::floor((PointX - Target->x)),::Math_obj::floor((PointY - Target->y)))) >> int((int)24))) & int((int)255));
		HX_STACK_LINE(283)
		pixelAlpha = ::Std_obj::_int((pixelAlpha * Target->alpha));
		HX_STACK_LINE(287)
		if (((pixelAlpha >= AlphaTolerance))){
			HX_STACK_LINE(288)
			return true;
		}
		else{
			HX_STACK_LINE(292)
			return false;
		}
		HX_STACK_LINE(287)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_PUSH("FlxCollision::createCameraWall","flixel/util/FlxCollision.hx",307);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Placement,"Placement");
	HX_STACK_ARG(Thickness,"Thickness");
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds");
{
		HX_STACK_LINE(308)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(309)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(310)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(311)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(313)
		switch( (int)(Placement)){
			case (int)0: {
				HX_STACK_LINE(316)
				left = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(317)
				right = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x + Camera->width)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(318)
				top = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),::Math_obj::floor((Camera->y - Thickness)),(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(319)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),Camera->height,(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(321)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(323)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					_this->x = (Camera->x - Thickness);
					HX_STACK_LINE(323)
					_this->y = (Camera->y - Thickness);
					HX_STACK_LINE(323)
					_this->width = (Camera->width + (Thickness * (int)2));
					HX_STACK_LINE(323)
					_this->height = (Camera->height + (Thickness * (int)2));
					HX_STACK_LINE(323)
					_this;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(326)
				left = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(327)
				right = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(((Camera->x + Camera->width) - Thickness)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(328)
				top = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),::Math_obj::floor(Camera->y),Camera->width,Thickness);
				HX_STACK_LINE(329)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),(Camera->height - Thickness),Camera->width,Thickness);
				HX_STACK_LINE(331)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(333)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(333)
					_this->x = Camera->x;
					HX_STACK_LINE(333)
					_this->y = Camera->y;
					HX_STACK_LINE(333)
					_this->width = Camera->width;
					HX_STACK_LINE(333)
					_this->height = Camera->height;
					HX_STACK_LINE(333)
					_this;
				}
			}
			;break;
		}
		HX_STACK_LINE(337)
		::flixel::group::FlxGroup result = ::flixel::group::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(339)
		result->add(left);
		HX_STACK_LINE(340)
		result->add(right);
		HX_STACK_LINE(341)
		result->add(top);
		HX_STACK_LINE(342)
		result->add(bottom);
		HX_STACK_LINE(344)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

void FlxCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCollision);
	HX_MARK_END_CLASS();
}

void FlxCollision_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("debug"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::debug,"debug");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::debug,"debug");
};

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCollision_obj::__boot()
{
	debug= ::flash::display::BitmapData_obj::__new((int)1,(int)1,false,null(),null());
}

} // end namespace flixel
} // end namespace util
