#ifndef INCLUDED_flixel_util_FlxRandom
#define INCLUDED_flixel_util_FlxRandom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxRandom)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxRandom_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRandom_obj OBJ_;
		FlxRandom_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxRandom_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxRandom_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxRandom"); }

		static Float globalSeed;
		static int intHelper;
		static int _int( );
		static Dynamic _int_dyn();

		static int intRanged( Dynamic Min,Dynamic Max,Array< int > Excludes);
		static Dynamic intRanged_dyn();

		static Float _float( );
		static Dynamic _float_dyn();

		static Float floatRanged( Dynamic min,Dynamic max);
		static Dynamic floatRanged_dyn();

		static Float srand( Float Seed);
		static Dynamic srand_dyn();

		static bool chanceRoll( hx::Null< Float >  Chance);
		static Dynamic chanceRoll_dyn();

		static Float sign( hx::Null< Float >  Chance);
		static Dynamic sign_dyn();

		static int color( hx::Null< int >  min,hx::Null< int >  max,hx::Null< int >  alpha);
		static Dynamic color_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxRandom */ 
