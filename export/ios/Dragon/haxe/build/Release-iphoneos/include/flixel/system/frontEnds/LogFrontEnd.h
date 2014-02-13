#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#define INCLUDED_flixel_system_frontEnds_LogFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,debug,LogStyle)
HX_DECLARE_CLASS3(flixel,system,frontEnds,LogFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  LogFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogFrontEnd_obj OBJ_;
		LogFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LogFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LogFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LogFrontEnd"); }

		virtual Void processTraceData( Dynamic Data,Dynamic Inf);
		Dynamic processTraceData_dyn();

		virtual bool set_redirectTraces( bool Redirect);
		Dynamic set_redirectTraces_dyn();

		Dynamic _oldTrace;
		bool redirectTraces;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void advanced( Dynamic Data,::flixel::system::debug::LogStyle Style,hx::Null< bool >  FireOnce);
		Dynamic advanced_dyn();

		virtual Void _notice( Dynamic Data);
		Dynamic _notice_dyn();

		Dynamic notice;
		virtual Void _error( Dynamic Data);
		Dynamic _error_dyn();

		Dynamic error;
		virtual Void _warn( Dynamic Data);
		Dynamic _warn_dyn();

		Dynamic warn;
		virtual Void _add( Dynamic Data);
		Dynamic _add_dyn();

		Dynamic add;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_LogFrontEnd */ 
