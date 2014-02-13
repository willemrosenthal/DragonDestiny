#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#define INCLUDED_flixel_system_input_mouse_FlxMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/FlxPoint.h>
#include <flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,system,input,mouse,FlxMouse)
HX_DECLARE_CLASS4(flixel,system,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS3(flixel,system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace system{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouse_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef FlxMouse_obj OBJ_;
		FlxMouse_obj();
		Void __construct(::flash::display::Sprite CursorContainer);

	public:
		static hx::ObjectPtr< FlxMouse_obj > __new(::flash::display::Sprite CursorContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::system::input::IFlxInput_obj *()
			{ return new ::flixel::system::input::IFlxInput_delegate_< FlxMouse_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxMouse"); }

		virtual bool set_useSystemCursor( bool value);
		Dynamic set_useSystemCursor_dyn();

		bool useSystemCursor;
		virtual Void hideSystemCursor( );
		Dynamic hideSystemCursor_dyn();

		virtual Void showSystemCursor( );
		Dynamic showSystemCursor_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void playback( ::flixel::system::replay::MouseRecord Record);
		Dynamic playback_dyn();

		virtual ::flixel::system::replay::MouseRecord record( );
		Dynamic record_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::flixel::util::FlxPoint getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::flixel::util::FlxPoint getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void load( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic load_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic show_dyn();

		virtual Void destroy( );

		virtual Void onMouseWheel( ::flash::events::MouseEvent FlashEvent);
		Dynamic onMouseWheel_dyn();

		::flixel::util::FlxPoint _globalScreenPosition;
		::flixel::util::FlxPoint _point;
		int _lastWheel;
		int _lastY;
		int _lastX;
		bool _wheelUsed;
		::flash::display::BitmapData _cursorBitmapData;
		::flash::display::Bitmap _cursor;
		bool _updateCursorContainer;
		::flash::display::Sprite cursorContainer;
		::flixel::system::input::mouse::FlxMouseButton _leftButton;
		bool visible;
		int screenY;
		int screenX;
		int wheel;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_system_input_mouse_FlxMouse */ 
