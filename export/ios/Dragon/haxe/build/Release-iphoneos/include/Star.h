#ifndef INCLUDED_Star
#define INCLUDED_Star

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <WeatherParticle.h>
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS0(WeatherParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Star_obj : public ::WeatherParticle_obj{
	public:
		typedef ::WeatherParticle_obj super;
		typedef Star_obj OBJ_;
		Star_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< Star_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Star_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Star"); }

		virtual Void update( );

		Float speed;
		Array< Float > scaleArray;
		Array< Float > alphaArray;
		Array< Float > speedArray;
};


#endif /* INCLUDED_Star */ 
