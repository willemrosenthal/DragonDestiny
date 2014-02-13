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
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_PUSH("FlxText::new","flixel/text/FlxText.hx",22);
int size = __o_size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(725)
	this->_heightInc = (int)0;
	HX_STACK_LINE(724)
	this->_widthInc = (int)0;
	HX_STACK_LINE(127)
	this->_regen = true;
	HX_STACK_LINE(89)
	this->borderQuality = (int)1;
	HX_STACK_LINE(77)
	this->borderSize = (int)1;
	HX_STACK_LINE(72)
	this->borderColor = (int)0;
	HX_STACK_LINE(67)
	this->borderStyle = (int)0;
	HX_STACK_LINE(139)
	super::__construct(X,Y,null());
	HX_STACK_LINE(141)
	this->_filters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(143)
	::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(144)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(146)
	if (((Text == null()))){
		HX_STACK_LINE(147)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(151)
	this->_textField = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(152)
	this->_textField->set_width(Width);
	HX_STACK_LINE(153)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(154)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(155)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(156)
	this->_format = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(157)
	this->_formatAdjusted = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(158)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(159)
	this->_textField->set_text(Text);
	HX_STACK_LINE(160)
	this->_textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(166)
	this->_textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(168)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(169)
	this->set_moves(false);
	HX_STACK_LINE(174)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(175)
		this->calcFrame(true);
	}
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::clearFilters( ){
{
		HX_STACK_PUSH("FlxText::clearFilters","flixel/text/FlxText.hx",748);
		HX_STACK_THIS(this);
		HX_STACK_LINE(749)
		if (((this->_filters->length > (int)0))){
			HX_STACK_LINE(750)
			this->dirty = true;
		}
		HX_STACK_LINE(753)
		this->_filters = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFilters,(void))

Void FlxText_obj::removeFilter( ::flash::filters::BitmapFilter filter){
{
		HX_STACK_PUSH("FlxText::removeFilter","flixel/text/FlxText.hx",739);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(740)
		bool removed = this->_filters->remove(filter);		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(741)
		if ((removed)){
			HX_STACK_LINE(742)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFilter,(void))

Void FlxText_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_PUSH("FlxText::addFilter","flixel/text/FlxText.hx",728);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(widthInc,"widthInc");
	HX_STACK_ARG(heightInc,"heightInc");
{
		HX_STACK_LINE(729)
		if (((bool((this->_widthInc != widthInc)) || bool((this->_heightInc != heightInc))))){
			HX_STACK_LINE(730)
			this->_regen = true;
		}
		HX_STACK_LINE(734)
		this->_filters->push(filter);
		HX_STACK_LINE(735)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFilter,(void))

Void FlxText_obj::updateFormat( ::flash::text::TextFormat Format){
{
		HX_STACK_PUSH("FlxText::updateFormat","flixel/text/FlxText.hx",714);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Format,"Format");
		HX_STACK_LINE(714)
		this->_textField->setTextFormat(Format,(int)0,this->_textField->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_PUSH("FlxText::draw","flixel/text/FlxText.hx",702);
		HX_STACK_THIS(this);
		HX_STACK_LINE(705)
		if (((bool(this->_regen) || bool(this->dirty)))){
			HX_STACK_LINE(705)
			this->calcFrame(true);
		}
		HX_STACK_LINE(710)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","flixel/text/FlxText.hx",692);
		HX_STACK_THIS(this);
		HX_STACK_LINE(692)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(695)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());
			HX_STACK_LINE(696)
			this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
			HX_STACK_LINE(697)
			this->frames = (int)1;
		}
	}
return null();
}


::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","flixel/text/FlxText.hx",686);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StrAlign,"StrAlign");
	HX_STACK_LINE(686)
	return StrAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::flash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","flixel/text/FlxText.hx",655);
	HX_STACK_THIS(this);
	HX_STACK_LINE(656)
	::flash::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(658)
	return ::flash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","flixel/text/FlxText.hx",494);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(496)
		if ((AreYouSure)){
			HX_STACK_LINE(499)
			if (((this->_filters != null()))){
				HX_STACK_LINE(500)
				this->_textField->set_filters(this->_filters);
			}
			HX_STACK_LINE(504)
			this->regenGraphics();
			HX_STACK_LINE(506)
			if (((bool((bool((this->_textField != null())) && bool((this->_textField->get_text() != null())))) && bool((this->_textField->get_text().length > (int)0))))){
				HX_STACK_LINE(509)
				this->_formatAdjusted->font = this->_format->font;
				HX_STACK_LINE(510)
				this->_formatAdjusted->size = this->_format->size;
				HX_STACK_LINE(511)
				this->_formatAdjusted->color = this->_format->color;
				HX_STACK_LINE(512)
				this->_formatAdjusted->align = this->_format->align;
				HX_STACK_LINE(513)
				this->_matrix->identity();
				HX_STACK_LINE(515)
				this->_matrix->translate(::Std_obj::_int((0.5 * this->_widthInc)),::Std_obj::_int((0.5 * this->_heightInc)));
				HX_STACK_LINE(521)
				if (((bool((this->_format->align == ::flash::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->get_numLines() == (int)1))))){
					HX_STACK_LINE(524)
					this->_formatAdjusted->align = ::flash::text::TextFormatAlign_obj::LEFT;
					HX_STACK_LINE(525)
					this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					HX_STACK_LINE(530)
					this->_matrix->translate(::Math_obj::floor((Float(((this->get_width() - this->_textField->get_textWidth()))) / Float((int)2))),(int)0);
				}
				HX_STACK_LINE(534)
				if (((this->borderStyle != (int)0))){
					HX_STACK_LINE(536)
					int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
					HX_STACK_LINE(537)
					if (((iterations <= (int)0))){
						HX_STACK_LINE(538)
						iterations = (int)1;
					}
					HX_STACK_LINE(541)
					Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
					HX_STACK_LINE(543)
					if (((this->borderStyle == (int)1))){
						HX_STACK_LINE(547)
						this->_formatAdjusted->color = this->borderColor;
						HX_STACK_LINE(548)
						this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(550)
							while(((_g < iterations))){
								HX_STACK_LINE(550)
								int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
								HX_STACK_LINE(552)
								this->_matrix->translate(delta,delta);
								HX_STACK_LINE(553)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
							}
						}
						HX_STACK_LINE(556)
						this->_matrix->translate(-(this->borderSize),-(this->borderSize));
						HX_STACK_LINE(557)
						this->_formatAdjusted->color = this->_format->color;
						HX_STACK_LINE(558)
						this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					}
					else{
						HX_STACK_LINE(560)
						if (((this->borderStyle == (int)2))){
							HX_STACK_LINE(564)
							this->_formatAdjusted->color = this->borderColor;
							HX_STACK_LINE(565)
							this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(567)
							Float itd = delta;		HX_STACK_VAR(itd,"itd");
							HX_STACK_LINE(568)
							{
								HX_STACK_LINE(568)
								int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
								int _g = (iterations + (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(568)
								while(((_g1 < _g))){
									HX_STACK_LINE(568)
									int iter = (_g1)++;		HX_STACK_VAR(iter,"iter");
									HX_STACK_LINE(570)
									this->_matrix->translate(-(itd),-(itd));
									HX_STACK_LINE(571)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(572)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(573)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(574)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(575)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(576)
									this->_matrix->translate((int)0,itd);
									HX_STACK_LINE(577)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(578)
									this->_matrix->translate((int)0,itd);
									HX_STACK_LINE(579)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(580)
									this->_matrix->translate(-(itd),(int)0);
									HX_STACK_LINE(581)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(582)
									this->_matrix->translate(-(itd),(int)0);
									HX_STACK_LINE(583)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(584)
									this->_matrix->translate((int)0,-(itd));
									HX_STACK_LINE(585)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(586)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(587)
									hx::AddEq(itd,delta);
								}
							}
							HX_STACK_LINE(590)
							this->_formatAdjusted->color = this->_format->color;
							HX_STACK_LINE(591)
							this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
						}
						else{
							HX_STACK_LINE(593)
							if (((this->borderStyle == (int)3))){
								HX_STACK_LINE(598)
								this->_formatAdjusted->color = this->borderColor;
								HX_STACK_LINE(599)
								this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(601)
								Float itd = delta;		HX_STACK_VAR(itd,"itd");
								HX_STACK_LINE(602)
								{
									HX_STACK_LINE(602)
									int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
									int _g = (iterations + (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(602)
									while(((_g1 < _g))){
										HX_STACK_LINE(602)
										int iter = (_g1)++;		HX_STACK_VAR(iter,"iter");
										HX_STACK_LINE(604)
										this->_matrix->translate(-(itd),-(itd));
										HX_STACK_LINE(605)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(606)
										this->_matrix->translate((itd * (int)2),(int)0);
										HX_STACK_LINE(607)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(608)
										this->_matrix->translate((int)0,(itd * (int)2));
										HX_STACK_LINE(609)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(610)
										this->_matrix->translate((-(itd) * (int)2),(int)0);
										HX_STACK_LINE(611)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(612)
										this->_matrix->translate(itd,-(itd));
										HX_STACK_LINE(613)
										hx::AddEq(itd,delta);
									}
								}
								HX_STACK_LINE(616)
								this->_formatAdjusted->color = this->_format->color;
								HX_STACK_LINE(617)
								this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
							}
						}
					}
				}
				HX_STACK_LINE(622)
				this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
				HX_STACK_LINE(623)
				this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
			}
			HX_STACK_LINE(627)
			if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->cachedGraphics->bitmap->get_width())))) || bool((this->framePixels->get_height() != this->cachedGraphics->bitmap->get_height()))))){
				HX_STACK_LINE(629)
				if (((this->framePixels != null()))){
					HX_STACK_LINE(630)
					this->framePixels->dispose();
				}
				HX_STACK_LINE(632)
				this->framePixels = ::flash::display::BitmapData_obj::__new(this->cachedGraphics->bitmap->get_width(),this->cachedGraphics->bitmap->get_height(),true,(int)0,null());
			}
			HX_STACK_LINE(635)
			this->framePixels->copyPixels(this->cachedGraphics->bitmap,this->_flashRect,this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(637)
			if ((this->useColorTransform)){
				HX_STACK_LINE(638)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
			HX_STACK_LINE(642)
			this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		}
		HX_STACK_LINE(646)
		this->dirty = false;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_PUSH("FlxText::regenGraphics","flixel/text/FlxText.hx",460);
		HX_STACK_THIS(this);
		HX_STACK_LINE(460)
		if ((this->_regen)){
			HX_STACK_LINE(464)
			this->set_height(this->_textField->get_textHeight());
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				::flixel::text::FlxText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(466)
				_g->set_height((_g->get_height() + (int)4));
			}
			HX_STACK_LINE(467)
			::String key = this->cachedGraphics->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(468)
			::flixel::FlxG_obj::bitmap->remove(key);
			HX_STACK_LINE(470)
			this->makeGraphic(::Std_obj::_int((this->get_width() + this->_widthInc)),::Std_obj::_int((this->get_height() + this->_heightInc)),(int)0,false,key);
			HX_STACK_LINE(471)
			this->frameHeight = ::Std_obj::_int(this->get_height());
			HX_STACK_LINE(472)
			this->_textField->set_height((this->get_height() * 1.2));
			HX_STACK_LINE(473)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(474)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(475)
			this->_flashRect->width = (this->get_width() + this->_widthInc);
			HX_STACK_LINE(476)
			this->_flashRect->height = (this->get_height() + this->_heightInc);
			HX_STACK_LINE(477)
			this->_regen = false;
		}
		else{
			HX_STACK_LINE(481)
			this->cachedGraphics->bitmap->fillRect(this->_flashRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

::flash::text::TextField FlxText_obj::get_textField( ){
	HX_STACK_PUSH("FlxText::get_textField","flixel/text/FlxText.hx",455);
	HX_STACK_THIS(this);
	HX_STACK_LINE(455)
	return this->_textField;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_textField,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_PUSH("FlxText::set_borderQuality","flixel/text/FlxText.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(440)
	if (((Value < (int)0))){
		HX_STACK_LINE(441)
		Value = (int)0;
	}
	else{
		HX_STACK_LINE(442)
		if (((Value > (int)1))){
			HX_STACK_LINE(443)
			Value = (int)1;
		}
	}
	HX_STACK_LINE(445)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(446)
		this->dirty = true;
	}
	HX_STACK_LINE(449)
	this->borderQuality = Value;
	HX_STACK_LINE(451)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_PUSH("FlxText::set_borderSize","flixel/text/FlxText.hx",427);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(428)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(430)
		this->_regen = true;
		HX_STACK_LINE(431)
		this->dirty = true;
	}
	HX_STACK_LINE(433)
	this->borderSize = Value;
	HX_STACK_LINE(435)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_PUSH("FlxText::set_borderColor","flixel/text/FlxText.hx",414);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(415)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(417)
	if (((bool((this->borderColor != Color)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(418)
		this->dirty = true;
	}
	HX_STACK_LINE(421)
	this->borderColor = Color;
	HX_STACK_LINE(423)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

int FlxText_obj::set_borderStyle( int style){
	HX_STACK_PUSH("FlxText::set_borderStyle","flixel/text/FlxText.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_ARG(style,"style");
	HX_STACK_LINE(404)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(406)
		this->borderStyle = style;
		HX_STACK_LINE(407)
		this->dirty = true;
	}
	HX_STACK_LINE(410)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

Void FlxText_obj::setBorderStyle( int Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_PUSH("FlxText::setBorderStyle","flixel/text/FlxText.hx",395);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Quality,"Quality");
{
		HX_STACK_LINE(396)
		this->set_borderStyle(Style);
		HX_STACK_LINE(397)
		this->set_borderColor(Color);
		HX_STACK_LINE(398)
		this->set_borderSize(Size);
		HX_STACK_LINE(399)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::set_alignment","flixel/text/FlxText.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(377)
	this->_format->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(378)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(379)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(380)
	this->dirty = true;
	HX_STACK_LINE(381)
	this->_regen = true;
	HX_STACK_LINE(383)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_PUSH("FlxText::get_alignment","flixel/text/FlxText.hx",371);
	HX_STACK_THIS(this);
	HX_STACK_LINE(371)
	return hx::TCast< String >::cast(this->_format->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_PUSH("FlxText::set_wordWrap","flixel/text/FlxText.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(361)
	if (((this->_textField->get_wordWrap() != value))){
		HX_STACK_LINE(363)
		this->_textField->set_wordWrap(value);
		HX_STACK_LINE(364)
		this->_textField->set_multiline(value);
		HX_STACK_LINE(365)
		this->_regen = true;
	}
	HX_STACK_LINE(367)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_PUSH("FlxText::get_wordWrap","flixel/text/FlxText.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_LINE(355)
	return this->_textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_PUSH("FlxText::set_bold","flixel/text/FlxText.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(343)
	if (((this->_format->bold != value))){
		HX_STACK_LINE(345)
		this->_format->bold = value;
		HX_STACK_LINE(346)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(347)
		this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(348)
		this->_regen = true;
	}
	HX_STACK_LINE(351)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_PUSH("FlxText::get_bold","flixel/text/FlxText.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	return this->_format->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_PUSH("FlxText::set_systemFont","flixel/text/FlxText.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(328)
	this->_textField->set_embedFonts(false);
	HX_STACK_LINE(329)
	this->_format->font = Font;
	HX_STACK_LINE(330)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(331)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(332)
	this->_regen = true;
	HX_STACK_LINE(333)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_PUSH("FlxText::get_systemFont","flixel/text/FlxText.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_PUSH("FlxText::get_embedded","flixel/text/FlxText.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(317)
	return this->_textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_PUSH("FlxText::set_font","flixel/text/FlxText.hx",307);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(308)
	this->_textField->set_embedFonts(true);
	HX_STACK_LINE(309)
	this->_format->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
	HX_STACK_LINE(310)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(311)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(312)
	this->_regen = true;
	HX_STACK_LINE(313)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

::String FlxText_obj::get_font( ){
	HX_STACK_PUSH("FlxText::get_font","flixel/text/FlxText.hx",302);
	HX_STACK_THIS(this);
	HX_STACK_LINE(302)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_PUSH("FlxText::set_color","flixel/text/FlxText.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(292)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(293)
	this->_format->color = Color;
	HX_STACK_LINE(294)
	this->color = Color;
	HX_STACK_LINE(295)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(296)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(297)
	this->dirty = true;
	HX_STACK_LINE(298)
	return Color;
}


Float FlxText_obj::set_size( Float Size){
	HX_STACK_PUSH("FlxText::set_size","flixel/text/FlxText.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(279)
	this->_format->size = Size;
	HX_STACK_LINE(280)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(281)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(282)
	this->_regen = true;
	HX_STACK_LINE(284)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_size( ){
	HX_STACK_PUSH("FlxText::get_size","flixel/text/FlxText.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(273)
	return this->_format->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_PUSH("FlxText::set_text","flixel/text/FlxText.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(261)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(262)
	this->_textField->set_text(Text);
	HX_STACK_LINE(264)
	if (((this->_textField->get_text() != ot))){
		HX_STACK_LINE(265)
		this->_regen = true;
	}
	HX_STACK_LINE(269)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

::String FlxText_obj::get_text( ){
	HX_STACK_PUSH("FlxText::get_text","flixel/text/FlxText.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

Float FlxText_obj::set_width( Float Width){
	HX_STACK_PUSH("FlxText::set_width","flixel/text/FlxText.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_LINE(241)
	if (((Width != this->get_width()))){
		HX_STACK_LINE(243)
		Float newWidth = this->super::set_width(Width);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(244)
		if (((this->_textField != null()))){
			HX_STACK_LINE(245)
			this->_textField->set_width(newWidth);
		}
		HX_STACK_LINE(248)
		this->_regen = true;
	}
	HX_STACK_LINE(251)
	return Width;
}


::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int BorderStyle = __o_BorderStyle.Default(0);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_PUSH("FlxText::setFormat","flixel/text/FlxText.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(BorderStyle,"BorderStyle");
	HX_STACK_ARG(BorderColor,"BorderColor");
	HX_STACK_ARG(Embedded,"Embedded");
{
		HX_STACK_LINE(208)
		if ((Embedded)){
			HX_STACK_LINE(209)
			if (((Font == null()))){
				HX_STACK_LINE(211)
				this->_format->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
			}
			else{
				HX_STACK_LINE(215)
				this->_format->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
			}
		}
		else{
			HX_STACK_LINE(219)
			if (((Font != null()))){
				HX_STACK_LINE(220)
				this->_format->font = Font;
			}
		}
		HX_STACK_LINE(224)
		this->_textField->set_embedFonts(Embedded);
		HX_STACK_LINE(226)
		this->_format->size = Size;
		HX_STACK_LINE(227)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(228)
		this->_format->color = Color;
		HX_STACK_LINE(229)
		this->_format->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(230)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(231)
		this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(232)
		this->set_borderStyle(BorderStyle);
		HX_STACK_LINE(233)
		this->set_borderColor(BorderColor);
		HX_STACK_LINE(234)
		this->_regen = true;
		HX_STACK_LINE(236)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","flixel/text/FlxText.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(186)
		this->_textField = null();
		HX_STACK_LINE(187)
		this->_format = null();
		HX_STACK_LINE(188)
		this->_formatAdjusted = null();
		HX_STACK_LINE(189)
		this->_filters = null();
		HX_STACK_LINE(191)
		this->super::destroy();
	}
return null();
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(_heightInc,"_heightInc");
	HX_MARK_MEMBER_NAME(_widthInc,"_widthInc");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(embedded,"embedded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_heightInc,"_heightInc");
	HX_VISIT_MEMBER_NAME(_widthInc,"_widthInc");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(embedded,"embedded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"embedded") ) { return inCallProp ? get_embedded() : embedded; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { return _widthInc; }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return get_textField(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_heightInc") ) { return _heightInc; }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textField") ) { return get_textField_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"embedded") ) { embedded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_widthInc") ) { _widthInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_heightInc") ) { _heightInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_heightInc"));
	outFields->push(HX_CSTRING("_widthInc"));
	outFields->push(HX_CSTRING("_filters"));
	outFields->push(HX_CSTRING("_regen"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("textField"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clearFilters"),
	HX_CSTRING("removeFilter"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("_heightInc"),
	HX_CSTRING("_widthInc"),
	HX_CSTRING("_filters"),
	HX_CSTRING("updateFormat"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("get_textField"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_width"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_regen"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_format"),
	HX_CSTRING("_textField"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderStyle"),
	HX_CSTRING("embedded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
