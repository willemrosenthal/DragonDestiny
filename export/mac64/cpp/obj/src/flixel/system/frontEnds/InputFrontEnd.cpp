#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_PUSH("InputFrontEnd::new","flixel/system/frontEnds/InputFrontEnd.hx",14);
{
	HX_STACK_LINE(14)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_PUSH("InputFrontEnd::destroy","flixel/system/frontEnds/InputFrontEnd.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while(((_g < _g1->length))){
			HX_STACK_LINE(88)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(90)
			input->destroy();
			HX_STACK_LINE(91)
			input = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_PUSH("InputFrontEnd::onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		while(((_g < _g1->length))){
			HX_STACK_LINE(77)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(79)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_PUSH("InputFrontEnd::onFocus","flixel/system/frontEnds/InputFrontEnd.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		while(((_g < _g1->length))){
			HX_STACK_LINE(66)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(66)
			++(_g);
			HX_STACK_LINE(68)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_PUSH("InputFrontEnd::update","flixel/system/frontEnds/InputFrontEnd.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		while(((_g < _g1->length))){
			HX_STACK_LINE(55)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(57)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_PUSH("InputFrontEnd::reset","flixel/system/frontEnds/InputFrontEnd.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		while(((_g < _g1->length))){
			HX_STACK_LINE(44)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(44)
			++(_g);
			HX_STACK_LINE(46)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

::flixel::system::input::IFlxInput InputFrontEnd_obj::add( ::flixel::system::input::IFlxInput Input){
	HX_STACK_PUSH("InputFrontEnd::add","flixel/system/frontEnds/InputFrontEnd.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while(((_g < _g1->length))){
			HX_STACK_LINE(27)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(27)
			++(_g);
			HX_STACK_LINE(29)
			if (((input->toString() == Input->toString()))){
				HX_STACK_LINE(30)
				return Input;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Input);
	HX_STACK_LINE(36)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add,return )


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("add"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.InputFrontEnd"), hx::TCanCast< InputFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InputFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
