#ifndef INCLUDED_flixel_system_input_keyboard_FlxKey
#define INCLUDED_flixel_system_input_keyboard_FlxKey

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKey)
namespace flixel{
namespace system{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKey_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKey_obj OBJ_;
		FlxKey_obj();
		Void __construct(::String Name);

	public:
		static hx::ObjectPtr< FlxKey_obj > __new(::String Name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxKey_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxKey"); }

		int last;
		int current;
		::String name;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_system_input_keyboard_FlxKey */ 
