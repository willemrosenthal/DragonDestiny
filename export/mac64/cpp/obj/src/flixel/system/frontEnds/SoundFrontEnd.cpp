#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_PUSH("SoundFrontEnd::new","flixel/system/frontEnds/SoundFrontEnd.hx",10);
{
	HX_STACK_LINE(230)
	this->volume = 0.5;
	HX_STACK_LINE(28)
	this->volumeHandler = null();
	HX_STACK_LINE(23)
	this->muted = false;
	HX_STACK_LINE(55)
	this->volumeUpKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("PLUS")).Add(HX_CSTRING("NUMPADPLUS"));
	HX_STACK_LINE(56)
	this->volumeDownKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("MINUS")).Add(HX_CSTRING("NUMPASMINUS"));
	HX_STACK_LINE(57)
	this->muteKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("ZERO")).Add(HX_CSTRING("NUMPADZERO"));
	HX_STACK_LINE(60)
	this->list = ::flixel::group::FlxTypedGroup_obj::__new(null());
}
;
	return null();
}

SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_PUSH("SoundFrontEnd::loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",337);
		HX_STACK_THIS(this);
		HX_STACK_LINE(338)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true) != null()))){
			HX_STACK_LINE(339)
			this->set_volume(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true));
		}
		else{
			HX_STACK_LINE(343)
			this->set_volume(0.5);
		}
		HX_STACK_LINE(347)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true) != null()))){
			HX_STACK_LINE(348)
			this->muted = ::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true);
		}
		else{
			HX_STACK_LINE(352)
			this->muted = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Void SoundFrontEnd_obj::resumeSounds( ){
{
		HX_STACK_PUSH("SoundFrontEnd::resumeSounds","flixel/system/frontEnds/SoundFrontEnd.hx",317);
		HX_STACK_THIS(this);
		HX_STACK_LINE(318)
		if (((bool((this->music != null())) && bool(this->music->exists)))){
			HX_STACK_LINE(319)
			this->music->play(null());
		}
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list->get_members();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(323)
			while(((_g < _g1->length))){
				HX_STACK_LINE(323)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(323)
				++(_g);
				HX_STACK_LINE(325)
				if (((bool((sound != null())) && bool(sound->exists)))){
					HX_STACK_LINE(326)
					sound->resume();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resumeSounds,(void))

Void SoundFrontEnd_obj::pauseSounds( ){
{
		HX_STACK_PUSH("SoundFrontEnd::pauseSounds","flixel/system/frontEnds/SoundFrontEnd.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(299)
		if (((bool((bool((this->music != null())) && bool(this->music->exists))) && bool(this->music->active)))){
			HX_STACK_LINE(300)
			this->music->pause();
		}
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list->get_members();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(304)
			while(((_g < _g1->length))){
				HX_STACK_LINE(304)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(304)
				++(_g);
				HX_STACK_LINE(306)
				if (((bool((bool((sound != null())) && bool(sound->exists))) && bool(sound->active)))){
					HX_STACK_LINE(307)
					sound->pause();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pauseSounds,(void))

Void SoundFrontEnd_obj::updateSounds( ){
{
		HX_STACK_PUSH("SoundFrontEnd::updateSounds","flixel/system/frontEnds/SoundFrontEnd.hx",282);
		HX_STACK_THIS(this);
		HX_STACK_LINE(283)
		if (((bool((this->music != null())) && bool(this->music->active)))){
			HX_STACK_LINE(284)
			this->music->update();
		}
		HX_STACK_LINE(288)
		if (((bool((this->list != null())) && bool(this->list->active)))){
			HX_STACK_LINE(289)
			this->list->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,updateSounds,(void))

Void SoundFrontEnd_obj::destroySounds( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_PUSH("SoundFrontEnd::destroySounds","flixel/system/frontEnds/SoundFrontEnd.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ForceDestroy,"ForceDestroy");
{
		HX_STACK_LINE(263)
		if (((bool((this->music != null())) && bool(((bool(ForceDestroy) || bool(!(this->music->survive)))))))){
			HX_STACK_LINE(265)
			this->music->destroy();
			HX_STACK_LINE(266)
			this->music = null();
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list->get_members();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			while(((_g < _g1->length))){
				HX_STACK_LINE(269)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(269)
				++(_g);
				HX_STACK_LINE(271)
				if (((bool((sound != null())) && bool(((bool(ForceDestroy) || bool(!(sound->survive)))))))){
					HX_STACK_LINE(272)
					sound->destroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroySounds,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_PUSH("SoundFrontEnd::set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_LINE(237)
	this->volume = Volume;
	HX_STACK_LINE(239)
	if (((this->volume < (int)0))){
		HX_STACK_LINE(240)
		this->volume = (int)0;
	}
	else{
		HX_STACK_LINE(243)
		if (((this->volume > (int)1))){
			HX_STACK_LINE(244)
			this->volume = (int)1;
		}
	}
	HX_STACK_LINE(248)
	if (((this->volumeHandler_dyn() != null()))){
		HX_STACK_LINE(250)
		Float param = (  ((this->muted)) ? Float((int)0) : Float(this->volume) );		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(251)
		this->volumeHandler(param);
	}
	HX_STACK_LINE(253)
	return Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )

::flixel::system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_PUSH("SoundFrontEnd::stream","flixel/system/frontEnds/SoundFrontEnd.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_ARG(URL,"URL");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(216)
		return this->load(null(),Volume,Looped,AutoDestroy,true,URL,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,stream,return )

::flixel::system::FlxSound SoundFrontEnd_obj::play( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_PUSH("SoundFrontEnd::play","flixel/system/frontEnds/SoundFrontEnd.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(196)
		return this->load(EmbeddedSound,Volume,Looped,AutoDestroy,true,null(),OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,play,return )

::flixel::system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_PUSH("SoundFrontEnd::load","flixel/system/frontEnds/SoundFrontEnd.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(AutoPlay,"AutoPlay");
	HX_STACK_ARG(URL,"URL");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(108)
		if (((bool((EmbeddedSound == null())) && bool((URL == null()))))){
			HX_STACK_LINE(110)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxG.loadSound() requires either\nan embedded sound or a URL to work."));
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(114)
		::flixel::system::FlxSound sound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(116)
		if (((EmbeddedSound != null()))){
			HX_STACK_LINE(117)
			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
		}
		else{
			HX_STACK_LINE(121)
			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
		}
		HX_STACK_LINE(125)
		sound->set_volume(Volume);
		HX_STACK_LINE(127)
		if ((AutoPlay)){
			HX_STACK_LINE(128)
			sound->play(null());
		}
		HX_STACK_LINE(132)
		return sound;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,load,return )

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume){
Float Volume = __o_Volume.Default(1);
	HX_STACK_PUSH("SoundFrontEnd::playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Music,"Music");
	HX_STACK_ARG(Volume,"Volume");
{
		HX_STACK_LINE(78)
		if (((this->music == null()))){
			HX_STACK_LINE(79)
			this->music = ::flixel::system::FlxSound_obj::__new();
		}
		else{
			HX_STACK_LINE(82)
			if ((this->music->active)){
				HX_STACK_LINE(83)
				this->music->stop();
			}
		}
		HX_STACK_LINE(87)
		this->music->loadEmbedded(Music,true,null(),null());
		HX_STACK_LINE(88)
		this->music->set_volume(Volume);
		HX_STACK_LINE(89)
		this->music->survive = true;
		HX_STACK_LINE(90)
		this->music->play(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SoundFrontEnd_obj,playMusic,(void))


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(music,"music");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pauseSounds") ) { return pauseSounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeSounds") ) { return resumeSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSounds") ) { return updateSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"destroySounds") ) { return destroySounds_dyn(); }
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("muteKeys"));
	outFields->push(HX_CSTRING("volumeDownKeys"));
	outFields->push(HX_CSTRING("volumeUpKeys"));
	outFields->push(HX_CSTRING("muted"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("music"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadSavedPrefs"),
	HX_CSTRING("resumeSounds"),
	HX_CSTRING("pauseSounds"),
	HX_CSTRING("updateSounds"),
	HX_CSTRING("destroySounds"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("volume"),
	HX_CSTRING("stream"),
	HX_CSTRING("play"),
	HX_CSTRING("load"),
	HX_CSTRING("playMusic"),
	HX_CSTRING("muteKeys"),
	HX_CSTRING("volumeDownKeys"),
	HX_CSTRING("volumeUpKeys"),
	HX_CSTRING("volumeHandler"),
	HX_CSTRING("muted"),
	HX_CSTRING("list"),
	HX_CSTRING("music"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.SoundFrontEnd"), hx::TCanCast< SoundFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
