#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKey
#include <flixel/system/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyList
#include <flixel/system/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace keyboard{

Void FlxKeyList_obj::__construct(Dynamic CheckFunction)
{
HX_STACK_PUSH("FlxKeyList::new","flixel/system/input/keyboard/FlxKeyList.hx",11);
{
	HX_STACK_LINE(11)
	this->check = CheckFunction;
}
;
	return null();
}

FlxKeyList_obj::~FlxKeyList_obj() { }

Dynamic FlxKeyList_obj::__CreateEmpty() { return  new FlxKeyList_obj; }
hx::ObjectPtr< FlxKeyList_obj > FlxKeyList_obj::__new(Dynamic CheckFunction)
{  hx::ObjectPtr< FlxKeyList_obj > result = new FlxKeyList_obj();
	result->__construct(CheckFunction);
	return result;}

Dynamic FlxKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyList_obj > result = new FlxKeyList_obj();
	result->__construct(inArgs[0]);
	return result;}

bool FlxKeyList_obj::get_ANY( ){
	HX_STACK_PUSH("FlxKeyList::get_ANY","flixel/system/input/keyboard/FlxKeyList.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::keyboard->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while(((_g < _g1->length))){
			HX_STACK_LINE(113)
			::flixel::system::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(115)
			if (((key != null()))){
				HX_STACK_LINE(116)
				if ((this->check(key->name))){
					HX_STACK_LINE(118)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(124)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ANY,return )

bool FlxKeyList_obj::get_RIGHT( ){
	HX_STACK_PUSH("FlxKeyList::get_RIGHT","flixel/system/input/keyboard/FlxKeyList.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return this->check(HX_CSTRING("RIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RIGHT,return )

bool FlxKeyList_obj::get_LEFT( ){
	HX_STACK_PUSH("FlxKeyList::get_LEFT","flixel/system/input/keyboard/FlxKeyList.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_LINE(106)
	return this->check(HX_CSTRING("LEFT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LEFT,return )

bool FlxKeyList_obj::get_DOWN( ){
	HX_STACK_PUSH("FlxKeyList::get_DOWN","flixel/system/input/keyboard/FlxKeyList.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(105)
	return this->check(HX_CSTRING("DOWN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DOWN,return )

bool FlxKeyList_obj::get_UP( ){
	HX_STACK_PUSH("FlxKeyList::get_UP","flixel/system/input/keyboard/FlxKeyList.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_LINE(104)
	return this->check(HX_CSTRING("UP"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_UP,return )

bool FlxKeyList_obj::get_SPACE( ){
	HX_STACK_PUSH("FlxKeyList::get_SPACE","flixel/system/input/keyboard/FlxKeyList.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->check(HX_CSTRING("SPACE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SPACE,return )

bool FlxKeyList_obj::get_ALT( ){
	HX_STACK_PUSH("FlxKeyList::get_ALT","flixel/system/input/keyboard/FlxKeyList.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->check(HX_CSTRING("ALT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ALT,return )

bool FlxKeyList_obj::get_CONTROL( ){
	HX_STACK_PUSH("FlxKeyList::get_CONTROL","flixel/system/input/keyboard/FlxKeyList.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	return this->check(HX_CSTRING("CONTROL"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CONTROL,return )

bool FlxKeyList_obj::get_NUMPADSLASH( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADSLASH","flixel/system/input/keyboard/FlxKeyList.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(100)
	return this->check(HX_CSTRING("NUMPADSLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSLASH,return )

bool FlxKeyList_obj::get_SLASH( ){
	HX_STACK_PUSH("FlxKeyList::get_SLASH","flixel/system/input/keyboard/FlxKeyList.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	return this->check(HX_CSTRING("SLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SLASH,return )

bool FlxKeyList_obj::get_NUMPADPERIOD( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADPERIOD","flixel/system/input/keyboard/FlxKeyList.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_LINE(98)
	return this->check(HX_CSTRING("NUMPADPERIOD"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPERIOD,return )

bool FlxKeyList_obj::get_PERIOD( ){
	HX_STACK_PUSH("FlxKeyList::get_PERIOD","flixel/system/input/keyboard/FlxKeyList.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_LINE(97)
	return this->check(HX_CSTRING("PERIOD"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PERIOD,return )

bool FlxKeyList_obj::get_COMMA( ){
	HX_STACK_PUSH("FlxKeyList::get_COMMA","flixel/system/input/keyboard/FlxKeyList.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(96)
	return this->check(HX_CSTRING("COMMA"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_COMMA,return )

bool FlxKeyList_obj::get_M( ){
	HX_STACK_PUSH("FlxKeyList::get_M","flixel/system/input/keyboard/FlxKeyList.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->check(HX_CSTRING("M"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_M,return )

bool FlxKeyList_obj::get_N( ){
	HX_STACK_PUSH("FlxKeyList::get_N","flixel/system/input/keyboard/FlxKeyList.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->check(HX_CSTRING("N"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_N,return )

bool FlxKeyList_obj::get_B( ){
	HX_STACK_PUSH("FlxKeyList::get_B","flixel/system/input/keyboard/FlxKeyList.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->check(HX_CSTRING("B"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_B,return )

bool FlxKeyList_obj::get_V( ){
	HX_STACK_PUSH("FlxKeyList::get_V","flixel/system/input/keyboard/FlxKeyList.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	return this->check(HX_CSTRING("V"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_V,return )

bool FlxKeyList_obj::get_C( ){
	HX_STACK_PUSH("FlxKeyList::get_C","flixel/system/input/keyboard/FlxKeyList.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(91)
	return this->check(HX_CSTRING("C"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_C,return )

bool FlxKeyList_obj::get_X( ){
	HX_STACK_PUSH("FlxKeyList::get_X","flixel/system/input/keyboard/FlxKeyList.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_LINE(90)
	return this->check(HX_CSTRING("X"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_X,return )

bool FlxKeyList_obj::get_Z( ){
	HX_STACK_PUSH("FlxKeyList::get_Z","flixel/system/input/keyboard/FlxKeyList.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->check(HX_CSTRING("Z"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Z,return )

bool FlxKeyList_obj::get_SHIFT( ){
	HX_STACK_PUSH("FlxKeyList::get_SHIFT","flixel/system/input/keyboard/FlxKeyList.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_LINE(88)
	return this->check(HX_CSTRING("SHIFT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SHIFT,return )

bool FlxKeyList_obj::get_ENTER( ){
	HX_STACK_PUSH("FlxKeyList::get_ENTER","flixel/system/input/keyboard/FlxKeyList.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->check(HX_CSTRING("ENTER"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ENTER,return )

bool FlxKeyList_obj::get_QUOTE( ){
	HX_STACK_PUSH("FlxKeyList::get_QUOTE","flixel/system/input/keyboard/FlxKeyList.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->check(HX_CSTRING("QUOTE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_QUOTE,return )

bool FlxKeyList_obj::get_SEMICOLON( ){
	HX_STACK_PUSH("FlxKeyList::get_SEMICOLON","flixel/system/input/keyboard/FlxKeyList.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return this->check(HX_CSTRING("SEMICOLON"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEMICOLON,return )

bool FlxKeyList_obj::get_L( ){
	HX_STACK_PUSH("FlxKeyList::get_L","flixel/system/input/keyboard/FlxKeyList.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->check(HX_CSTRING("L"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_L,return )

bool FlxKeyList_obj::get_K( ){
	HX_STACK_PUSH("FlxKeyList::get_K","flixel/system/input/keyboard/FlxKeyList.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	return this->check(HX_CSTRING("K"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_K,return )

bool FlxKeyList_obj::get_J( ){
	HX_STACK_PUSH("FlxKeyList::get_J","flixel/system/input/keyboard/FlxKeyList.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->check(HX_CSTRING("J"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_J,return )

bool FlxKeyList_obj::get_H( ){
	HX_STACK_PUSH("FlxKeyList::get_H","flixel/system/input/keyboard/FlxKeyList.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	return this->check(HX_CSTRING("H"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_H,return )

bool FlxKeyList_obj::get_G( ){
	HX_STACK_PUSH("FlxKeyList::get_G","flixel/system/input/keyboard/FlxKeyList.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return this->check(HX_CSTRING("G"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_G,return )

bool FlxKeyList_obj::get_F( ){
	HX_STACK_PUSH("FlxKeyList::get_F","flixel/system/input/keyboard/FlxKeyList.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->check(HX_CSTRING("F"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F,return )

bool FlxKeyList_obj::get_D( ){
	HX_STACK_PUSH("FlxKeyList::get_D","flixel/system/input/keyboard/FlxKeyList.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->check(HX_CSTRING("D"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_D,return )

bool FlxKeyList_obj::get_S( ){
	HX_STACK_PUSH("FlxKeyList::get_S","flixel/system/input/keyboard/FlxKeyList.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return this->check(HX_CSTRING("S"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_S,return )

bool FlxKeyList_obj::get_A( ){
	HX_STACK_PUSH("FlxKeyList::get_A","flixel/system/input/keyboard/FlxKeyList.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->check(HX_CSTRING("A"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_A,return )

bool FlxKeyList_obj::get_CAPSLOCK( ){
	HX_STACK_PUSH("FlxKeyList::get_CAPSLOCK","flixel/system/input/keyboard/FlxKeyList.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return this->check(HX_CSTRING("CAPSLOCK"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CAPSLOCK,return )

bool FlxKeyList_obj::get_BACKSLASH( ){
	HX_STACK_PUSH("FlxKeyList::get_BACKSLASH","flixel/system/input/keyboard/FlxKeyList.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->check(HX_CSTRING("BACKSLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSLASH,return )

bool FlxKeyList_obj::get_RBRACKET( ){
	HX_STACK_PUSH("FlxKeyList::get_RBRACKET","flixel/system/input/keyboard/FlxKeyList.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->check(HX_CSTRING("RBRACKET"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RBRACKET,return )

bool FlxKeyList_obj::get_LBRACKET( ){
	HX_STACK_PUSH("FlxKeyList::get_LBRACKET","flixel/system/input/keyboard/FlxKeyList.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->check(HX_CSTRING("LBRACKET"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LBRACKET,return )

bool FlxKeyList_obj::get_P( ){
	HX_STACK_PUSH("FlxKeyList::get_P","flixel/system/input/keyboard/FlxKeyList.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return this->check(HX_CSTRING("P"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_P,return )

bool FlxKeyList_obj::get_O( ){
	HX_STACK_PUSH("FlxKeyList::get_O","flixel/system/input/keyboard/FlxKeyList.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->check(HX_CSTRING("O"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_O,return )

bool FlxKeyList_obj::get_I( ){
	HX_STACK_PUSH("FlxKeyList::get_I","flixel/system/input/keyboard/FlxKeyList.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->check(HX_CSTRING("I"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_I,return )

bool FlxKeyList_obj::get_U( ){
	HX_STACK_PUSH("FlxKeyList::get_U","flixel/system/input/keyboard/FlxKeyList.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return this->check(HX_CSTRING("U"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_U,return )

bool FlxKeyList_obj::get_Y( ){
	HX_STACK_PUSH("FlxKeyList::get_Y","flixel/system/input/keyboard/FlxKeyList.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return this->check(HX_CSTRING("Y"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Y,return )

bool FlxKeyList_obj::get_T( ){
	HX_STACK_PUSH("FlxKeyList::get_T","flixel/system/input/keyboard/FlxKeyList.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->check(HX_CSTRING("T"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_T,return )

bool FlxKeyList_obj::get_R( ){
	HX_STACK_PUSH("FlxKeyList::get_R","flixel/system/input/keyboard/FlxKeyList.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return this->check(HX_CSTRING("R"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_R,return )

bool FlxKeyList_obj::get_E( ){
	HX_STACK_PUSH("FlxKeyList::get_E","flixel/system/input/keyboard/FlxKeyList.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return this->check(HX_CSTRING("E"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_E,return )

bool FlxKeyList_obj::get_W( ){
	HX_STACK_PUSH("FlxKeyList::get_W","flixel/system/input/keyboard/FlxKeyList.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return this->check(HX_CSTRING("W"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_W,return )

bool FlxKeyList_obj::get_Q( ){
	HX_STACK_PUSH("FlxKeyList::get_Q","flixel/system/input/keyboard/FlxKeyList.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->check(HX_CSTRING("Q"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Q,return )

bool FlxKeyList_obj::get_TAB( ){
	HX_STACK_PUSH("FlxKeyList::get_TAB","flixel/system/input/keyboard/FlxKeyList.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->check(HX_CSTRING("TAB"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TAB,return )

bool FlxKeyList_obj::get_BACKSPACE( ){
	HX_STACK_PUSH("FlxKeyList::get_BACKSPACE","flixel/system/input/keyboard/FlxKeyList.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->check(HX_CSTRING("BACKSPACE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSPACE,return )

bool FlxKeyList_obj::get_DELETE( ){
	HX_STACK_PUSH("FlxKeyList::get_DELETE","flixel/system/input/keyboard/FlxKeyList.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return this->check(HX_CSTRING("DELETE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DELETE,return )

bool FlxKeyList_obj::get_NUMPADPLUS( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADPLUS","flixel/system/input/keyboard/FlxKeyList.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->check(HX_CSTRING("NUMPADPLUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPLUS,return )

bool FlxKeyList_obj::get_PLUS( ){
	HX_STACK_PUSH("FlxKeyList::get_PLUS","flixel/system/input/keyboard/FlxKeyList.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->check(HX_CSTRING("PLUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PLUS,return )

bool FlxKeyList_obj::get_NUMPADMINUS( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADMINUS","flixel/system/input/keyboard/FlxKeyList.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->check(HX_CSTRING("NUMPADMINUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMINUS,return )

bool FlxKeyList_obj::get_MINUS( ){
	HX_STACK_PUSH("FlxKeyList::get_MINUS","flixel/system/input/keyboard/FlxKeyList.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return this->check(HX_CSTRING("MINUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_MINUS,return )

bool FlxKeyList_obj::get_INSERT( ){
	HX_STACK_PUSH("FlxKeyList::get_INSERT","flixel/system/input/keyboard/FlxKeyList.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->check(HX_CSTRING("INSERT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_INSERT,return )

bool FlxKeyList_obj::get_END( ){
	HX_STACK_PUSH("FlxKeyList::get_END","flixel/system/input/keyboard/FlxKeyList.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->check(HX_CSTRING("END"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_END,return )

bool FlxKeyList_obj::get_HOME( ){
	HX_STACK_PUSH("FlxKeyList::get_HOME","flixel/system/input/keyboard/FlxKeyList.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->check(HX_CSTRING("HOME"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_HOME,return )

bool FlxKeyList_obj::get_PAGEDOWN( ){
	HX_STACK_PUSH("FlxKeyList::get_PAGEDOWN","flixel/system/input/keyboard/FlxKeyList.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->check(HX_CSTRING("PAGEDOWN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEDOWN,return )

bool FlxKeyList_obj::get_PAGEUP( ){
	HX_STACK_PUSH("FlxKeyList::get_PAGEUP","flixel/system/input/keyboard/FlxKeyList.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->check(HX_CSTRING("PAGEUP"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEUP,return )

bool FlxKeyList_obj::get_NUMPADZERO( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADZERO","flixel/system/input/keyboard/FlxKeyList.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->check(HX_CSTRING("NUMPADZERO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADZERO,return )

bool FlxKeyList_obj::get_NUMPADNINE( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADNINE","flixel/system/input/keyboard/FlxKeyList.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->check(HX_CSTRING("NUMPADNINE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADNINE,return )

bool FlxKeyList_obj::get_NUMPADEIGHT( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADEIGHT","flixel/system/input/keyboard/FlxKeyList.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_LINE(47)
	return this->check(HX_CSTRING("NUMPADEIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADEIGHT,return )

bool FlxKeyList_obj::get_NUMPADSEVEN( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADSEVEN","flixel/system/input/keyboard/FlxKeyList.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_LINE(46)
	return this->check(HX_CSTRING("NUMPADSEVEN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSEVEN,return )

bool FlxKeyList_obj::get_NUMPADSIX( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADSIX","flixel/system/input/keyboard/FlxKeyList.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return this->check(HX_CSTRING("NUMPADSIX"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSIX,return )

bool FlxKeyList_obj::get_NUMPADFIVE( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADFIVE","flixel/system/input/keyboard/FlxKeyList.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return this->check(HX_CSTRING("NUMPADFIVE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFIVE,return )

bool FlxKeyList_obj::get_NUMPADFOUR( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADFOUR","flixel/system/input/keyboard/FlxKeyList.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return this->check(HX_CSTRING("NUMPADFOUR"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFOUR,return )

bool FlxKeyList_obj::get_NUMPADTHREE( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADTHREE","flixel/system/input/keyboard/FlxKeyList.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->check(HX_CSTRING("NUMPADTHREE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTHREE,return )

bool FlxKeyList_obj::get_NUMPADTWO( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADTWO","flixel/system/input/keyboard/FlxKeyList.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return this->check(HX_CSTRING("NUMPADTWO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTWO,return )

bool FlxKeyList_obj::get_NUMPADONE( ){
	HX_STACK_PUSH("FlxKeyList::get_NUMPADONE","flixel/system/input/keyboard/FlxKeyList.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return this->check(HX_CSTRING("NUMPADONE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADONE,return )

bool FlxKeyList_obj::get_ZERO( ){
	HX_STACK_PUSH("FlxKeyList::get_ZERO","flixel/system/input/keyboard/FlxKeyList.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->check(HX_CSTRING("ZERO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ZERO,return )

bool FlxKeyList_obj::get_NINE( ){
	HX_STACK_PUSH("FlxKeyList::get_NINE","flixel/system/input/keyboard/FlxKeyList.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return this->check(HX_CSTRING("NINE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NINE,return )

bool FlxKeyList_obj::get_EIGHT( ){
	HX_STACK_PUSH("FlxKeyList::get_EIGHT","flixel/system/input/keyboard/FlxKeyList.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->check(HX_CSTRING("EIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_EIGHT,return )

bool FlxKeyList_obj::get_SEVEN( ){
	HX_STACK_PUSH("FlxKeyList::get_SEVEN","flixel/system/input/keyboard/FlxKeyList.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return this->check(HX_CSTRING("SEVEN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEVEN,return )

bool FlxKeyList_obj::get_SIX( ){
	HX_STACK_PUSH("FlxKeyList::get_SIX","flixel/system/input/keyboard/FlxKeyList.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->check(HX_CSTRING("SIX"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SIX,return )

bool FlxKeyList_obj::get_FIVE( ){
	HX_STACK_PUSH("FlxKeyList::get_FIVE","flixel/system/input/keyboard/FlxKeyList.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->check(HX_CSTRING("FIVE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FIVE,return )

bool FlxKeyList_obj::get_FOUR( ){
	HX_STACK_PUSH("FlxKeyList::get_FOUR","flixel/system/input/keyboard/FlxKeyList.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->check(HX_CSTRING("FOUR"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FOUR,return )

bool FlxKeyList_obj::get_THREE( ){
	HX_STACK_PUSH("FlxKeyList::get_THREE","flixel/system/input/keyboard/FlxKeyList.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return this->check(HX_CSTRING("THREE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_THREE,return )

bool FlxKeyList_obj::get_TWO( ){
	HX_STACK_PUSH("FlxKeyList::get_TWO","flixel/system/input/keyboard/FlxKeyList.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return this->check(HX_CSTRING("TWO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TWO,return )

bool FlxKeyList_obj::get_ONE( ){
	HX_STACK_PUSH("FlxKeyList::get_ONE","flixel/system/input/keyboard/FlxKeyList.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return this->check(HX_CSTRING("ONE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ONE,return )

bool FlxKeyList_obj::get_F12( ){
	HX_STACK_PUSH("FlxKeyList::get_F12","flixel/system/input/keyboard/FlxKeyList.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	return this->check(HX_CSTRING("F12"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F12,return )

bool FlxKeyList_obj::get_F11( ){
	HX_STACK_PUSH("FlxKeyList::get_F11","flixel/system/input/keyboard/FlxKeyList.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return this->check(HX_CSTRING("F11"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F11,return )

bool FlxKeyList_obj::get_F10( ){
	HX_STACK_PUSH("FlxKeyList::get_F10","flixel/system/input/keyboard/FlxKeyList.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->check(HX_CSTRING("F10"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F10,return )

bool FlxKeyList_obj::get_F9( ){
	HX_STACK_PUSH("FlxKeyList::get_F9","flixel/system/input/keyboard/FlxKeyList.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(26)
	return this->check(HX_CSTRING("F9"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F9,return )

bool FlxKeyList_obj::get_F8( ){
	HX_STACK_PUSH("FlxKeyList::get_F8","flixel/system/input/keyboard/FlxKeyList.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_LINE(25)
	return this->check(HX_CSTRING("F8"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F8,return )

bool FlxKeyList_obj::get_F7( ){
	HX_STACK_PUSH("FlxKeyList::get_F7","flixel/system/input/keyboard/FlxKeyList.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->check(HX_CSTRING("F7"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F7,return )

bool FlxKeyList_obj::get_F6( ){
	HX_STACK_PUSH("FlxKeyList::get_F6","flixel/system/input/keyboard/FlxKeyList.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_LINE(23)
	return this->check(HX_CSTRING("F6"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F6,return )

bool FlxKeyList_obj::get_F5( ){
	HX_STACK_PUSH("FlxKeyList::get_F5","flixel/system/input/keyboard/FlxKeyList.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return this->check(HX_CSTRING("F5"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F5,return )

bool FlxKeyList_obj::get_F4( ){
	HX_STACK_PUSH("FlxKeyList::get_F4","flixel/system/input/keyboard/FlxKeyList.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_LINE(21)
	return this->check(HX_CSTRING("F4"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F4,return )

bool FlxKeyList_obj::get_F3( ){
	HX_STACK_PUSH("FlxKeyList::get_F3","flixel/system/input/keyboard/FlxKeyList.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_LINE(20)
	return this->check(HX_CSTRING("F3"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F3,return )

bool FlxKeyList_obj::get_F2( ){
	HX_STACK_PUSH("FlxKeyList::get_F2","flixel/system/input/keyboard/FlxKeyList.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	return this->check(HX_CSTRING("F2"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F2,return )

bool FlxKeyList_obj::get_F1( ){
	HX_STACK_PUSH("FlxKeyList::get_F1","flixel/system/input/keyboard/FlxKeyList.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_LINE(18)
	return this->check(HX_CSTRING("F1"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F1,return )

bool FlxKeyList_obj::get_ESCAPE( ){
	HX_STACK_PUSH("FlxKeyList::get_ESCAPE","flixel/system/input/keyboard/FlxKeyList.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return this->check(HX_CSTRING("ESCAPE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ESCAPE,return )


FlxKeyList_obj::FlxKeyList_obj()
{
}

void FlxKeyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyList);
	HX_MARK_MEMBER_NAME(check,"check");
	HX_MARK_END_CLASS();
}

void FlxKeyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(check,"check");
}

Dynamic FlxKeyList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"M") ) { return get_M(); }
		if (HX_FIELD_EQ(inName,"N") ) { return get_N(); }
		if (HX_FIELD_EQ(inName,"B") ) { return get_B(); }
		if (HX_FIELD_EQ(inName,"V") ) { return get_V(); }
		if (HX_FIELD_EQ(inName,"C") ) { return get_C(); }
		if (HX_FIELD_EQ(inName,"X") ) { return get_X(); }
		if (HX_FIELD_EQ(inName,"Z") ) { return get_Z(); }
		if (HX_FIELD_EQ(inName,"L") ) { return get_L(); }
		if (HX_FIELD_EQ(inName,"K") ) { return get_K(); }
		if (HX_FIELD_EQ(inName,"J") ) { return get_J(); }
		if (HX_FIELD_EQ(inName,"H") ) { return get_H(); }
		if (HX_FIELD_EQ(inName,"G") ) { return get_G(); }
		if (HX_FIELD_EQ(inName,"F") ) { return get_F(); }
		if (HX_FIELD_EQ(inName,"D") ) { return get_D(); }
		if (HX_FIELD_EQ(inName,"S") ) { return get_S(); }
		if (HX_FIELD_EQ(inName,"A") ) { return get_A(); }
		if (HX_FIELD_EQ(inName,"P") ) { return get_P(); }
		if (HX_FIELD_EQ(inName,"O") ) { return get_O(); }
		if (HX_FIELD_EQ(inName,"I") ) { return get_I(); }
		if (HX_FIELD_EQ(inName,"U") ) { return get_U(); }
		if (HX_FIELD_EQ(inName,"Y") ) { return get_Y(); }
		if (HX_FIELD_EQ(inName,"T") ) { return get_T(); }
		if (HX_FIELD_EQ(inName,"R") ) { return get_R(); }
		if (HX_FIELD_EQ(inName,"E") ) { return get_E(); }
		if (HX_FIELD_EQ(inName,"W") ) { return get_W(); }
		if (HX_FIELD_EQ(inName,"Q") ) { return get_Q(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return get_UP(); }
		if (HX_FIELD_EQ(inName,"F9") ) { return get_F9(); }
		if (HX_FIELD_EQ(inName,"F8") ) { return get_F8(); }
		if (HX_FIELD_EQ(inName,"F7") ) { return get_F7(); }
		if (HX_FIELD_EQ(inName,"F6") ) { return get_F6(); }
		if (HX_FIELD_EQ(inName,"F5") ) { return get_F5(); }
		if (HX_FIELD_EQ(inName,"F4") ) { return get_F4(); }
		if (HX_FIELD_EQ(inName,"F3") ) { return get_F3(); }
		if (HX_FIELD_EQ(inName,"F2") ) { return get_F2(); }
		if (HX_FIELD_EQ(inName,"F1") ) { return get_F1(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return get_ANY(); }
		if (HX_FIELD_EQ(inName,"ALT") ) { return get_ALT(); }
		if (HX_FIELD_EQ(inName,"TAB") ) { return get_TAB(); }
		if (HX_FIELD_EQ(inName,"END") ) { return get_END(); }
		if (HX_FIELD_EQ(inName,"SIX") ) { return get_SIX(); }
		if (HX_FIELD_EQ(inName,"TWO") ) { return get_TWO(); }
		if (HX_FIELD_EQ(inName,"ONE") ) { return get_ONE(); }
		if (HX_FIELD_EQ(inName,"F12") ) { return get_F12(); }
		if (HX_FIELD_EQ(inName,"F11") ) { return get_F11(); }
		if (HX_FIELD_EQ(inName,"F10") ) { return get_F10(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return get_LEFT(); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return get_DOWN(); }
		if (HX_FIELD_EQ(inName,"PLUS") ) { return get_PLUS(); }
		if (HX_FIELD_EQ(inName,"HOME") ) { return get_HOME(); }
		if (HX_FIELD_EQ(inName,"ZERO") ) { return get_ZERO(); }
		if (HX_FIELD_EQ(inName,"NINE") ) { return get_NINE(); }
		if (HX_FIELD_EQ(inName,"FIVE") ) { return get_FIVE(); }
		if (HX_FIELD_EQ(inName,"FOUR") ) { return get_FOUR(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return get_RIGHT(); }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return get_SPACE(); }
		if (HX_FIELD_EQ(inName,"SLASH") ) { return get_SLASH(); }
		if (HX_FIELD_EQ(inName,"COMMA") ) { return get_COMMA(); }
		if (HX_FIELD_EQ(inName,"get_M") ) { return get_M_dyn(); }
		if (HX_FIELD_EQ(inName,"get_N") ) { return get_N_dyn(); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return get_B_dyn(); }
		if (HX_FIELD_EQ(inName,"get_V") ) { return get_V_dyn(); }
		if (HX_FIELD_EQ(inName,"get_C") ) { return get_C_dyn(); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z") ) { return get_Z_dyn(); }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return get_SHIFT(); }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return get_ENTER(); }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return get_QUOTE(); }
		if (HX_FIELD_EQ(inName,"get_L") ) { return get_L_dyn(); }
		if (HX_FIELD_EQ(inName,"get_K") ) { return get_K_dyn(); }
		if (HX_FIELD_EQ(inName,"get_J") ) { return get_J_dyn(); }
		if (HX_FIELD_EQ(inName,"get_H") ) { return get_H_dyn(); }
		if (HX_FIELD_EQ(inName,"get_G") ) { return get_G_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F") ) { return get_F_dyn(); }
		if (HX_FIELD_EQ(inName,"get_D") ) { return get_D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_S") ) { return get_S_dyn(); }
		if (HX_FIELD_EQ(inName,"get_A") ) { return get_A_dyn(); }
		if (HX_FIELD_EQ(inName,"get_P") ) { return get_P_dyn(); }
		if (HX_FIELD_EQ(inName,"get_O") ) { return get_O_dyn(); }
		if (HX_FIELD_EQ(inName,"get_I") ) { return get_I_dyn(); }
		if (HX_FIELD_EQ(inName,"get_U") ) { return get_U_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_T") ) { return get_T_dyn(); }
		if (HX_FIELD_EQ(inName,"get_R") ) { return get_R_dyn(); }
		if (HX_FIELD_EQ(inName,"get_E") ) { return get_E_dyn(); }
		if (HX_FIELD_EQ(inName,"get_W") ) { return get_W_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Q") ) { return get_Q_dyn(); }
		if (HX_FIELD_EQ(inName,"MINUS") ) { return get_MINUS(); }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { return get_EIGHT(); }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { return get_SEVEN(); }
		if (HX_FIELD_EQ(inName,"THREE") ) { return get_THREE(); }
		if (HX_FIELD_EQ(inName,"check") ) { return check; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_UP") ) { return get_UP_dyn(); }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { return get_PERIOD(); }
		if (HX_FIELD_EQ(inName,"DELETE") ) { return get_DELETE(); }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return get_INSERT(); }
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { return get_PAGEUP(); }
		if (HX_FIELD_EQ(inName,"get_F9") ) { return get_F9_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F8") ) { return get_F8_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F7") ) { return get_F7_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F6") ) { return get_F6_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F5") ) { return get_F5_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F4") ) { return get_F4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F3") ) { return get_F3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F2") ) { return get_F2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F1") ) { return get_F1_dyn(); }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return get_ESCAPE(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ALT") ) { return get_ALT_dyn(); }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return get_CONTROL(); }
		if (HX_FIELD_EQ(inName,"get_TAB") ) { return get_TAB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SIX") ) { return get_SIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TWO") ) { return get_TWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ONE") ) { return get_ONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F12") ) { return get_F12_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F11") ) { return get_F11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F10") ) { return get_F10_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return get_LEFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return get_DOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { return get_CAPSLOCK(); }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { return get_RBRACKET(); }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { return get_LBRACKET(); }
		if (HX_FIELD_EQ(inName,"get_PLUS") ) { return get_PLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_HOME") ) { return get_HOME_dyn(); }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { return get_PAGEDOWN(); }
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { return get_ZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NINE") ) { return get_NINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FIVE") ) { return get_FIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FOUR") ) { return get_FOUR_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return get_RIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SPACE") ) { return get_SPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLASH") ) { return get_SLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_COMMA") ) { return get_COMMA_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SHIFT") ) { return get_SHIFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ENTER") ) { return get_ENTER_dyn(); }
		if (HX_FIELD_EQ(inName,"get_QUOTE") ) { return get_QUOTE_dyn(); }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { return get_SEMICOLON(); }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { return get_BACKSLASH(); }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return get_BACKSPACE(); }
		if (HX_FIELD_EQ(inName,"get_MINUS") ) { return get_MINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { return get_NUMPADSIX(); }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { return get_NUMPADTWO(); }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { return get_NUMPADONE(); }
		if (HX_FIELD_EQ(inName,"get_EIGHT") ) { return get_EIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEVEN") ) { return get_SEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_THREE") ) { return get_THREE_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_PERIOD") ) { return get_PERIOD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DELETE") ) { return get_DELETE_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { return get_NUMPADPLUS(); }
		if (HX_FIELD_EQ(inName,"get_INSERT") ) { return get_INSERT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PAGEUP") ) { return get_PAGEUP_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { return get_NUMPADZERO(); }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { return get_NUMPADNINE(); }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { return get_NUMPADFIVE(); }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { return get_NUMPADFOUR(); }
		if (HX_FIELD_EQ(inName,"get_ESCAPE") ) { return get_ESCAPE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_CONTROL") ) { return get_CONTROL_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { return get_NUMPADSLASH(); }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { return get_NUMPADMINUS(); }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { return get_NUMPADEIGHT(); }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { return get_NUMPADSEVEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { return get_NUMPADTHREE(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { return get_NUMPADPERIOD(); }
		if (HX_FIELD_EQ(inName,"get_CAPSLOCK") ) { return get_CAPSLOCK_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RBRACKET") ) { return get_RBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LBRACKET") ) { return get_LBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PAGEDOWN") ) { return get_PAGEDOWN_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_SEMICOLON") ) { return get_SEMICOLON_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSLASH") ) { return get_BACKSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSPACE") ) { return get_BACKSPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSIX") ) { return get_NUMPADSIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTWO") ) { return get_NUMPADTWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADONE") ) { return get_NUMPADONE_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_NUMPADPLUS") ) { return get_NUMPADPLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADZERO") ) { return get_NUMPADZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADNINE") ) { return get_NUMPADNINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFIVE") ) { return get_NUMPADFIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFOUR") ) { return get_NUMPADFOUR_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NUMPADSLASH") ) { return get_NUMPADSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADMINUS") ) { return get_NUMPADMINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADEIGHT") ) { return get_NUMPADEIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSEVEN") ) { return get_NUMPADSEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTHREE") ) { return get_NUMPADTHREE_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NUMPADPERIOD") ) { return get_NUMPADPERIOD_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { check=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ANY"));
	outFields->push(HX_CSTRING("RIGHT"));
	outFields->push(HX_CSTRING("LEFT"));
	outFields->push(HX_CSTRING("DOWN"));
	outFields->push(HX_CSTRING("UP"));
	outFields->push(HX_CSTRING("SPACE"));
	outFields->push(HX_CSTRING("ALT"));
	outFields->push(HX_CSTRING("CONTROL"));
	outFields->push(HX_CSTRING("NUMPADSLASH"));
	outFields->push(HX_CSTRING("SLASH"));
	outFields->push(HX_CSTRING("NUMPADPERIOD"));
	outFields->push(HX_CSTRING("PERIOD"));
	outFields->push(HX_CSTRING("COMMA"));
	outFields->push(HX_CSTRING("M"));
	outFields->push(HX_CSTRING("N"));
	outFields->push(HX_CSTRING("B"));
	outFields->push(HX_CSTRING("V"));
	outFields->push(HX_CSTRING("C"));
	outFields->push(HX_CSTRING("X"));
	outFields->push(HX_CSTRING("Z"));
	outFields->push(HX_CSTRING("SHIFT"));
	outFields->push(HX_CSTRING("ENTER"));
	outFields->push(HX_CSTRING("QUOTE"));
	outFields->push(HX_CSTRING("SEMICOLON"));
	outFields->push(HX_CSTRING("L"));
	outFields->push(HX_CSTRING("K"));
	outFields->push(HX_CSTRING("J"));
	outFields->push(HX_CSTRING("H"));
	outFields->push(HX_CSTRING("G"));
	outFields->push(HX_CSTRING("F"));
	outFields->push(HX_CSTRING("D"));
	outFields->push(HX_CSTRING("S"));
	outFields->push(HX_CSTRING("A"));
	outFields->push(HX_CSTRING("CAPSLOCK"));
	outFields->push(HX_CSTRING("BACKSLASH"));
	outFields->push(HX_CSTRING("RBRACKET"));
	outFields->push(HX_CSTRING("LBRACKET"));
	outFields->push(HX_CSTRING("P"));
	outFields->push(HX_CSTRING("O"));
	outFields->push(HX_CSTRING("I"));
	outFields->push(HX_CSTRING("U"));
	outFields->push(HX_CSTRING("Y"));
	outFields->push(HX_CSTRING("T"));
	outFields->push(HX_CSTRING("R"));
	outFields->push(HX_CSTRING("E"));
	outFields->push(HX_CSTRING("W"));
	outFields->push(HX_CSTRING("Q"));
	outFields->push(HX_CSTRING("TAB"));
	outFields->push(HX_CSTRING("BACKSPACE"));
	outFields->push(HX_CSTRING("DELETE"));
	outFields->push(HX_CSTRING("NUMPADPLUS"));
	outFields->push(HX_CSTRING("PLUS"));
	outFields->push(HX_CSTRING("NUMPADMINUS"));
	outFields->push(HX_CSTRING("MINUS"));
	outFields->push(HX_CSTRING("INSERT"));
	outFields->push(HX_CSTRING("END"));
	outFields->push(HX_CSTRING("HOME"));
	outFields->push(HX_CSTRING("PAGEDOWN"));
	outFields->push(HX_CSTRING("PAGEUP"));
	outFields->push(HX_CSTRING("NUMPADZERO"));
	outFields->push(HX_CSTRING("NUMPADNINE"));
	outFields->push(HX_CSTRING("NUMPADEIGHT"));
	outFields->push(HX_CSTRING("NUMPADSEVEN"));
	outFields->push(HX_CSTRING("NUMPADSIX"));
	outFields->push(HX_CSTRING("NUMPADFIVE"));
	outFields->push(HX_CSTRING("NUMPADFOUR"));
	outFields->push(HX_CSTRING("NUMPADTHREE"));
	outFields->push(HX_CSTRING("NUMPADTWO"));
	outFields->push(HX_CSTRING("NUMPADONE"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("NINE"));
	outFields->push(HX_CSTRING("EIGHT"));
	outFields->push(HX_CSTRING("SEVEN"));
	outFields->push(HX_CSTRING("SIX"));
	outFields->push(HX_CSTRING("FIVE"));
	outFields->push(HX_CSTRING("FOUR"));
	outFields->push(HX_CSTRING("THREE"));
	outFields->push(HX_CSTRING("TWO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("F12"));
	outFields->push(HX_CSTRING("F11"));
	outFields->push(HX_CSTRING("F10"));
	outFields->push(HX_CSTRING("F9"));
	outFields->push(HX_CSTRING("F8"));
	outFields->push(HX_CSTRING("F7"));
	outFields->push(HX_CSTRING("F6"));
	outFields->push(HX_CSTRING("F5"));
	outFields->push(HX_CSTRING("F4"));
	outFields->push(HX_CSTRING("F3"));
	outFields->push(HX_CSTRING("F2"));
	outFields->push(HX_CSTRING("F1"));
	outFields->push(HX_CSTRING("ESCAPE"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_ANY"),
	HX_CSTRING("get_RIGHT"),
	HX_CSTRING("get_LEFT"),
	HX_CSTRING("get_DOWN"),
	HX_CSTRING("get_UP"),
	HX_CSTRING("get_SPACE"),
	HX_CSTRING("get_ALT"),
	HX_CSTRING("get_CONTROL"),
	HX_CSTRING("get_NUMPADSLASH"),
	HX_CSTRING("get_SLASH"),
	HX_CSTRING("get_NUMPADPERIOD"),
	HX_CSTRING("get_PERIOD"),
	HX_CSTRING("get_COMMA"),
	HX_CSTRING("get_M"),
	HX_CSTRING("get_N"),
	HX_CSTRING("get_B"),
	HX_CSTRING("get_V"),
	HX_CSTRING("get_C"),
	HX_CSTRING("get_X"),
	HX_CSTRING("get_Z"),
	HX_CSTRING("get_SHIFT"),
	HX_CSTRING("get_ENTER"),
	HX_CSTRING("get_QUOTE"),
	HX_CSTRING("get_SEMICOLON"),
	HX_CSTRING("get_L"),
	HX_CSTRING("get_K"),
	HX_CSTRING("get_J"),
	HX_CSTRING("get_H"),
	HX_CSTRING("get_G"),
	HX_CSTRING("get_F"),
	HX_CSTRING("get_D"),
	HX_CSTRING("get_S"),
	HX_CSTRING("get_A"),
	HX_CSTRING("get_CAPSLOCK"),
	HX_CSTRING("get_BACKSLASH"),
	HX_CSTRING("get_RBRACKET"),
	HX_CSTRING("get_LBRACKET"),
	HX_CSTRING("get_P"),
	HX_CSTRING("get_O"),
	HX_CSTRING("get_I"),
	HX_CSTRING("get_U"),
	HX_CSTRING("get_Y"),
	HX_CSTRING("get_T"),
	HX_CSTRING("get_R"),
	HX_CSTRING("get_E"),
	HX_CSTRING("get_W"),
	HX_CSTRING("get_Q"),
	HX_CSTRING("get_TAB"),
	HX_CSTRING("get_BACKSPACE"),
	HX_CSTRING("get_DELETE"),
	HX_CSTRING("get_NUMPADPLUS"),
	HX_CSTRING("get_PLUS"),
	HX_CSTRING("get_NUMPADMINUS"),
	HX_CSTRING("get_MINUS"),
	HX_CSTRING("get_INSERT"),
	HX_CSTRING("get_END"),
	HX_CSTRING("get_HOME"),
	HX_CSTRING("get_PAGEDOWN"),
	HX_CSTRING("get_PAGEUP"),
	HX_CSTRING("get_NUMPADZERO"),
	HX_CSTRING("get_NUMPADNINE"),
	HX_CSTRING("get_NUMPADEIGHT"),
	HX_CSTRING("get_NUMPADSEVEN"),
	HX_CSTRING("get_NUMPADSIX"),
	HX_CSTRING("get_NUMPADFIVE"),
	HX_CSTRING("get_NUMPADFOUR"),
	HX_CSTRING("get_NUMPADTHREE"),
	HX_CSTRING("get_NUMPADTWO"),
	HX_CSTRING("get_NUMPADONE"),
	HX_CSTRING("get_ZERO"),
	HX_CSTRING("get_NINE"),
	HX_CSTRING("get_EIGHT"),
	HX_CSTRING("get_SEVEN"),
	HX_CSTRING("get_SIX"),
	HX_CSTRING("get_FIVE"),
	HX_CSTRING("get_FOUR"),
	HX_CSTRING("get_THREE"),
	HX_CSTRING("get_TWO"),
	HX_CSTRING("get_ONE"),
	HX_CSTRING("get_F12"),
	HX_CSTRING("get_F11"),
	HX_CSTRING("get_F10"),
	HX_CSTRING("get_F9"),
	HX_CSTRING("get_F8"),
	HX_CSTRING("get_F7"),
	HX_CSTRING("get_F6"),
	HX_CSTRING("get_F5"),
	HX_CSTRING("get_F4"),
	HX_CSTRING("get_F3"),
	HX_CSTRING("get_F2"),
	HX_CSTRING("get_F1"),
	HX_CSTRING("get_ESCAPE"),
	HX_CSTRING("check"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

Class FlxKeyList_obj::__mClass;

void FlxKeyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.keyboard.FlxKeyList"), hx::TCanCast< FlxKeyList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKeyList_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard
