#ifndef INCLUDED_flixel_ui_FlxTypedButton
#define INCLUDED_flixel_ui_FlxTypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedButton_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxTypedButton_obj OBJ_;
		FlxTypedButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		static hx::ObjectPtr< FlxTypedButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTypedButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedButton"); }

		virtual Void onMouseUp( ::flash::events::Event event);
		Dynamic onMouseUp_dyn();

		virtual Void setOnOutCallback( Dynamic Callback,Dynamic Params);
		Dynamic setOnOutCallback_dyn();

		virtual Void setOnOverCallback( Dynamic Callback,Dynamic Params);
		Dynamic setOnOverCallback_dyn();

		virtual Void setOnDownCallback( Dynamic Callback,Dynamic Params);
		Dynamic setOnDownCallback_dyn();

		virtual Void setOnUpCallback( Dynamic Callback,Dynamic Params);
		Dynamic setOnUpCallback_dyn();

		virtual Void setSounds( ::flash::media::Sound SoundOver,hx::Null< Float >  SoundOverVolume,::flash::media::Sound SoundOut,hx::Null< Float >  SoundOutVolume,::flash::media::Sound SoundDown,hx::Null< Float >  SoundDownVolume,::flash::media::Sound SoundUp,hx::Null< Float >  SoundUpVolume);
		Dynamic setSounds_dyn();

		virtual Void draw( );

		virtual bool updateButtonStatus( ::flixel::util::FlxPoint Point,::flixel::FlxCamera Camera,bool JustPressed,int touchID);
		Dynamic updateButtonStatus_dyn();

		virtual Void updateButton( );
		Dynamic updateButton_dyn();

		virtual Void update( );

		virtual Void destroy( );

		int _touchPointID;
		bool _initialized;
		bool _pressed;
		Dynamic _onOutParams;
		Dynamic _onOverParams;
		Dynamic _onDownParams;
		Dynamic _onUpParams;
		Dynamic _onOut;
		Dynamic _onOver;
		Dynamic _onDown;
		Dynamic _onUp;
		::flixel::system::FlxSound soundUp;
		::flixel::system::FlxSound soundDown;
		::flixel::system::FlxSound soundOut;
		::flixel::system::FlxSound soundOver;
		int status;
		::flixel::util::FlxPoint labelOffset;
		Dynamic label;
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxTypedButton */ 
