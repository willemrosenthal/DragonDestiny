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
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void CachedGraphics_obj::__construct(::String key,::flash::display::BitmapData bitmap,hx::Null< bool >  __o_persist)
{
HX_STACK_PUSH("CachedGraphics::new","flixel/util/loaders/CachedGraphics.hx",9);
bool persist = __o_persist.Default(false);
{
	HX_STACK_LINE(61)
	this->destroyOnNoUse = false;
	HX_STACK_LINE(55)
	this->_useCount = (int)0;
	HX_STACK_LINE(41)
	this->isDumped = false;
	HX_STACK_LINE(28)
	this->persist = false;
	HX_STACK_LINE(65)
	this->key = key;
	HX_STACK_LINE(66)
	this->bitmap = bitmap;
	HX_STACK_LINE(67)
	this->persist = persist;
}
;
	return null();
}

CachedGraphics_obj::~CachedGraphics_obj() { }

Dynamic CachedGraphics_obj::__CreateEmpty() { return  new CachedGraphics_obj; }
hx::ObjectPtr< CachedGraphics_obj > CachedGraphics_obj::__new(::String key,::flash::display::BitmapData bitmap,hx::Null< bool >  __o_persist)
{  hx::ObjectPtr< CachedGraphics_obj > result = new CachedGraphics_obj();
	result->__construct(key,bitmap,__o_persist);
	return result;}

Dynamic CachedGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CachedGraphics_obj > result = new CachedGraphics_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int CachedGraphics_obj::set_useCount( int Value){
	HX_STACK_PUSH("CachedGraphics::set_useCount","flixel/util/loaders/CachedGraphics.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(204)
	this->_useCount = Value;
	HX_STACK_LINE(206)
	if (((bool((bool((this->_useCount <= (int)0)) && bool(this->destroyOnNoUse))) && bool(!(this->persist))))){
		HX_STACK_LINE(207)
		::flixel::FlxG_obj::bitmap->remove(this->key);
	}
	HX_STACK_LINE(211)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,set_useCount,return )

int CachedGraphics_obj::get_useCount( ){
	HX_STACK_PUSH("CachedGraphics::get_useCount","flixel/util/loaders/CachedGraphics.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_LINE(198)
	return this->_useCount;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_useCount,return )

bool CachedGraphics_obj::get_canBeDumped( ){
	HX_STACK_PUSH("CachedGraphics::get_canBeDumped","flixel/util/loaders/CachedGraphics.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_LINE(193)
	return (bool((this->assetsClass != null())) || bool((this->assetsKey != null())));
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_canBeDumped,return )

Void CachedGraphics_obj::destroy( ){
{
		HX_STACK_PUSH("CachedGraphics::destroy","flixel/util/loaders/CachedGraphics.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_LINE(171)
		this->key = null();
		HX_STACK_LINE(172)
		if (((this->bitmap != null()))){
			HX_STACK_LINE(173)
			this->bitmap->dispose();
		}
		HX_STACK_LINE(176)
		this->bitmap = null();
		HX_STACK_LINE(177)
		if (((this->data != null()))){
			HX_STACK_LINE(178)
			this->data->destroy();
		}
		HX_STACK_LINE(181)
		this->data = null();
		HX_STACK_LINE(182)
		if (((this->_tilesheet != null()))){
			HX_STACK_LINE(183)
			this->_tilesheet->destroy();
		}
		HX_STACK_LINE(186)
		this->_tilesheet = null();
		HX_STACK_LINE(188)
		this->assetsKey = null();
		HX_STACK_LINE(189)
		this->assetsClass = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,destroy,(void))

::flixel::util::loaders::TextureRegion CachedGraphics_obj::getRegionForFrame( ::String frameName){
	HX_STACK_PUSH("CachedGraphics::getRegionForFrame","flixel/util/loaders/CachedGraphics.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameName,"frameName");
	HX_STACK_LINE(156)
	::flixel::util::loaders::TextureRegion region = ::flixel::util::loaders::TextureRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(157)
	::flixel::system::layer::frames::FlxFrame frame = this->get_tilesheet()->getFrame(frameName);		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(158)
	if (((frame != null()))){
		HX_STACK_LINE(160)
		region->region->startX = ::Std_obj::_int(frame->frame->x);
		HX_STACK_LINE(161)
		region->region->startY = ::Std_obj::_int(frame->frame->y);
		HX_STACK_LINE(162)
		region->region->width = ::Std_obj::_int(frame->frame->width);
		HX_STACK_LINE(163)
		region->region->height = ::Std_obj::_int(frame->frame->height);
	}
	HX_STACK_LINE(166)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,getRegionForFrame,return )

::flash::display::BitmapData CachedGraphics_obj::getBitmapFromSystem( ){
	HX_STACK_PUSH("CachedGraphics::getBitmapFromSystem","flixel/util/loaders/CachedGraphics.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(141)
	::flash::display::BitmapData newBitmap = null();		HX_STACK_VAR(newBitmap,"newBitmap");
	HX_STACK_LINE(142)
	if (((this->assetsClass != null()))){
		HX_STACK_LINE(143)
		newBitmap = ::Type_obj::createInstance(hx::TCast< Class >::cast(this->assetsClass),Dynamic( Array_obj<Dynamic>::__new()));
	}
	else{
		HX_STACK_LINE(146)
		if (((this->assetsKey != null()))){
			HX_STACK_LINE(147)
			newBitmap = ::openfl::Assets_obj::getBitmapData(this->assetsKey,false);
		}
	}
	HX_STACK_LINE(151)
	return newBitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,getBitmapFromSystem,return )

::flixel::system::layer::TileSheetData CachedGraphics_obj::get_tilesheet( ){
	HX_STACK_PUSH("CachedGraphics::get_tilesheet","flixel/util/loaders/CachedGraphics.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	if (((this->_tilesheet == null()))){
		HX_STACK_LINE(130)
		if ((this->isDumped)){
			HX_STACK_LINE(131)
			this->onContext();
		}
		HX_STACK_LINE(133)
		this->_tilesheet = ::flixel::system::layer::TileSheetData_obj::__new(this->bitmap);
	}
	HX_STACK_LINE(136)
	return this->_tilesheet;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_tilesheet,return )

Void CachedGraphics_obj::onContext( ){
{
		HX_STACK_PUSH("CachedGraphics::onContext","flixel/util/loaders/CachedGraphics.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		if ((this->isDumped)){
			HX_STACK_LINE(120)
			this->undump();
			HX_STACK_LINE(122)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,onContext,(void))

Void CachedGraphics_obj::undump( ){
{
		HX_STACK_PUSH("CachedGraphics::undump","flixel/util/loaders/CachedGraphics.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(89)
		if ((this->isDumped)){
			HX_STACK_LINE(93)
			::flash::display::BitmapData newBitmap = this->getBitmapFromSystem();		HX_STACK_VAR(newBitmap,"newBitmap");
			HX_STACK_LINE(95)
			if (((newBitmap != null()))){
				HX_STACK_LINE(97)
				this->bitmap = newBitmap;
				HX_STACK_LINE(98)
				if (((this->_tilesheet != null()))){
					HX_STACK_LINE(99)
					this->_tilesheet->onContext(newBitmap);
				}
			}
			HX_STACK_LINE(105)
			this->isDumped = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,undump,(void))

Void CachedGraphics_obj::dump( ){
{
		HX_STACK_PUSH("CachedGraphics::dump","flixel/util/loaders/CachedGraphics.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_LINE(75)
		if ((this->get_canBeDumped())){
			HX_STACK_LINE(79)
			this->bitmap->dumpBits();
			HX_STACK_LINE(80)
			this->isDumped = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,dump,(void))


CachedGraphics_obj::CachedGraphics_obj()
{
}

void CachedGraphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CachedGraphics);
	HX_MARK_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_MARK_MEMBER_NAME(_useCount,"_useCount");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(canBeDumped,"canBeDumped");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void CachedGraphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_VISIT_MEMBER_NAME(_useCount,"_useCount");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(canBeDumped,"canBeDumped");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic CachedGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"undump") ) { return undump_dyn(); }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCount") ) { return get_useCount(); }
		if (HX_FIELD_EQ(inName,"isDumped") ) { return isDumped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"_useCount") ) { return _useCount; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return inCallProp ? get_tilesheet() : tilesheet; }
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return assetsKey; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { return inCallProp ? get_canBeDumped() : canBeDumped; }
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return assetsClass; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return set_useCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useCount") ) { return get_useCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tilesheet") ) { return get_tilesheet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return destroyOnNoUse; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return get_canBeDumped_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRegionForFrame") ) { return getRegionForFrame_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return getBitmapFromSystem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CachedGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::util::loaders::TexturePackerData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCount") ) { return set_useCount(inValue); }
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_useCount") ) { _useCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::flixel::system::layer::TileSheetData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::flixel::system::layer::TileSheetData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { canBeDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CachedGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("destroyOnNoUse"));
	outFields->push(HX_CSTRING("_useCount"));
	outFields->push(HX_CSTRING("useCount"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("canBeDumped"));
	outFields->push(HX_CSTRING("isDumped"));
	outFields->push(HX_CSTRING("assetsClass"));
	outFields->push(HX_CSTRING("assetsKey"));
	outFields->push(HX_CSTRING("persist"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_useCount"),
	HX_CSTRING("get_useCount"),
	HX_CSTRING("get_canBeDumped"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getRegionForFrame"),
	HX_CSTRING("getBitmapFromSystem"),
	HX_CSTRING("get_tilesheet"),
	HX_CSTRING("onContext"),
	HX_CSTRING("undump"),
	HX_CSTRING("dump"),
	HX_CSTRING("destroyOnNoUse"),
	HX_CSTRING("_useCount"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("canBeDumped"),
	HX_CSTRING("isDumped"),
	HX_CSTRING("assetsClass"),
	HX_CSTRING("assetsKey"),
	HX_CSTRING("persist"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("data"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

Class CachedGraphics_obj::__mClass;

void CachedGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.loaders.CachedGraphics"), hx::TCanCast< CachedGraphics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CachedGraphics_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
