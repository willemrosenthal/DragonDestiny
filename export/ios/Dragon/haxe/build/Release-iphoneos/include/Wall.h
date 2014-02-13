#ifndef INCLUDED_Wall
#define INCLUDED_Wall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Wall)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Wall_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Wall_obj OBJ_;
		Wall_obj();
		Void __construct(Float X,Float Y,hx::Null< bool >  __o_Top);

	public:
		static hx::ObjectPtr< Wall_obj > __new(Float X,Float Y,hx::Null< bool >  __o_Top);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Wall_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Wall"); }

		virtual Void update( );

		int bTimer;
		bool top;
		bool count;
};


#endif /* INCLUDED_Wall */ 
