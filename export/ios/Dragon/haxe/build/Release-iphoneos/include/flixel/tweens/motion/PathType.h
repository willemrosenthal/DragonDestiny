#ifndef INCLUDED_flixel_tweens_motion_PathType
#define INCLUDED_flixel_tweens_motion_PathType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,tweens,motion,PathType)
namespace flixel{
namespace tweens{
namespace motion{


class PathType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef PathType_obj OBJ_;

	public:
		PathType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flixel.tweens.motion.PathType"); }
		::String __ToString() const { return HX_CSTRING("PathType.") + tag; }

		static ::flixel::tweens::motion::PathType LINEAR;
		static inline ::flixel::tweens::motion::PathType LINEAR_dyn() { return LINEAR; }
		static ::flixel::tweens::motion::PathType QUAD;
		static inline ::flixel::tweens::motion::PathType QUAD_dyn() { return QUAD; }
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_PathType */ 
