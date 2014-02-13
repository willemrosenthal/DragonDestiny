#ifndef INCLUDED_flixel_system_frontEnds_BmpLogFrontEnd
#define INCLUDED_flixel_system_frontEnds_BmpLogFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flixel,system,frontEnds,BmpLogFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  BmpLogFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BmpLogFrontEnd_obj OBJ_;
		BmpLogFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BmpLogFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BmpLogFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BmpLogFrontEnd"); }

		virtual Void add( ::flash::display::BitmapData Pixels);
		Dynamic add_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BmpLogFrontEnd */ 
