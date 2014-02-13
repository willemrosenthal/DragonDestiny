#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#define INCLUDED_flixel_system_frontEnds_CameraFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,system,frontEnds,CameraFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  CameraFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CameraFrontEnd_obj OBJ_;
		CameraFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CameraFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CameraFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CameraFrontEnd"); }

		virtual int set_bgColor( int Color);
		Dynamic set_bgColor_dyn();

		virtual int get_bgColor( );
		Dynamic get_bgColor_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		Dynamic shake_dyn();

		virtual Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void reset( ::flixel::FlxCamera NewCamera);
		Dynamic reset_dyn();

		virtual Void remove( ::flixel::FlxCamera Camera,hx::Null< bool >  Destroy);
		Dynamic remove_dyn();

		virtual ::flixel::FlxCamera add( ::flixel::FlxCamera NewCamera);
		Dynamic add_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		::flash::geom::Rectangle _cameraRect;
		bool useBufferLocking;
		Array< ::Dynamic > list;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_CameraFrontEnd */ 
