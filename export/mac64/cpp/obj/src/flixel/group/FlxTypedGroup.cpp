#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxTypedGroup::new","flixel/group/FlxTypedGroup.hx",13);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(48)
	this->_sortIndex = null();
	HX_STACK_LINE(44)
	this->_marker = (int)0;
	HX_STACK_LINE(40)
	this->autoReviveMembers = false;
	HX_STACK_LINE(35)
	this->length = (int)0;
	HX_STACK_LINE(70)
	super::__construct();
	HX_STACK_LINE(72)
	this->set_maxSize(::Std_obj::_int(::Math_obj::abs(MaxSize)));
	HX_STACK_LINE(74)
	this->_members = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(75)
	this->_basics = this->_members;
	HX_STACK_LINE(76)
	this->collisionType = ::flixel::system::FlxCollisionType_obj::GROUP;
}
;
	return null();
}

FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FlxTypedGroup_obj::get_members( ){
	HX_STACK_PUSH("FlxTypedGroup::get_members","flixel/group/FlxTypedGroup.hx",854);
	HX_STACK_THIS(this);
	HX_STACK_LINE(854)
	return this->_members;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_members,return )

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_PUSH("FlxTypedGroup::set_maxSize","flixel/group/FlxTypedGroup.hx",820);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(821)
	this->maxSize = ::Std_obj::_int(::Math_obj::abs(Size));
	HX_STACK_LINE(823)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(824)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(827)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->_members == null())))) || bool((this->maxSize >= this->_members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(828)
		return this->maxSize;
	}
	HX_STACK_LINE(833)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(834)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(835)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(837)
	while(((i < l))){
		HX_STACK_LINE(839)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(841)
		if (((basic != null()))){
			HX_STACK_LINE(842)
			basic->destroy();
		}
	}
	HX_STACK_LINE(847)
	this->length = this->maxSize;
	HX_STACK_LINE(848)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,this->maxSize);
	HX_STACK_LINE(850)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

int FlxTypedGroup_obj::sortHandler( Dynamic Obj1,Dynamic Obj2){
	HX_STACK_PUSH("FlxTypedGroup::sortHandler","flixel/group/FlxTypedGroup.hx",803);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Obj1,"Obj1");
	HX_STACK_ARG(Obj2,"Obj2");
	HX_STACK_LINE(804)
	int prop1 = (  (((Obj1 == null()))) ? Dynamic(null()) : Dynamic(Obj1->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(805)
	int prop2 = (  (((Obj2 == null()))) ? Dynamic(null()) : Dynamic(Obj2->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(807)
	if (((prop1 < prop2))){
		HX_STACK_LINE(808)
		return this->_sortOrder;
	}
	else{
		HX_STACK_LINE(811)
		if (((prop1 > prop2))){
			HX_STACK_LINE(812)
			return -(this->_sortOrder);
		}
	}
	HX_STACK_LINE(816)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sortHandler,return )

Void FlxTypedGroup_obj::forEachExists( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachExists","flixel/group/FlxTypedGroup.hx",780);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(781)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(782)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(784)
		while(((i < this->length))){
			HX_STACK_LINE(786)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(787)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(788)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(791)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachDead","flixel/group/FlxTypedGroup.hx",760);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(761)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(762)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(764)
		while(((i < this->length))){
			HX_STACK_LINE(766)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(767)
			if (((bool((basic != null())) && bool(!(basic->alive))))){
				HX_STACK_LINE(768)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(771)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachAlive","flixel/group/FlxTypedGroup.hx",740);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(741)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(742)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(744)
		while(((i < this->length))){
			HX_STACK_LINE(746)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(747)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
				HX_STACK_LINE(748)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(751)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEach( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEach","flixel/group/FlxTypedGroup.hx",725);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(726)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->_members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(726)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(726)
			Dynamic member = _g1->__GetItem(_g);		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(726)
			++(_g);
			HX_STACK_LINE(728)
			if (((member != null()))){
				HX_STACK_LINE(729)
				Function(member).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEach,(void))

::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_PUSH("FlxTypedGroup::iterator","flixel/group/FlxTypedGroup.hx",716);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	bool run(Dynamic m){
		HX_STACK_PUSH("*::_Function_1_1","flixel/group/FlxTypedGroup.hx",717);
		HX_STACK_ARG(m,"m");
		{
			HX_STACK_LINE(717)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(716)
	return ::flixel::group::FlxTypedGroupIterator_obj::__new(this->_members,(  (((filter == null()))) ? Dynamic( Dynamic(new _Function_1_1())) : Dynamic(filter) ));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::revive( ){
{
		HX_STACK_PUSH("FlxTypedGroup::revive","flixel/group/FlxTypedGroup.hx",691);
		HX_STACK_THIS(this);
		HX_STACK_LINE(692)
		this->super::revive();
		HX_STACK_LINE(694)
		if ((this->autoReviveMembers)){
			HX_STACK_LINE(696)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(697)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(699)
			while(((i < this->length))){
				HX_STACK_LINE(701)
				basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(703)
				if (((bool((basic != null())) && bool(!(basic->exists))))){
					HX_STACK_LINE(704)
					basic->revive();
				}
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_PUSH("FlxTypedGroup::kill","flixel/group/FlxTypedGroup.hx",669);
		HX_STACK_THIS(this);
		HX_STACK_LINE(670)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(671)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(673)
		while(((i < this->length))){
			HX_STACK_LINE(675)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(677)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(678)
				basic->kill();
			}
		}
		HX_STACK_LINE(683)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_PUSH("FlxTypedGroup::clear","flixel/group/FlxTypedGroup.hx",659);
		HX_STACK_THIS(this);
		HX_STACK_LINE(660)
		this->length = (int)0;
		HX_STACK_LINE(661)
		this->_members->__Field(HX_CSTRING("splice"),true)((int)0,this->_members->__Field(HX_CSTRING("length"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxTypedGroup::getRandom","flixel/group/FlxTypedGroup.hx",641);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(642)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(643)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(646)
		if (((Length <= (int)0))){
			HX_STACK_LINE(647)
			Length = this->length;
		}
		HX_STACK_LINE(651)
		return ::flixel::util::FlxArrayUtil_obj::getRandom_flixel_group_FlxTypedGroup_T(this->_members,StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_PUSH("FlxTypedGroup::countDead","flixel/group/FlxTypedGroup.hx",608);
	HX_STACK_THIS(this);
	HX_STACK_LINE(609)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(610)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(611)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(613)
	while(((i < this->length))){
		HX_STACK_LINE(615)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(617)
		if (((basic != null()))){
			HX_STACK_LINE(619)
			if (((count < (int)0))){
				HX_STACK_LINE(620)
				count = (int)0;
			}
			HX_STACK_LINE(623)
			if ((!(basic->alive))){
				HX_STACK_LINE(624)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(630)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_PUSH("FlxTypedGroup::countLiving","flixel/group/FlxTypedGroup.hx",577);
	HX_STACK_THIS(this);
	HX_STACK_LINE(578)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(579)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(580)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(582)
	while(((i < this->length))){
		HX_STACK_LINE(584)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(586)
		if (((basic != null()))){
			HX_STACK_LINE(588)
			if (((count < (int)0))){
				HX_STACK_LINE(589)
				count = (int)0;
			}
			HX_STACK_LINE(592)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(593)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(599)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstDead","flixel/group/FlxTypedGroup.hx",554);
	HX_STACK_THIS(this);
	HX_STACK_LINE(555)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(556)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(558)
	while(((i < this->length))){
		HX_STACK_LINE(560)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(562)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(563)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(568)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstAlive","flixel/group/FlxTypedGroup.hx",530);
	HX_STACK_THIS(this);
	HX_STACK_LINE(531)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(532)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(534)
	while(((i < this->length))){
		HX_STACK_LINE(536)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(538)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(539)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(544)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstExisting","flixel/group/FlxTypedGroup.hx",506);
	HX_STACK_THIS(this);
	HX_STACK_LINE(507)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(508)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(510)
	while(((i < this->length))){
		HX_STACK_LINE(512)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(514)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(515)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(520)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstNull","flixel/group/FlxTypedGroup.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_LINE(481)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(482)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(484)
	while(((i < l))){
		HX_STACK_LINE(485)
		if (((this->_members->__GetItem(i) == null()))){
			HX_STACK_LINE(487)
			return i;
		}
		else{
			HX_STACK_LINE(491)
			(i)++;
		}
	}
	HX_STACK_LINE(496)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::getFirstAvailable","flixel/group/FlxTypedGroup.hx",452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(453)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(454)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(456)
		while(((i < this->length))){
			HX_STACK_LINE(458)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(460)
			if (((bool((bool((basic != null())) && bool(!(basic->exists)))) && bool(((bool((ObjectClass == null())) || bool(::Std_obj::is(basic,ObjectClass)))))))){
				HX_STACK_LINE(462)
				if (((bool(Force) && bool((::Type_obj::getClassName(::Type_obj::getClass(basic)) != ::Type_obj::getClassName(ObjectClass)))))){
					HX_STACK_LINE(463)
					continue;
				}
				HX_STACK_LINE(466)
				return this->_members->__GetItem((i - (int)1));
			}
		}
		HX_STACK_LINE(470)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

Void FlxTypedGroup_obj::callAll( ::String FunctionName,Dynamic Args,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::callAll","flixel/group/FlxTypedGroup.hx",418);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FunctionName,"FunctionName");
	HX_STACK_ARG(Args,"Args");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(419)
		if (((Args == null()))){
			HX_STACK_LINE(420)
			Args = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(422)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(423)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(425)
		while(((i < this->length))){
			HX_STACK_LINE(427)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(429)
			if (((basic != null()))){
				HX_STACK_LINE(430)
				if (((bool(Recurse) && bool((basic->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))))){
					HX_STACK_LINE(432)
					(hx::TCast< flixel::group::FlxTypedGroup >::cast(basic))->callAll(FunctionName,null(),Recurse);
				}
				else{
					HX_STACK_LINE(436)
					::Reflect_obj::callMethod(basic,(  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) ),Args);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,callAll,(void))

Void FlxTypedGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::setAll","flixel/group/FlxTypedGroup.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(VariableName,"VariableName");
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(389)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(390)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(392)
		while(((i < this->length))){
			HX_STACK_LINE(394)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(396)
			if (((basic != null()))){
				HX_STACK_LINE(397)
				if (((bool(Recurse) && bool((basic->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))))){
					HX_STACK_LINE(399)
					basic->__Field(HX_CSTRING("setAll"),true)(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(403)
					if (((basic != null()))){
						HX_STACK_LINE(404)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,setAll,(void))

Void FlxTypedGroup_obj::sort( ::String __o_Index,hx::Null< int >  __o_Order){
::String Index = __o_Index.Default(HX_CSTRING("y"));
int Order = __o_Order.Default(-1);
	HX_STACK_PUSH("FlxTypedGroup::sort","flixel/group/FlxTypedGroup.hx",374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Order,"Order");
{
		HX_STACK_LINE(375)
		this->_sortIndex = Index;
		HX_STACK_LINE(376)
		this->_sortOrder = Order;
		HX_STACK_LINE(377)
		this->_members->__Field(HX_CSTRING("sort"),true)(this->sortHandler_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_PUSH("FlxTypedGroup::replace","flixel/group/FlxTypedGroup.hx",350);
	HX_STACK_THIS(this);
	HX_STACK_ARG(OldObject,"OldObject");
	HX_STACK_ARG(NewObject,"NewObject");
	HX_STACK_LINE(351)
	int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,OldObject,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(353)
	if (((bool((index < (int)0)) || bool((index >= this->_members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(354)
		return null();
	}
	HX_STACK_LINE(358)
	hx::IndexRef((this->_members).mPtr,index) = NewObject;
	HX_STACK_LINE(360)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::remove","flixel/group/FlxTypedGroup.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Splice,"Splice");
{
		HX_STACK_LINE(319)
		if (((this->_members == null()))){
			HX_STACK_LINE(320)
			return null();
		}
		HX_STACK_LINE(324)
		int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,Object,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(326)
		if (((bool((index < (int)0)) || bool((index >= this->_members->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(327)
			return null();
		}
		HX_STACK_LINE(330)
		if ((Splice)){
			HX_STACK_LINE(331)
			this->_members->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
		else{
			HX_STACK_LINE(335)
			hx::IndexRef((this->_members).mPtr,index) = null();
		}
		HX_STACK_LINE(339)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::recycle( ::Class ObjectClass,Dynamic ContructorArgs,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::recycle","flixel/group/FlxTypedGroup.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_ARG(ContructorArgs,"ContructorArgs");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(264)
		if (((ContructorArgs == null()))){
			HX_STACK_LINE(265)
			ContructorArgs = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(269)
		Dynamic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(271)
		if (((this->maxSize > (int)0))){
			HX_STACK_LINE(272)
			if (((this->length < this->maxSize))){
				HX_STACK_LINE(275)
				if (((ObjectClass == null()))){
					HX_STACK_LINE(276)
					return null();
				}
				HX_STACK_LINE(280)
				return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
			}
			else{
				HX_STACK_LINE(284)
				basic = this->_members->__GetItem((this->_marker)++);
				HX_STACK_LINE(286)
				if (((this->_marker >= this->maxSize))){
					HX_STACK_LINE(287)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(291)
				return basic;
			}
		}
		else{
			HX_STACK_LINE(296)
			basic = this->getFirstAvailable(ObjectClass,Force);
			HX_STACK_LINE(298)
			if (((basic != null()))){
				HX_STACK_LINE(299)
				return basic;
			}
			HX_STACK_LINE(302)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(303)
				return null();
			}
			HX_STACK_LINE(307)
			return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
		}
		HX_STACK_LINE(271)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_PUSH("FlxTypedGroup::add","flixel/group/FlxTypedGroup.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(180)
	if (((Object == null()))){
		HX_STACK_LINE(182)
		::flixel::FlxG_obj::log->warn(HX_CSTRING("Cannot add a `null` object to a FlxGroup."));
		HX_STACK_LINE(183)
		return null();
	}
	HX_STACK_LINE(187)
	if (((::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,Object,null()) >= (int)0))){
		HX_STACK_LINE(188)
		return Object;
	}
	HX_STACK_LINE(193)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(194)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(196)
	while(((i < l))){
		HX_STACK_LINE(198)
		if (((this->_members->__GetItem(i) == null()))){
			HX_STACK_LINE(200)
			hx::IndexRef((this->_members).mPtr,i) = Object;
			HX_STACK_LINE(202)
			if (((i >= this->length))){
				HX_STACK_LINE(203)
				this->length = (i + (int)1);
			}
			HX_STACK_LINE(207)
			return Object;
		}
		HX_STACK_LINE(209)
		(i)++;
	}
	HX_STACK_LINE(213)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(214)
		if (((this->_members->__Field(HX_CSTRING("length"),true) >= this->maxSize))){
			HX_STACK_LINE(216)
			return Object;
		}
		else{
			HX_STACK_LINE(219)
			if ((((this->_members->__Field(HX_CSTRING("length"),true) * (int)2) <= this->maxSize))){
				HX_STACK_LINE(220)
				::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,(this->_members->__Field(HX_CSTRING("length"),true) * (int)2));
			}
			else{
				HX_STACK_LINE(224)
				::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,this->maxSize);
			}
		}
	}
	else{
		HX_STACK_LINE(229)
		::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,(this->_members->__Field(HX_CSTRING("length"),true) * (int)2));
	}
	HX_STACK_LINE(235)
	hx::IndexRef((this->_members).mPtr,i) = Object;
	HX_STACK_LINE(236)
	this->length = (i + (int)1);
	HX_STACK_LINE(238)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedGroup::draw","flixel/group/FlxTypedGroup.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_LINE(135)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(136)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(138)
		while(((i < this->length))){
			HX_STACK_LINE(140)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(142)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(143)
				basic->draw();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedGroup::update","flixel/group/FlxTypedGroup.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(116)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(117)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(119)
		while(((i < this->length))){
			HX_STACK_LINE(121)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(123)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(124)
				basic->update();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedGroup::destroy","flixel/group/FlxTypedGroup.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		this->super::destroy();
		HX_STACK_LINE(89)
		if (((this->_basics != null()))){
			HX_STACK_LINE(91)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(92)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(94)
			while(((i < this->length))){
				HX_STACK_LINE(96)
				basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(98)
				if (((basic != null()))){
					HX_STACK_LINE(99)
					basic->destroy();
				}
			}
			HX_STACK_LINE(104)
			this->_basics = null();
			HX_STACK_LINE(105)
			this->_members = null();
		}
		HX_STACK_LINE(108)
		this->_sortIndex = null();
	}
return null();
}



FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(_members,"_members");
	HX_MARK_MEMBER_NAME(_basics,"_basics");
	HX_MARK_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_MARK_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(autoReviveMembers,"autoReviveMembers");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_members,"_members");
	HX_VISIT_MEMBER_NAME(_basics,"_basics");
	HX_VISIT_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_VISIT_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(autoReviveMembers,"autoReviveMembers");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_basics") ) { return _basics; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"members") ) { return get_members(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"_members") ) { return _members; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { return _sortOrder; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { return _sortIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_members") ) { return get_members_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"autoReviveMembers") ) { return autoReviveMembers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_basics") ) { _basics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_members") ) { _members=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { _sortOrder=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { _sortIndex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"autoReviveMembers") ) { autoReviveMembers=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_members"));
	outFields->push(HX_CSTRING("_basics"));
	outFields->push(HX_CSTRING("_sortOrder"));
	outFields->push(HX_CSTRING("_sortIndex"));
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("autoReviveMembers"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("members"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_members"),
	HX_CSTRING("set_maxSize"),
	HX_CSTRING("sortHandler"),
	HX_CSTRING("forEachExists"),
	HX_CSTRING("forEachDead"),
	HX_CSTRING("forEachAlive"),
	HX_CSTRING("forEach"),
	HX_CSTRING("iterator"),
	HX_CSTRING("revive"),
	HX_CSTRING("kill"),
	HX_CSTRING("clear"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("countDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstExisting"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("callAll"),
	HX_CSTRING("setAll"),
	HX_CSTRING("sort"),
	HX_CSTRING("replace"),
	HX_CSTRING("remove"),
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_members"),
	HX_CSTRING("_basics"),
	HX_CSTRING("_sortOrder"),
	HX_CSTRING("_sortIndex"),
	HX_CSTRING("_marker"),
	HX_CSTRING("autoReviveMembers"),
	HX_CSTRING("length"),
	HX_CSTRING("maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroup"), hx::TCanCast< FlxTypedGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
