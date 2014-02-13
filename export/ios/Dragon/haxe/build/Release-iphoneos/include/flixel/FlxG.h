#ifndef INCLUDED_flixel_FlxG
#define INCLUDED_flixel_FlxG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxG)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,CameraFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,ConsoleFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,LogFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,PluginFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,SoundFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,VCRFrontEnd)
HX_DECLARE_CLASS3(flixel,system,frontEnds,WatchFrontEnd)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,system,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKeyShortcuts)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS4(flixel,system,input,mouse,FlxMouse)
HX_DECLARE_CLASS4(flixel,system,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxG_obj OBJ_;
		FlxG_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxG"); }

		static Dynamic __meta__;
		static ::String LIBRARY_NAME;
		static ::String LIBRARY_MAJOR_VERSION;
		static ::String LIBRARY_MINOR_VERSION;
		static ::flixel::FlxGame game;
		static bool paused;
		static bool autoPause;
		static bool autoResize;
		static bool fixedTimestep;
		static Float elapsed;
		static Float timeScale;
		static int width;
		static int height;
		static ::flixel::util::FlxRect worldBounds;
		static int worldDivisions;
		static ::flixel::FlxCamera camera;
		static ::flixel::util::FlxSave save;
		static ::flixel::system::input::mouse::FlxMouse mouse;
		static ::flixel::system::input::keyboard::FlxKeyboard keyboard;
		static ::flixel::system::input::keyboard::FlxKeyShortcuts keys;
		static ::flixel::system::input::touch::FlxTouchManager touches;
		static ::flixel::system::input::gamepad::FlxGamepadManager gamepads;
		static ::flixel::system::frontEnds::InputFrontEnd inputs;
		static ::flixel::system::frontEnds::ConsoleFrontEnd console;
		static ::flixel::system::frontEnds::LogFrontEnd log;
		static ::flixel::system::frontEnds::WatchFrontEnd watch;
		static ::flixel::system::frontEnds::DebuggerFrontEnd debugger;
		static ::flixel::system::frontEnds::VCRFrontEnd vcr;
		static ::flixel::system::frontEnds::BitmapFrontEnd bitmap;
		static ::flixel::system::frontEnds::CameraFrontEnd cameras;
		static ::flixel::system::frontEnds::PluginFrontEnd plugins;
		static ::flixel::system::frontEnds::SoundFrontEnd sound;
		static Void init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom);
		static Dynamic init_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static ::String get_libraryName( );
		static Dynamic get_libraryName_dyn();

		static int get_framerate( );
		static Dynamic get_framerate_dyn();

		static int set_framerate( int Framerate);
		static Dynamic set_framerate_dyn();

		static int get_flashFramerate( );
		static Dynamic get_flashFramerate_dyn();

		static int set_flashFramerate( int Framerate);
		static Dynamic set_flashFramerate_dyn();

		static Void resetGame( );
		static Dynamic resetGame_dyn();

		static Void resizeGame( int Width,int Height);
		static Dynamic resizeGame_dyn();

		static bool fullscreen;
		static bool set_fullscreen( bool Value);
		static Dynamic set_fullscreen_dyn();

		static ::flash::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static ::flixel::FlxState get_state( );
		static Dynamic get_state_dyn();

		static Void switchState( ::flixel::FlxState State);
		static Dynamic switchState_dyn();

		static Void resetState( );
		static Dynamic resetState_dyn();

		static bool overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		static Dynamic overlap_dyn();

		static bool pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  AlphaTolerance,::flixel::FlxCamera Camera);
		static Dynamic pixelPerfectOverlap_dyn();

		static bool collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback);
		static Dynamic collide_dyn();

		static Dynamic safeDestroy( ::flixel::IDestroyable Object);
		static Dynamic safeDestroy_dyn();

		static ::flash::display::DisplayObject addChildBelowMouse( ::flash::display::DisplayObject Child,hx::Null< int >  IndexModifier);
		static Dynamic addChildBelowMouse_dyn();

		static ::flash::display::DisplayObject removeChild( ::flash::display::DisplayObject Child);
		static Dynamic removeChild_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxG */ 
