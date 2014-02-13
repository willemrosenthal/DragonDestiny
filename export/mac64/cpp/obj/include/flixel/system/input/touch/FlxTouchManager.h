#ifndef INCLUDED_flixel_system_input_touch_FlxTouchManager
#define INCLUDED_flixel_system_input_touch_FlxTouchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,system,input,touch,FlxTouch)
HX_DECLARE_CLASS4(flixel,system,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace flixel{
namespace system{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouchManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTouchManager_obj OBJ_;
		FlxTouchManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTouchManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTouchManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::system::input::IFlxInput_obj *()
			{ return new ::flixel::system::input::IFlxInput_delegate_< FlxTouchManager_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTouchManager"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual ::flixel::system::input::touch::FlxTouch recycle( Float X,Float Y,int PointID);
		Dynamic recycle_dyn();

		virtual ::flixel::system::input::touch::FlxTouch add( ::flixel::system::input::touch::FlxTouch Touch);
		Dynamic add_dyn();

		virtual Array< ::Dynamic > justReleased( Array< ::Dynamic > TouchArray);
		Dynamic justReleased_dyn();

		virtual Array< ::Dynamic > justStarted( Array< ::Dynamic > TouchArray);
		Dynamic justStarted_dyn();

		virtual Void handleTouchMove( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchMove_dyn();

		virtual Void handleTouchEnd( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchEnd_dyn();

		virtual Void handleTouchBegin( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchBegin_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::system::input::touch::FlxTouch getFirst( );
		Dynamic getFirst_dyn();

		::haxe::ds::IntMap _touchesCache;
		Array< ::Dynamic > _inactiveTouches;
		Array< ::Dynamic > list;
		static int maxTouchPoints;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_system_input_touch_FlxTouchManager */ 
