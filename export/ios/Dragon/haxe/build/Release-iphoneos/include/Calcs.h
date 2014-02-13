#ifndef INCLUDED_Calcs
#define INCLUDED_Calcs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Calcs)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Calcs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Calcs_obj OBJ_;
		Calcs_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Calcs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Calcs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Calcs"); }

		static ::flixel::util::FlxPoint randomOnScreen( hx::Null< Float >  Padding,hx::Null< Float >  PaddingY);
		static Dynamic randomOnScreen_dyn();

		static Float plusOrMinus( hx::Null< Float >  Value);
		static Dynamic plusOrMinus_dyn();

};


#endif /* INCLUDED_Calcs */ 
