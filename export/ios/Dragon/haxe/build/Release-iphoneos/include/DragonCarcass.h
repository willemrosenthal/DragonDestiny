#ifndef INCLUDED_DragonCarcass
#define INCLUDED_DragonCarcass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(DragonCarcass)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)


class HXCPP_CLASS_ATTRIBUTES  DragonCarcass_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef DragonCarcass_obj OBJ_;
		DragonCarcass_obj();
		Void __construct(Float X,Float Y,hx::Null< bool >  __o_Head,hx::Null< Float >  __o_Angle,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY);

	public:
		static hx::ObjectPtr< DragonCarcass_obj > __new(Float X,Float Y,hx::Null< bool >  __o_Head,hx::Null< Float >  __o_Angle,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DragonCarcass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DragonCarcass"); }

		virtual Void update( );

		Float fSpeed;
		Float mSpeed;
};


#endif /* INCLUDED_DragonCarcass */ 
