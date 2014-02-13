#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKey
#include <flixel/system/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Void FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->pop().StaticCast< ::flixel::system::replay::FrameRecord >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,(void))

Dynamic FlxArrayUtil_obj::getRandom_flixel_group_FlxTypedGroup_T( Dynamic Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::getRandom_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",99);
	HX_STACK_ARG(Objects,"Objects");
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(100)
		if (((Objects != null()))){
			HX_STACK_LINE(102)
			if (((StartIndex < (int)0))){
				HX_STACK_LINE(102)
				StartIndex = (int)0;
			}
			HX_STACK_LINE(103)
			if (((Length < (int)0))){
				HX_STACK_LINE(103)
				Length = (int)0;
			}
			HX_STACK_LINE(105)
			int l = Length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(106)
			if (((bool((l == (int)0)) || bool((l > (Objects->__Field(HX_CSTRING("length"),true) - StartIndex)))))){
				HX_STACK_LINE(107)
				l = (Objects->__Field(HX_CSTRING("length"),true) - StartIndex);
			}
			HX_STACK_LINE(110)
			if (((l > (int)0))){
				struct _Function_3_1{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","flixel/util/FlxArrayUtil.hx",112);
						{
							HX_STACK_LINE(112)
							::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
							HX_STACK_LINE(112)
							if (((::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
								HX_STACK_LINE(112)
								hx::AddEq(::flixel::util::FlxRandom_obj::globalSeed,(int)1);
							}
							HX_STACK_LINE(112)
							return ::flixel::util::FlxRandom_obj::globalSeed;
						}
						return null();
					}
				};
				HX_STACK_LINE(111)
				return Objects->__GetItem((StartIndex + ::Std_obj::_int((_Function_3_1::Block() * l))));
			}
		}
		HX_STACK_LINE(115)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,getRandom_flixel_group_FlxTypedGroup_T,return )

Void FlxArrayUtil_obj::setLength_flixel_system_input_keyboard_FlxKey( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_flixel_system_input_keyboard_FlxKey","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->pop().StaticCast< ::flixel::system::input::keyboard::FlxKey >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_input_keyboard_FlxKey,(void))

Void FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( Dynamic array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,(void))

int FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T( Dynamic array,Dynamic whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__GetItem(i) == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_group_FlxTypedGroup_T,return )

int FlxArrayUtil_obj::indexOf_flixel_FlxCamera( Array< ::Dynamic > array,::flixel::FlxCamera whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_FlxCamera","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::FlxCamera >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_FlxCamera,return )

Void FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_Int","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,(void))

int FlxArrayUtil_obj::indexOf_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::util::FlxTimer >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_util_FlxTimer,return )

Void FlxArrayUtil_obj::setLength_Float( Array< Float > array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_Float","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Float,(void))

Void FlxArrayUtil_obj::setLength_String( Array< ::String > array,int newLength){
{
		HX_STACK_PUSH("FlxArrayUtil::setLength_String","flixel/util/FlxArrayUtil.hx",43);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(44)
		if (((newLength < (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(45)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(46)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(47)
		if (((diff < (int)0))){
			HX_STACK_LINE(52)
			diff = -(diff);
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while(((_g < diff))){
					HX_STACK_LINE(53)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_String,(void))

int FlxArrayUtil_obj::indexOf_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::tweens::FlxTween >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_tweens_FlxTween,return )

int FlxArrayUtil_obj::indexOf_flixel_system_layer_frames_FlxFrame( Array< ::Dynamic > array,::flixel::system::layer::frames::FlxFrame whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_system_layer_frames_FlxFrame","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::system::layer::frames::FlxFrame >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_system_layer_frames_FlxFrame,return )

int FlxArrayUtil_obj::indexOf_Int( Array< int > array,int whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_Int","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i) == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_Int,return )

int FlxArrayUtil_obj::indexOf_flixel_util_FlxPoint( Array< ::Dynamic > array,::flixel::util::FlxPoint whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_util_FlxPoint","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::util::FlxPoint >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_util_FlxPoint,return )

int FlxArrayUtil_obj::indexOf_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_util_FlxPath","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__get(i).StaticCast< ::flixel::util::FlxPath >() == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_util_FlxPath,return )

int FlxArrayUtil_obj::indexOf_flixel_util_FlxPool_T( Dynamic array,Dynamic whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArrayUtil::indexOf_flixel_util_FlxPool_T","flixel/util/FlxArrayUtil.hx",18);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < len))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				if (((array->__GetItem(i) == whatToFind))){
					HX_STACK_LINE(28)
					index = i;
					HX_STACK_LINE(29)
					break;
				}
			}
		}
		HX_STACK_LINE(32)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,indexOf_flixel_util_FlxPool_T,return )

Array< int > FlxArrayUtil_obj::intFromString( ::String data){
	HX_STACK_PUSH("FlxArrayUtil::intFromString","flixel/util/FlxArrayUtil.hx",125);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(126)
	if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
		HX_STACK_LINE(128)
		Array< ::String > strArray = data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(129)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			while(((_g < strArray->length))){
				HX_STACK_LINE(130)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(131)
				iArray->push(::Std_obj::parseInt(str));
			}
		}
		HX_STACK_LINE(133)
		return iArray;
	}
	HX_STACK_LINE(135)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,intFromString,return )

Array< Float > FlxArrayUtil_obj::floatFromString( ::String data){
	HX_STACK_PUSH("FlxArrayUtil::floatFromString","flixel/util/FlxArrayUtil.hx",144);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(145)
	if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
		HX_STACK_LINE(147)
		Array< ::String > strArray = data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(148)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while(((_g < strArray->length))){
				HX_STACK_LINE(149)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(150)
				fArray->push(::Std_obj::parseFloat(str));
			}
		}
		HX_STACK_LINE(152)
		return fArray;
	}
	HX_STACK_LINE(154)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,floatFromString,return )


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

void FlxArrayUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxArrayUtil);
	HX_MARK_END_CLASS();
}

void FlxArrayUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxArrayUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"indexOf_Int") ) { return indexOf_Int_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { return setLength_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"intFromString") ) { return intFromString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setLength_Float") ) { return setLength_Float_dyn(); }
		if (HX_FIELD_EQ(inName,"floatFromString") ) { return floatFromString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setLength_String") ) { return setLength_String_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_FlxCamera") ) { return indexOf_flixel_FlxCamera_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_util_FlxPath") ) { return indexOf_flixel_util_FlxPath_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_util_FlxTimer") ) { return indexOf_flixel_util_FlxTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf_flixel_util_FlxPoint") ) { return indexOf_flixel_util_FlxPoint_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_util_FlxPool_T") ) { return indexOf_flixel_util_FlxPool_T_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_tweens_FlxTween") ) { return indexOf_flixel_tweens_FlxTween_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_group_FlxTypedGroup_T") ) { return indexOf_flixel_group_FlxTypedGroup_T_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"getRandom_flixel_group_FlxTypedGroup_T") ) { return getRandom_flixel_group_FlxTypedGroup_T_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { return setLength_flixel_group_FlxTypedGroup_T_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { return setLength_flixel_system_replay_FrameRecord_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"indexOf_flixel_system_layer_frames_FlxFrame") ) { return indexOf_flixel_system_layer_frames_FlxFrame_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_input_keyboard_FlxKey") ) { return setLength_flixel_system_input_keyboard_FlxKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxArrayUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxArrayUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("setLength_flixel_system_replay_FrameRecord"),
	HX_CSTRING("getRandom_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("setLength_flixel_system_input_keyboard_FlxKey"),
	HX_CSTRING("setLength_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("indexOf_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("indexOf_flixel_FlxCamera"),
	HX_CSTRING("setLength_Int"),
	HX_CSTRING("indexOf_flixel_util_FlxTimer"),
	HX_CSTRING("setLength_Float"),
	HX_CSTRING("setLength_String"),
	HX_CSTRING("indexOf_flixel_tweens_FlxTween"),
	HX_CSTRING("indexOf_flixel_system_layer_frames_FlxFrame"),
	HX_CSTRING("indexOf_Int"),
	HX_CSTRING("indexOf_flixel_util_FlxPoint"),
	HX_CSTRING("indexOf_flixel_util_FlxPath"),
	HX_CSTRING("indexOf_flixel_util_FlxPool_T"),
	HX_CSTRING("intFromString"),
	HX_CSTRING("floatFromString"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

Class FlxArrayUtil_obj::__mClass;

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxArrayUtil"), hx::TCanCast< FlxArrayUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxArrayUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
