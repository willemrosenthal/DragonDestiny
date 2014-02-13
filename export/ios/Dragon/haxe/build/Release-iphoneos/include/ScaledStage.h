#ifndef INCLUDED_ScaledStage
#define INCLUDED_ScaledStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Stage.h>
HX_DECLARE_CLASS0(ScaledStage)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  ScaledStage_obj : public ::flash::display::Stage_obj{
	public:
		typedef ::flash::display::Stage_obj super;
		typedef ScaledStage_obj OBJ_;
		ScaledStage_obj();
		Void __construct(Dynamic inHandle,int inWidth,int inHeight);

	public:
		static hx::ObjectPtr< ScaledStage_obj > __new(Dynamic inHandle,int inWidth,int inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScaledStage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScaledStage"); }

		virtual int get_stageWidth( );

		virtual int get_stageHeight( );

		virtual int get___stageWidth( );
		Dynamic get___stageWidth_dyn();

		virtual int get___stageHeight( );
		Dynamic get___stageHeight_dyn();

		int __stageWidth;
		int __stageHeight;
};


#endif /* INCLUDED_ScaledStage */ 
