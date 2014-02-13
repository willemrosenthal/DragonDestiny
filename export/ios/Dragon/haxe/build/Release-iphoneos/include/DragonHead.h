#ifndef INCLUDED_DragonHead
#define INCLUDED_DragonHead

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(DragonHead)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)


class HXCPP_CLASS_ATTRIBUTES  DragonHead_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef DragonHead_obj OBJ_;
		DragonHead_obj();
		Void __construct(Float X,Float Y,int NumBodies,int FollowDistance);

	public:
		static hx::ObjectPtr< DragonHead_obj > __new(Float X,Float Y,int NumBodies,int FollowDistance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DragonHead_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DragonHead"); }

		virtual Void breakHead( );
		Dynamic breakHead_dyn();

		virtual Void update( );

		Float brokenSpin;
		bool broken;
		Float lastY;
		int bTimer;
		bool mouseDown;
		::flixel::effects::particles::FlxEmitter music;
		Float maxrot;
		Float speed;
		Float maxSpeed;
};


#endif /* INCLUDED_DragonHead */ 
