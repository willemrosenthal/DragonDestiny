#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyShortcuts
#define INCLUDED_flixel_system_input_keyboard_FlxKeyShortcuts

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKeyList)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKeyShortcuts)
namespace flixel{
namespace system{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyShortcuts_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKeyShortcuts_obj OBJ_;
		FlxKeyShortcuts_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxKeyShortcuts_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxKeyShortcuts_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxKeyShortcuts"); }

		::flixel::system::input::keyboard::FlxKeyList justReleased;
		::flixel::system::input::keyboard::FlxKeyList justPressed;
		::flixel::system::input::keyboard::FlxKeyList pressed;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_system_input_keyboard_FlxKeyShortcuts */ 
