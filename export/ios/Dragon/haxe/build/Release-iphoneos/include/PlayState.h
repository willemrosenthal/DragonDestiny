#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(DragonBody)
HX_DECLARE_CLASS0(DragonHead)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS0(Wall)
HX_DECLARE_CLASS0(WeatherParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PlayState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		virtual Void touchWall( ::flixel::FlxSprite d,::flixel::FlxSprite wall);
		Dynamic touchWall_dyn();

		virtual Void speedUp( );
		Dynamic speedUp_dyn();

		virtual Void wallPlacer( );
		Dynamic wallPlacer_dyn();

		virtual Void update( );

		virtual Void addWalls( hx::Null< int >  num);
		Dynamic addWalls_dyn();

		virtual Void addStars( hx::Null< int >  num);
		Dynamic addStars_dyn();

		virtual Void addBody( hx::Null< int >  num);
		Dynamic addBody_dyn();

		virtual Void setupUI( );
		Dynamic setupUI_dyn();

		virtual Void create( );

		::flixel::text::FlxText scoreTxt;
		Float speedUpRate;
		Float current;
		Float last;
		Float change;
		Float maxStep;
		Float spaceSizeRange;
		Float spaceSizeMin;
		Float spaceSize;
		Float fp;
		int numWalls;
		int wallSpacing;
		Array< ::Dynamic > wallsBottom;
		Array< ::Dynamic > wallsTop;
		::flixel::FlxSprite _sprite;
		::flixel::tweens::FlxTween _tween;
		int dbLast;
		Float dbDistance;
		int numBodies;
		::flixel::group::FlxGroup body;
		::flixel::group::FlxGroup blur;
		::flixel::group::FlxGroup walls;
		::flixel::group::FlxGroup space;
		Array< ::Dynamic > stars;
		Array< ::Dynamic > dragonBodies;
		::DragonHead dragon;
		::flixel::text::FlxText blueScore;
		::flixel::text::FlxText redScore;
		::flixel::group::FlxGroup UI;
};


#endif /* INCLUDED_PlayState */ 
