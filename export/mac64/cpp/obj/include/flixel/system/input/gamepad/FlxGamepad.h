#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepad
#define INCLUDED_flixel_system_input_gamepad_FlxGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(flixel,system,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,system,input,gamepad,FlxGamepadButton)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace flixel{
namespace system{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepad_obj OBJ_;
		FlxGamepad_obj();
		Void __construct(int ID,hx::Null< Float >  __o_GlobalDeadZone);

	public:
		static hx::ObjectPtr< FlxGamepad_obj > __new(int ID,hx::Null< Float >  __o_GlobalDeadZone);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGamepad_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGamepad"); }

		virtual bool anyInput( );
		Dynamic anyInput_dyn();

		virtual bool anyButton( );
		Dynamic anyButton_dyn();

		virtual Float getAxis( int AxisID);
		Dynamic getAxis_dyn();

		virtual bool justReleased( int ButtonID);
		Dynamic justReleased_dyn();

		virtual bool justPressed( int ButtonID);
		Dynamic justPressed_dyn();

		virtual bool pressed( int ButtonID);
		Dynamic pressed_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::flixel::system::input::gamepad::FlxGamepadButton getButton( int ButtonID);
		Dynamic getButton_dyn();

		Float deadZone;
		int id;
		::flixel::util::FlxPoint ball;
		::flixel::util::FlxPoint hat;
		Array< Float > axis;
		::haxe::ds::IntMap buttons;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_system_input_gamepad_FlxGamepad */ 
