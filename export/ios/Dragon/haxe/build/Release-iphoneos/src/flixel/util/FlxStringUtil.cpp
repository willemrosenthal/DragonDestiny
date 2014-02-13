#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_PUSH("FlxStringUtil::formatTicks","flixel/util/FlxStringUtil.hx",20);
	HX_STACK_ARG(StartTicks,"StartTicks");
	HX_STACK_ARG(EndTicks,"EndTicks");
	HX_STACK_LINE(20)
	return ((Float(::Math_obj::abs((EndTicks - StartTicks))) / Float((int)1000)) + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_PUSH("FlxStringUtil::formatTime","flixel/util/FlxStringUtil.hx",32);
	HX_STACK_ARG(Seconds,"Seconds");
	HX_STACK_ARG(ShowMS,"ShowMS");
{
		HX_STACK_LINE(33)
		::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(34)
		int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(35)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(36)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(39)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(40)
		if ((ShowMS)){
			HX_STACK_LINE(42)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(43)
			timeStringHelper = ::Std_obj::_int((((Seconds - ::Std_obj::_int(Seconds))) * (int)100));
			HX_STACK_LINE(44)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(45)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(48)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(51)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( Dynamic AnyArray){
	HX_STACK_PUSH("FlxStringUtil::formatArray","flixel/util/FlxStringUtil.hx",62);
	HX_STACK_ARG(AnyArray,"AnyArray");
	HX_STACK_LINE(63)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(64)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(66)
		string = ::Std_obj::string(AnyArray->__GetItem((int)0));
		HX_STACK_LINE(67)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(68)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(69)
		while(((i < l))){
			HX_STACK_LINE(70)
			hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
		}
	}
	HX_STACK_LINE(74)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_PUSH("FlxStringUtil::formatStringMap","flixel/util/FlxStringUtil.hx",84);
	HX_STACK_ARG(AnyMap,"AnyMap");
	HX_STACK_LINE(85)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(86)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(87)
			hx::AddEq(string,::Std_obj::string(key));
			HX_STACK_LINE(88)
			hx::AddEq(string,HX_CSTRING(", "));
		}
;
	}
	HX_STACK_LINE(91)
	return string.substring((int)0,(string.length - (int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_PUSH("FlxStringUtil::formatMoney","flixel/util/FlxStringUtil.hx",106);
	HX_STACK_ARG(Amount,"Amount");
	HX_STACK_ARG(ShowDecimal,"ShowDecimal");
	HX_STACK_ARG(EnglishStyle,"EnglishStyle");
{
		HX_STACK_LINE(107)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(108)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(109)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(110)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(111)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(112)
		while(((amount > (int)0))){
			HX_STACK_LINE(114)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(115)
				if ((EnglishStyle)){
					HX_STACK_LINE(117)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(121)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(125)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(126)
			helper = (amount - (::Math_obj::floor((Float(amount) / Float((int)1000))) * (int)1000));
			HX_STACK_LINE(127)
			amount = ::Math_obj::floor((Float(amount) / Float((int)1000)));
			HX_STACK_LINE(128)
			if (((amount > (int)0))){
				HX_STACK_LINE(130)
				if (((helper < (int)100))){
					HX_STACK_LINE(131)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(134)
				if (((helper < (int)10))){
					HX_STACK_LINE(135)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(139)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(141)
		if ((ShowDecimal)){
			HX_STACK_LINE(143)
			amount = (::Std_obj::_int((Amount * (int)100)) - (::Std_obj::_int(Amount) * (int)100));
			HX_STACK_LINE(144)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(145)
			if (((amount < (int)10))){
				HX_STACK_LINE(146)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(150)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_PUSH("FlxStringUtil::filterDigits","flixel/util/FlxStringUtil.hx",160);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(161)
	::StringBuf output = ::StringBuf_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		while(((_g1 < _g))){
			HX_STACK_LINE(162)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(163)
			Dynamic c = Input.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(164)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(165)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(165)
				output->b->push(::String::fromCharCode(c1));
			}
		}
	}
	HX_STACK_LINE(168)
	return output->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_PUSH("FlxStringUtil::htmlFormat","flixel/util/FlxStringUtil.hx",184);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Bold,"Bold");
	HX_STACK_ARG(Italic,"Italic");
	HX_STACK_ARG(Underlined,"Underlined");
{
		HX_STACK_LINE(185)
		::String prefix = ((((HX_CSTRING("<font size='") + Size) + HX_CSTRING("' color='#")) + Color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(186)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(188)
		if ((Bold)){
			HX_STACK_LINE(190)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(191)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(193)
		if ((Italic)){
			HX_STACK_LINE(195)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(196)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(198)
		if ((Underlined)){
			HX_STACK_LINE(200)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(201)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(204)
		return ((prefix + Text) + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

void FlxStringUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStringUtil);
	HX_MARK_END_CLASS();
}

void FlxStringUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxStringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { return htmlFormat_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { return formatStringMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("formatTicks"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatStringMap"),
	HX_CSTRING("formatMoney"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("htmlFormat"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

Class FlxStringUtil_obj::__mClass;

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxStringUtil"), hx::TCanCast< FlxStringUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxStringUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
