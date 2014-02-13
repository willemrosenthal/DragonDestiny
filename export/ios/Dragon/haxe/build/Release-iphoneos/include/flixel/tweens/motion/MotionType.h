#ifndef INCLUDED_flixel_tweens_motion_MotionType
#define INCLUDED_flixel_tweens_motion_MotionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,tweens,motion,MotionType)
namespace flixel{
namespace tweens{
namespace motion{


class MotionType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MotionType_obj OBJ_;

	public:
		MotionType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flixel.tweens.motion.MotionType"); }
		::String __ToString() const { return HX_CSTRING("MotionType.") + tag; }

		static ::flixel::tweens::motion::MotionType CIRCULAR;
		static inline ::flixel::tweens::motion::MotionType CIRCULAR_dyn() { return CIRCULAR; }
		static ::flixel::tweens::motion::MotionType CUBIC;
		static inline ::flixel::tweens::motion::MotionType CUBIC_dyn() { return CUBIC; }
		static ::flixel::tweens::motion::MotionType LINEAR;
		static inline ::flixel::tweens::motion::MotionType LINEAR_dyn() { return LINEAR; }
		static ::flixel::tweens::motion::MotionType QUAD;
		static inline ::flixel::tweens::motion::MotionType QUAD_dyn() { return QUAD; }
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_MotionType */ 
