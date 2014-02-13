#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#define INCLUDED_flixel_system_frontEnds_SoundFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS3(flixel,system,frontEnds,SoundFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  SoundFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundFrontEnd_obj OBJ_;
		SoundFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SoundFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundFrontEnd"); }

		virtual Void loadSavedPrefs( );
		Dynamic loadSavedPrefs_dyn();

		virtual Void resumeSounds( );
		Dynamic resumeSounds_dyn();

		virtual Void pauseSounds( );
		Dynamic pauseSounds_dyn();

		virtual Void updateSounds( );
		Dynamic updateSounds_dyn();

		virtual Void destroySounds( hx::Null< bool >  ForceDestroy);
		Dynamic destroySounds_dyn();

		virtual Float set_volume( Float Volume);
		Dynamic set_volume_dyn();

		Float volume;
		virtual ::flixel::system::FlxSound stream( ::String URL,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic stream_dyn();

		virtual ::flixel::system::FlxSound play( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic play_dyn();

		virtual ::flixel::system::FlxSound load( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,hx::Null< bool >  AutoPlay,::String URL,Dynamic OnComplete);
		Dynamic load_dyn();

		virtual Void playMusic( Dynamic Music,hx::Null< Float >  Volume);
		Dynamic playMusic_dyn();

		Array< ::String > muteKeys;
		Array< ::String > volumeDownKeys;
		Array< ::String > volumeUpKeys;
		Dynamic volumeHandler;
		Dynamic &volumeHandler_dyn() { return volumeHandler;}
		bool muted;
		::flixel::group::FlxTypedGroup list;
		::flixel::system::FlxSound music;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_SoundFrontEnd */ 
