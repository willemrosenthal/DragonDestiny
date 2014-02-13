#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepadManager
#define INCLUDED_flixel_system_input_gamepad_FlxGamepadManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,system,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,system,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,events,JoystickEvent)
namespace flixel{
namespace system{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadManager_obj OBJ_;
		FlxGamepadManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxGamepadManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGamepadManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::system::input::IFlxInput_obj *()
			{ return new ::flixel::system::input::IFlxInput_delegate_< FlxGamepadManager_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxGamepadManager"); }

		virtual Float set_globalDeadZone( Float DeadZone);
		Dynamic set_globalDeadZone_dyn();

		Float globalDeadZone;
		virtual int get_numActiveGamepads( );
		Dynamic get_numActiveGamepads_dyn();

		int numActiveGamepads;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void handleHatMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleHatMove_dyn();

		virtual Void handleBallMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleBallMove_dyn();

		virtual Void handleAxisMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleAxisMove_dyn();

		virtual Void handleButtonUp( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleButtonUp_dyn();

		virtual Void handleButtonDown( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleButtonDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool anyJustReleased( int ButtonID);
		Dynamic anyJustReleased_dyn();

		virtual bool anyJustPressed( int ButtonID);
		Dynamic anyJustPressed_dyn();

		virtual bool anyPressed( int ButtonID);
		Dynamic anyPressed_dyn();

		virtual bool anyButton( );
		Dynamic anyButton_dyn();

		virtual ::flixel::system::input::gamepad::FlxGamepad get( int GamepadID);
		Dynamic get_dyn();

		::haxe::ds::IntMap _gamepads;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_system_input_gamepad_FlxGamepadManager */ 
