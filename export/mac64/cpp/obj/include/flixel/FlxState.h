#ifndef INCLUDED_flixel_FlxState
#define INCLUDED_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxState_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxState"); }

		virtual Void onResize( int Width,int Height);
		Dynamic onResize_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void destroy( );

		virtual Void subStateCloseHandler( hx::Null< bool >  Destroy);
		Dynamic subStateCloseHandler_dyn();

		virtual Void setSubState( ::flixel::FlxSubState RequestedState,Dynamic CloseCallback,hx::Null< bool >  DestroyPrevious);
		Dynamic setSubState_dyn();

		virtual Void closeSubState( hx::Null< bool >  Destroy);
		Dynamic closeSubState_dyn();

		virtual Void tryUpdate( );
		Dynamic tryUpdate_dyn();

		virtual Void draw( );

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void updateMouseVisibility( );
		Dynamic updateMouseVisibility_dyn();

		virtual bool set_useMouse( bool Value);
		Dynamic set_useMouse_dyn();

		virtual bool get_useMouse( );
		Dynamic get_useMouse_dyn();

		bool _useMouse;
		virtual int set_bgColor( int Value);
		Dynamic set_bgColor_dyn();

		virtual int get_bgColor( );
		Dynamic get_bgColor_dyn();

		int _bgColor;
		virtual ::flixel::FlxSubState get_subState( );
		Dynamic get_subState_dyn();

		::flixel::FlxSubState subState;
		::flixel::FlxSubState _subState;
		bool persistentDraw;
		bool persistentUpdate;
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxState */ 
