#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#define INCLUDED_flixel_system_input_mouse_FlxMouseButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS4(flixel,system,input,mouse,FlxMouseButton)
namespace flixel{
namespace system{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMouseButton_obj OBJ_;
		FlxMouseButton_obj();
		Void __construct(hx::Null< bool >  __o_IsLeftMouse);

	public:
		static hx::ObjectPtr< FlxMouseButton_obj > __new(hx::Null< bool >  __o_IsLeftMouse);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMouseButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMouseButton"); }

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void onUp( ::flash::events::MouseEvent FlashEvent);
		Dynamic onUp_dyn();

		virtual Void onDown( ::flash::events::MouseEvent FlashEvent);
		Dynamic onDown_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool _isLeftMouse;
		int last;
		int current;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_system_input_mouse_FlxMouseButton */ 
