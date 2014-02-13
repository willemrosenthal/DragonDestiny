#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TexturePackerData_obj::__construct(::String description,::String assetName)
{
HX_STACK_PUSH("TexturePackerData::new","flixel/util/loaders/TexturePackerData.hx",30);
{
	HX_STACK_LINE(31)
	this->assetName = assetName;
	HX_STACK_LINE(32)
	this->description = description;
	HX_STACK_LINE(34)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->parseData();
}
;
	return null();
}

TexturePackerData_obj::~TexturePackerData_obj() { }

Dynamic TexturePackerData_obj::__CreateEmpty() { return  new TexturePackerData_obj; }
hx::ObjectPtr< TexturePackerData_obj > TexturePackerData_obj::__new(::String description,::String assetName)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(description,assetName);
	return result;}

Dynamic TexturePackerData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TexturePackerData_obj::destroy( ){
{
		HX_STACK_PUSH("TexturePackerData::destroy","flixel/util/loaders/TexturePackerData.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(82)
		int l = this->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while(((_g < l))){
				HX_STACK_LINE(83)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(85)
				this->frames->__get(i).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >()->destroy();
			}
		}
		HX_STACK_LINE(87)
		this->frames = null();
		HX_STACK_LINE(88)
		this->assetName = null();
		HX_STACK_LINE(89)
		this->asset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,destroy,(void))

Void TexturePackerData_obj::parseData( ){
{
		HX_STACK_PUSH("TexturePackerData::parseData","flixel/util/loaders/TexturePackerData.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		if (((this->frames->length != (int)0))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(48)
		if (((bool((this->assetName == null())) || bool((this->description == null()))))){
			HX_STACK_LINE(48)
			return null();
		}
		HX_STACK_LINE(50)
		this->asset = ::flixel::FlxG_obj::bitmap->add(this->assetName,null(),null())->bitmap;
		HX_STACK_LINE(51)
		Dynamic data = ::haxe::Json_obj::parse(::openfl::Assets_obj::getText(this->description));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = ::Lambda_obj::array(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(53)
				Dynamic frame = _g1->__GetItem(_g);		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(53)
				++(_g);
				HX_STACK_LINE(55)
				::flixel::util::loaders::TextureAtlasFrame texFrame = ::flixel::util::loaders::TextureAtlasFrame_obj::__new();		HX_STACK_VAR(texFrame,"texFrame");
				HX_STACK_LINE(56)
				texFrame->trimmed = frame->__Field(HX_CSTRING("trimmed"),true);
				HX_STACK_LINE(57)
				texFrame->rotated = frame->__Field(HX_CSTRING("rotated"),true);
				HX_STACK_LINE(58)
				texFrame->name = frame->__Field(HX_CSTRING("filename"),true);
				HX_STACK_LINE(60)
				texFrame->sourceSize = ::flixel::util::FlxPoint_obj::__new(frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("h"),true));
				HX_STACK_LINE(61)
				texFrame->offset = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
				HX_STACK_LINE(62)
				texFrame->offset->set(frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("y"),true));
				HX_STACK_LINE(64)
				if ((frame->__Field(HX_CSTRING("rotated"),true))){
					HX_STACK_LINE(65)
					texFrame->frame = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true));
				}
				else{
					HX_STACK_LINE(69)
					texFrame->frame = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true));
				}
				HX_STACK_LINE(73)
				this->frames->push(texFrame);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,parseData,(void))


TexturePackerData_obj::TexturePackerData_obj()
{
}

void TexturePackerData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TexturePackerData);
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(assetName,"assetName");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_END_CLASS();
}

void TexturePackerData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(assetName,"assetName");
	HX_VISIT_MEMBER_NAME(frames,"frames");
}

Dynamic TexturePackerData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseData") ) { return parseData_dyn(); }
		if (HX_FIELD_EQ(inName,"assetName") ) { return assetName; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TexturePackerData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { assetName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TexturePackerData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("description"));
	outFields->push(HX_CSTRING("assetName"));
	outFields->push(HX_CSTRING("frames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("parseData"),
	HX_CSTRING("asset"),
	HX_CSTRING("description"),
	HX_CSTRING("assetName"),
	HX_CSTRING("frames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

Class TexturePackerData_obj::__mClass;

void TexturePackerData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.TexturePackerData"), hx::TCanCast< TexturePackerData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TexturePackerData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
