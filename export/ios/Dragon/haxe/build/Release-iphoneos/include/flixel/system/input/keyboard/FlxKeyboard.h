#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#define INCLUDED_flixel_system_input_keyboard_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS3(flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKey)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,system,replay,CodeValuePair)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyboard_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxKeyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxKeyboard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::system::input::IFlxInput_obj *()
			{ return new ::flixel::system::input::IFlxInput_delegate_< FlxKeyboard_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxKeyboard"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual bool inKeyArray( Array< ::String > KeyArray,int KeyCode);
		Dynamic inKeyArray_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Void playback( Array< ::Dynamic > Record);
		Dynamic playback_dyn();

		virtual Array< ::Dynamic > record( );
		Dynamic record_dyn();

		virtual bool checkKeyStatus( Dynamic KeyArray,int Status);
		Dynamic checkKeyStatus_dyn();

		virtual bool anyJustReleased( Dynamic KeyArray);
		Dynamic anyJustReleased_dyn();

		Dynamic justReleased;
		virtual bool anyJustPressed( Dynamic KeyArray);
		Dynamic anyJustPressed_dyn();

		Dynamic justPressed;
		virtual bool anyPressed( Dynamic KeyArray);
		Dynamic anyPressed_dyn();

		Dynamic pressed;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		Array< ::Dynamic > _keyList;
		::haxe::ds::StringMap _keyLookup;
		bool enabled;
};

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_system_input_keyboard_FlxKeyboard */ 
