#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#define INCLUDED_flixel_system_frontEnds_InputFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  InputFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputFrontEnd_obj OBJ_;
		InputFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< InputFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InputFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InputFrontEnd"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::flixel::system::input::IFlxInput add( ::flixel::system::input::IFlxInput Input);
		Dynamic add_dyn();

		Array< ::Dynamic > list;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_InputFrontEnd */ 
