#ifndef INCLUDED_flixel_util_FlxColor
#define INCLUDED_flixel_util_FlxColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxColor)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColor_obj OBJ_;
		FlxColor_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxColor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxColor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxColor"); }

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxColor */ 
