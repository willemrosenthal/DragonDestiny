#ifndef INCLUDED_Stars
#define INCLUDED_Stars

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <WeatherParticle.h>
HX_DECLARE_CLASS0(Stars)
HX_DECLARE_CLASS0(WeatherParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Stars_obj : public ::WeatherParticle_obj{
	public:
		typedef ::WeatherParticle_obj super;
		typedef Stars_obj OBJ_;
		Stars_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< Stars_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stars_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stars"); }

		virtual Void update( );

		int timerMax;
		int timer;
};


#endif /* INCLUDED_Stars */ 
