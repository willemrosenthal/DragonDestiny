#ifndef INCLUDED_WeatherParticle
#define INCLUDED_WeatherParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(WeatherParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)


class HXCPP_CLASS_ATTRIBUTES  WeatherParticle_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef WeatherParticle_obj OBJ_;
		WeatherParticle_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< WeatherParticle_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WeatherParticle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WeatherParticle"); }

		virtual Void update( );

		bool stickToScreen;
};


#endif /* INCLUDED_WeatherParticle */ 
