#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKey
#include <flixel/system/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace keyboard{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_PUSH("FlxKeyboard::new","flixel/system/input/keyboard/FlxKeyboard.hx",15);
{
	HX_STACK_LINE(20)
	this->enabled = true;
	HX_STACK_LINE(39)
	this->_keyLookup = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(41)
	this->_keyList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_input_keyboard_FlxKey(this->_keyList,(int)256);
	HX_STACK_LINE(44)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(47)
	i = (int)65;
	HX_STACK_LINE(49)
	while(((i <= (int)90))){
		HX_STACK_LINE(51)
		this->addKey(::String::fromCharCode(i),i);
		HX_STACK_LINE(52)
		(i)++;
	}
	HX_STACK_LINE(56)
	i = (int)48;
	HX_STACK_LINE(57)
	this->addKey(HX_CSTRING("ZERO"),(i)++);
	HX_STACK_LINE(58)
	this->addKey(HX_CSTRING("ONE"),(i)++);
	HX_STACK_LINE(59)
	this->addKey(HX_CSTRING("TWO"),(i)++);
	HX_STACK_LINE(60)
	this->addKey(HX_CSTRING("THREE"),(i)++);
	HX_STACK_LINE(61)
	this->addKey(HX_CSTRING("FOUR"),(i)++);
	HX_STACK_LINE(62)
	this->addKey(HX_CSTRING("FIVE"),(i)++);
	HX_STACK_LINE(63)
	this->addKey(HX_CSTRING("SIX"),(i)++);
	HX_STACK_LINE(64)
	this->addKey(HX_CSTRING("SEVEN"),(i)++);
	HX_STACK_LINE(65)
	this->addKey(HX_CSTRING("EIGHT"),(i)++);
	HX_STACK_LINE(66)
	this->addKey(HX_CSTRING("NINE"),(i)++);
	HX_STACK_LINE(80)
	this->addKey(HX_CSTRING("PAGEUP"),(int)33);
	HX_STACK_LINE(81)
	this->addKey(HX_CSTRING("PAGEDOWN"),(int)34);
	HX_STACK_LINE(82)
	this->addKey(HX_CSTRING("HOME"),(int)36);
	HX_STACK_LINE(83)
	this->addKey(HX_CSTRING("END"),(int)35);
	HX_STACK_LINE(84)
	this->addKey(HX_CSTRING("INSERT"),(int)45);
	HX_STACK_LINE(96)
	this->addKey(HX_CSTRING("ESCAPE"),(int)27);
	HX_STACK_LINE(97)
	this->addKey(HX_CSTRING("MINUS"),(int)189);
	HX_STACK_LINE(98)
	this->addKey(HX_CSTRING("PLUS"),(int)187);
	HX_STACK_LINE(99)
	this->addKey(HX_CSTRING("DELETE"),(int)46);
	HX_STACK_LINE(100)
	this->addKey(HX_CSTRING("BACKSPACE"),(int)8);
	HX_STACK_LINE(101)
	this->addKey(HX_CSTRING("LBRACKET"),(int)219);
	HX_STACK_LINE(102)
	this->addKey(HX_CSTRING("RBRACKET"),(int)221);
	HX_STACK_LINE(103)
	this->addKey(HX_CSTRING("BACKSLASH"),(int)220);
	HX_STACK_LINE(104)
	this->addKey(HX_CSTRING("CAPSLOCK"),(int)20);
	HX_STACK_LINE(105)
	this->addKey(HX_CSTRING("SEMICOLON"),(int)186);
	HX_STACK_LINE(106)
	this->addKey(HX_CSTRING("QUOTE"),(int)222);
	HX_STACK_LINE(107)
	this->addKey(HX_CSTRING("ENTER"),(int)13);
	HX_STACK_LINE(108)
	this->addKey(HX_CSTRING("SHIFT"),(int)16);
	HX_STACK_LINE(109)
	this->addKey(HX_CSTRING("COMMA"),(int)188);
	HX_STACK_LINE(110)
	this->addKey(HX_CSTRING("PERIOD"),(int)190);
	HX_STACK_LINE(111)
	this->addKey(HX_CSTRING("SLASH"),(int)191);
	HX_STACK_LINE(112)
	this->addKey(HX_CSTRING("NUMPADSLASH"),(int)191);
	HX_STACK_LINE(113)
	this->addKey(HX_CSTRING("GRAVEACCENT"),(int)192);
	HX_STACK_LINE(114)
	this->addKey(HX_CSTRING("CONTROL"),(int)17);
	HX_STACK_LINE(115)
	this->addKey(HX_CSTRING("ALT"),(int)18);
	HX_STACK_LINE(116)
	this->addKey(HX_CSTRING("SPACE"),(int)32);
	HX_STACK_LINE(117)
	this->addKey(HX_CSTRING("UP"),(int)38);
	HX_STACK_LINE(118)
	this->addKey(HX_CSTRING("DOWN"),(int)40);
	HX_STACK_LINE(119)
	this->addKey(HX_CSTRING("LEFT"),(int)37);
	HX_STACK_LINE(120)
	this->addKey(HX_CSTRING("RIGHT"),(int)39);
	HX_STACK_LINE(121)
	this->addKey(HX_CSTRING("TAB"),(int)9);
	HX_STACK_LINE(129)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(130)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
	HX_STACK_LINE(132)
	this->pressed = ::Reflect_obj::makeVarArgs(this->anyPressed_dyn());
	HX_STACK_LINE(133)
	this->justPressed = ::Reflect_obj::makeVarArgs(this->anyJustPressed_dyn());
	HX_STACK_LINE(134)
	this->justReleased = ::Reflect_obj::makeVarArgs(this->anyJustReleased_dyn());
}
;
	return null();
}

FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

hx::Object *FlxKeyboard_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::system::input::IFlxInput_obj)) return operator ::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::String FlxKeyboard_obj::toString( ){
	HX_STACK_PUSH("FlxKeyboard::toString","flixel/system/input/keyboard/FlxKeyboard.hx",545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	return HX_CSTRING("FlxKeyboard");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,toString,return )

Void FlxKeyboard_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxKeyboard::onFocusLost","flixel/system/input/keyboard/FlxKeyboard.hx",540);
		HX_STACK_THIS(this);
		HX_STACK_LINE(540)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocusLost,(void))

Void FlxKeyboard_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxKeyboard::onFocus","flixel/system/input/keyboard/FlxKeyboard.hx",537);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocus,(void))

Void FlxKeyboard_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_PUSH("FlxKeyboard::updateKeyStates","flixel/system/input/keyboard/FlxKeyboard.hx",507);
		HX_STACK_THIS(this);
		HX_STACK_ARG(KeyCode,"KeyCode");
		HX_STACK_ARG(Down,"Down");
		HX_STACK_LINE(508)
		::flixel::system::input::keyboard::FlxKey obj = this->_keyList->__get(KeyCode).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(510)
		if (((obj != null()))){
			HX_STACK_LINE(511)
			if (((obj->current > (int)0))){
				HX_STACK_LINE(513)
				if ((Down)){
					HX_STACK_LINE(515)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(519)
					obj->current = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(524)
				if ((Down)){
					HX_STACK_LINE(526)
					obj->current = (int)2;
				}
				else{
					HX_STACK_LINE(530)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,updateKeyStates,(void))

bool FlxKeyboard_obj::inKeyArray( Array< ::String > KeyArray,int KeyCode){
	HX_STACK_PUSH("FlxKeyboard::inKeyArray","flixel/system/input/keyboard/FlxKeyboard.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyArray,"KeyArray");
	HX_STACK_ARG(KeyCode,"KeyCode");
	HX_STACK_LINE(485)
	if (((KeyArray == null()))){
		HX_STACK_LINE(486)
		return false;
	}
	else{
		HX_STACK_LINE(491)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		while(((_g < KeyArray->length))){
			HX_STACK_LINE(491)
			::String keyString = KeyArray->__get(_g);		HX_STACK_VAR(keyString,"keyString");
			HX_STACK_LINE(491)
			++(_g);
			HX_STACK_LINE(493)
			if (((bool((keyString == HX_CSTRING("ANY"))) || bool((this->_keyLookup->get(keyString) == KeyCode))))){
				HX_STACK_LINE(494)
				return true;
			}
		}
	}
	HX_STACK_LINE(500)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,inKeyArray,return )

Void FlxKeyboard_obj::onKeyDown( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxKeyboard::onKeyDown","flixel/system/input/keyboard/FlxKeyboard.hx",454);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(455)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(473)
		if ((this->enabled)){
			HX_STACK_LINE(475)
			::flixel::system::input::keyboard::FlxKey obj = this->_keyList->__get(c).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(475)
			if (((obj != null()))){
				HX_STACK_LINE(475)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(475)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(475)
					obj->current = (int)2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyDown,(void))

Void FlxKeyboard_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxKeyboard::onKeyUp","flixel/system/input/keyboard/FlxKeyboard.hx",382);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(383)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(394)
		if ((!(this->enabled))){
			HX_STACK_LINE(395)
			return null();
		}
		HX_STACK_LINE(402)
		if ((this->inKeyArray(::flixel::FlxG_obj::sound->muteKeys,c))){
			HX_STACK_LINE(404)
			::flixel::FlxG_obj::sound->muted = !(::flixel::FlxG_obj::sound->muted);
			HX_STACK_LINE(406)
			if (((::flixel::FlxG_obj::sound->volumeHandler != null()))){
				HX_STACK_LINE(407)
				::flixel::FlxG_obj::sound->volumeHandler((  ((::flixel::FlxG_obj::sound->muted)) ? Float((int)0) : Float(::flixel::FlxG_obj::sound->volume) ));
			}
		}
		else{
			HX_STACK_LINE(419)
			if ((this->inKeyArray(::flixel::FlxG_obj::sound->volumeDownKeys,c))){
				HX_STACK_LINE(421)
				::flixel::FlxG_obj::sound->muted = false;
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(422)
					_g->set_volume((_g->volume - 0.1));
				}
			}
			else{
				HX_STACK_LINE(432)
				if ((this->inKeyArray(::flixel::FlxG_obj::sound->volumeUpKeys,c))){
					HX_STACK_LINE(434)
					::flixel::FlxG_obj::sound->muted = false;
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(435)
						::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(435)
						_g->set_volume((_g->volume + 0.1));
					}
				}
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::flixel::system::input::keyboard::FlxKey obj = this->_keyList->__get(c).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(445)
			if (((obj != null()))){
				HX_STACK_LINE(445)
				if (((obj->current > (int)0))){
					HX_STACK_LINE(445)
					obj->current = (int)-1;
				}
				else{
					HX_STACK_LINE(445)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyUp,(void))

Void FlxKeyboard_obj::destroy( ){
{
		HX_STACK_PUSH("FlxKeyboard::destroy","flixel/system/input/keyboard/FlxKeyboard.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_LINE(372)
		this->_keyList = null();
		HX_STACK_LINE(373)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,destroy,(void))

Array< ::Dynamic > FlxKeyboard_obj::getIsDown( ){
	HX_STACK_PUSH("FlxKeyboard::getIsDown","flixel/system/input/keyboard/FlxKeyboard.hx",354);
	HX_STACK_THIS(this);
	HX_STACK_LINE(355)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(357)
	{
		HX_STACK_LINE(357)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(357)
		while(((_g < _g1->length))){
			HX_STACK_LINE(357)
			::flixel::system::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(357)
			++(_g);
			HX_STACK_LINE(359)
			if (((bool((key != null())) && bool((key->current > (int)0))))){
				HX_STACK_LINE(360)
				keysDown->push(key);
			}
		}
	}
	HX_STACK_LINE(364)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,getIsDown,return )

int FlxKeyboard_obj::getKeyCode( ::String KeyName){
	HX_STACK_PUSH("FlxKeyboard::getKeyCode","flixel/system/input/keyboard/FlxKeyboard.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyName,"KeyName");
	HX_STACK_LINE(344)
	return this->_keyLookup->get(KeyName);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,getKeyCode,return )

Void FlxKeyboard_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_PUSH("FlxKeyboard::playback","flixel/system/input/keyboard/FlxKeyboard.hx",323);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(324)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(325)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(326)
		::flixel::system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(327)
		::flixel::system::input::keyboard::FlxKey o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(329)
		while(((i < l))){
			HX_STACK_LINE(331)
			o = Record->__get((i)++).StaticCast< ::flixel::system::replay::CodeValuePair >();
			HX_STACK_LINE(332)
			o2 = this->_keyList->__get(o->code).StaticCast< ::flixel::system::input::keyboard::FlxKey >();
			HX_STACK_LINE(333)
			o2->current = o->value;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))

Array< ::Dynamic > FlxKeyboard_obj::record( ){
	HX_STACK_PUSH("FlxKeyboard::record","flixel/system/input/keyboard/FlxKeyboard.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(295)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(297)
	while(((i < (int)256))){
		HX_STACK_LINE(299)
		::flixel::system::input::keyboard::FlxKey key = this->_keyList->__get((i)++).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(301)
		if (((bool((key == null())) || bool((key->current == (int)0))))){
			HX_STACK_LINE(302)
			continue;
		}
		HX_STACK_LINE(306)
		if (((data == null()))){
			HX_STACK_LINE(307)
			data = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(311)
		data->push(::flixel::system::replay::CodeValuePair_obj::__new((i - (int)1),key->current));
	}
	HX_STACK_LINE(313)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

bool FlxKeyboard_obj::checkKeyStatus( Dynamic KeyArray,int Status){
	HX_STACK_PUSH("FlxKeyboard::checkKeyStatus","flixel/system/input/keyboard/FlxKeyboard.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyArray,"KeyArray");
	HX_STACK_ARG(Status,"Status");
	HX_STACK_LINE(248)
	if (((KeyArray == null()))){
		HX_STACK_LINE(249)
		return false;
	}
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		while(((_g < KeyArray->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(253)
			Dynamic key = KeyArray->__GetItem(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(253)
			++(_g);
			HX_STACK_LINE(256)
			key = ::Std_obj::string(key).toUpperCase();
			struct _Function_3_1{
				inline static Dynamic Block( ::flixel::system::input::keyboard::FlxKeyboard_obj *__this,Dynamic &key){
					HX_STACK_PUSH("*::closure","flixel/system/input/keyboard/FlxKeyboard.hx",258);
					{
						HX_STACK_LINE(258)
						::String key1 = key;		HX_STACK_VAR(key1,"key1");
						HX_STACK_LINE(258)
						return __this->_keyLookup->get(key1);
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			::flixel::system::input::keyboard::FlxKey k = this->_keyList->__get(_Function_3_1::Block(this,key)).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(259)
			if (((k != null()))){
				HX_STACK_LINE(260)
				if (((k->current == Status))){
					HX_STACK_LINE(262)
					return true;
				}
				else{
					HX_STACK_LINE(265)
					if (((bool((Status == (int)1)) && bool((k->current == (int)2))))){
						HX_STACK_LINE(266)
						return true;
					}
					else{
						HX_STACK_LINE(269)
						if (((bool((Status == (int)0)) && bool((k->current == (int)-1))))){
							HX_STACK_LINE(270)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(282)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,checkKeyStatus,return )

bool FlxKeyboard_obj::anyJustReleased( Dynamic KeyArray){
	HX_STACK_PUSH("FlxKeyboard::anyJustReleased","flixel/system/input/keyboard/FlxKeyboard.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyArray,"KeyArray");
	HX_STACK_LINE(236)
	return this->checkKeyStatus(KeyArray,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustReleased,return )

bool FlxKeyboard_obj::anyJustPressed( Dynamic KeyArray){
	HX_STACK_PUSH("FlxKeyboard::anyJustPressed","flixel/system/input/keyboard/FlxKeyboard.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyArray,"KeyArray");
	HX_STACK_LINE(219)
	return this->checkKeyStatus(KeyArray,(int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustPressed,return )

bool FlxKeyboard_obj::anyPressed( Dynamic KeyArray){
	HX_STACK_PUSH("FlxKeyboard::anyPressed","flixel/system/input/keyboard/FlxKeyboard.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyArray,"KeyArray");
	HX_STACK_LINE(202)
	return this->checkKeyStatus(KeyArray,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyPressed,return )

Void FlxKeyboard_obj::reset( ){
{
		HX_STACK_PUSH("FlxKeyboard::reset","flixel/system/input/keyboard/FlxKeyboard.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		while(((_g < _g1->length))){
			HX_STACK_LINE(179)
			::flixel::system::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(179)
			++(_g);
			HX_STACK_LINE(181)
			if (((key != null()))){
				HX_STACK_LINE(183)
				key->current = (int)0;
				HX_STACK_LINE(184)
				key->last = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,reset,(void))

Void FlxKeyboard_obj::update( ){
{
		HX_STACK_PUSH("FlxKeyboard::update","flixel/system/input/keyboard/FlxKeyboard.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while(((_g < _g1->length))){
			HX_STACK_LINE(154)
			::flixel::system::input::keyboard::FlxKey key = _g1->__get(_g).StaticCast< ::flixel::system::input::keyboard::FlxKey >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(156)
			if (((key == null()))){
				HX_STACK_LINE(157)
				continue;
			}
			HX_STACK_LINE(161)
			if (((bool((key->last == (int)-1)) && bool((key->current == (int)-1))))){
				HX_STACK_LINE(162)
				key->current = (int)0;
			}
			else{
				HX_STACK_LINE(165)
				if (((bool((key->last == (int)2)) && bool((key->current == (int)2))))){
					HX_STACK_LINE(166)
					key->current = (int)1;
				}
			}
			HX_STACK_LINE(170)
			key->last = key->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,update,(void))

Void FlxKeyboard_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_PUSH("FlxKeyboard::addKey","flixel/system/input/keyboard/FlxKeyboard.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(KeyName,"KeyName");
		HX_STACK_ARG(KeyCode,"KeyCode");
		HX_STACK_LINE(145)
		this->_keyLookup->set(KeyName,KeyCode);
		HX_STACK_LINE(146)
		this->_keyList[KeyCode] = ::flixel::system::input::keyboard::FlxKey_obj::__new(KeyName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,addKey,(void))


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(_keyList,"_keyList");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(_keyList,"_keyList");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyList") ) { return _keyList; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return inKeyArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyCode") ) { return getKeyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { return _keyLookup; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkKeyStatus") ) { return checkKeyStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { _keyList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("_keyList"));
	outFields->push(HX_CSTRING("_keyLookup"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("updateKeyStates"),
	HX_CSTRING("inKeyArray"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getIsDown"),
	HX_CSTRING("getKeyCode"),
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("checkKeyStatus"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("addKey"),
	HX_CSTRING("_keyList"),
	HX_CSTRING("_keyLookup"),
	HX_CSTRING("enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.keyboard.FlxKeyboard"), hx::TCanCast< FlxKeyboard_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKeyboard_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace keyboard
