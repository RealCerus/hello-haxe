// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_34_main,"Main","main",0xed0e206e,"Main.main","Main.hx",34,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_4_main,"Main","main",0xed0e206e,"Main.main","Main.hx",4,0x087e5c05)
static const int _hx_array_data_332f6459_2[] = {
	(int)1,(int)546,(int)43,
};
static const ::String _hx_array_data_332f6459_3[] = {
	HX_("fghdfg",fe,f8,b6,5b),HX_("fgdfgfddsfsdfdf",62,58,a6,46),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_66_makeBreak,"Main","makeBreak",0x6d0dd39c,"Main.makeBreak","Main.hx",66,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_70_test,"Main","test",0xf1b1b087,"Main.test","Main.hx",70,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_74_hello,"Main","hello",0xa0f4793d,"Main.hello","Main.hx",74,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_78_print,"Main","print",0x44be9e58,"Main.print","Main.hx",78,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_81_loops,"Main","loops",0xf52d37ba,"Main.loops","Main.hx",81,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x332f6459;
}

void Main_obj::main(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::String _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_34_main)
HXLINE(  34)			return HX_("str",b1,a8,57,00);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_4_main)
HXLINE(   5)		::haxe::Log_obj::trace(HX_("Hello, world!",f5,4b,8f,53),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),5,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(   7)		::Main_obj::makeBreak(HX_("Funcs with optional params",dd,d8,1c,3e));
HXLINE(  10)		::haxe::Log_obj::trace(::Main_obj::test_dyn(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),10,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  11)		 ::Dynamic i = null();
HXDLIN(  11)		::String s = null();
HXDLIN(  11)		::haxe::Log_obj::trace((((HX_("i: ",4f,df,4f,00) + i) + HX_(", s: ",e5,cf,1f,6b)) + s),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),11,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  12)		::String s1 = null();
HXDLIN(  12)		::haxe::Log_obj::trace((((HX_("i: ",4f,df,4f,00) + 1) + HX_(", s: ",e5,cf,1f,6b)) + s1),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),12,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  13)		::haxe::Log_obj::trace((((HX_("i: ",4f,df,4f,00) + 1) + HX_(", s: ",e5,cf,1f,6b)) + HX_("foo",06,c7,4d,00)),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),13,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  14)		 ::Dynamic i1 = null();
HXDLIN(  14)		::haxe::Log_obj::trace((((HX_("i: ",4f,df,4f,00) + i1) + HX_(", s: ",e5,cf,1f,6b)) + HX_("foo",06,c7,4d,00)),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),14,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  16)		::Main_obj::makeBreak(HX_("Func with optional param & string addition",fc,f6,ae,f6));
HXLINE(  20)		::haxe::Log_obj::trace(::Main_obj::hello(null()),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),20,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  21)		::haxe::Log_obj::trace(::Main_obj::hello(HX_("idiot",d3,4c,7c,b7)),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),21,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  23)		::Main_obj::makeBreak(HX_("Loop & print through array",b5,08,7f,f7));
HXLINE(  25)		::Main_obj::print(::Array_obj< int >::fromData( _hx_array_data_332f6459_2,3));
HXLINE(  26)		::Main_obj::print(::Array_obj< ::String >::fromData( _hx_array_data_332f6459_3,2));
HXLINE(  28)		::Main_obj::makeBreak(HX_("Loop stuff",58,b0,91,da));
HXLINE(  30)		::Main_obj::loops();
HXLINE(  32)		::Main_obj::makeBreak(HX_("Nested function",41,8d,99,ba));
HXLINE(  36)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  36)		::String _hx_tmp1 = ( (::String)( ::Dynamic(new _hx_Closure_0())()) );
HXDLIN(  36)		_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),36,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  38)		::Main_obj::makeBreak(HX_("Import with alias and random",3b,89,0d,8d));
HXLINE(  40)		{
HXLINE(  40)			::haxe::Log_obj::trace(::Math_obj::random(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),40,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXDLIN(  40)			::haxe::Log_obj::trace(::Math_obj::random(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),40,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXDLIN(  40)			::haxe::Log_obj::trace(::Math_obj::random(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),40,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXDLIN(  40)			::haxe::Log_obj::trace(::Math_obj::random(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),40,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXDLIN(  40)			::haxe::Log_obj::trace(::Math_obj::random(),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),40,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
            		}
HXLINE(  42)		::Main_obj::makeBreak(HX_("Types",59,e0,f8,ad));
HXLINE(  51)		::haxe::Log_obj::trace( ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("n",6e,00,00,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("i",69,00,00,00),0)))
            			->setFixed(1,HX_("x",78,00,00,00),1)
            			->setFixed(2,HX_("y",79,00,00,00),2)),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),51,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  53)		 ::Dynamic type =  ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("field1",37,8e,8e,80),1)
            			->setFixed(1,HX_("some-string",4a,ec,5a,06),HX_("lol",89,54,52,00))
            			->setFixed(2,HX_("nested",f7,2e,16,6f), ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("floatyyy",7d,de,ab,dd),((Float)1.0))
            				->setFixed(1,HX_("bool",2a,84,1b,41),true))));
HXLINE(  61)		::haxe::Log_obj::trace(type,hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),61,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
HXLINE(  62)		 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN(  62)		::String _hx_tmp3 = (HX_("bool from nested = ",cc,bf,74,10) + ::Std_obj::string( ::Dynamic( ::Dynamic(type->__Field(HX_("nested",f7,2e,16,6f),hx::paccDynamic))->__Field(HX_("bool",2a,84,1b,41),hx::paccDynamic))));
HXDLIN(  62)		_hx_tmp2(_hx_tmp3,hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),62,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

void Main_obj::makeBreak(::String __o_secName){
            		::String secName = __o_secName;
            		if (hx::IsNull(__o_secName)) secName = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_66_makeBreak)
HXDLIN(  66)		::haxe::Log_obj::trace((HX_("------------------------ ",a0,67,96,6e) + secName),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),66,HX_("Main",59,64,2f,33),HX_("makeBreak",f1,9b,84,8c)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,makeBreak,(void))

::String Main_obj::test( ::Dynamic i,::String s){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_70_test)
HXDLIN(  70)		return (((HX_("i: ",4f,df,4f,00) + i) + HX_(", s: ",e5,cf,1f,6b)) + s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,test,return )

::String Main_obj::hello(::String __o_str){
            		::String str = __o_str;
            		if (hx::IsNull(__o_str)) str = HX_("world",52,96,64,ce);
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_74_hello)
HXDLIN(  74)		return (HX_("Hello ",ee,f0,df,38) + str);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,hello,return )

void Main_obj::print( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_78_print)
HXDLIN(  78)		 ::Dynamic o = it->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
HXDLIN(  78)		while(( (bool)(o->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN(  78)			 ::Dynamic o1 = o->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXDLIN(  78)			::haxe::Log_obj::trace(o1,hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),78,HX_("Main",59,64,2f,33),HX_("print",2d,58,8b,c8)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,print,(void))

void Main_obj::loops(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_81_loops)
HXLINE(  82)		{
HXLINE(  83)			::haxe::Log_obj::trace((HX_("First loop index is ",3c,1a,10,2a) + 0),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),83,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  83)			::haxe::Log_obj::trace((HX_("First loop index is ",3c,1a,10,2a) + 1),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),83,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  83)			::haxe::Log_obj::trace((HX_("First loop index is ",3c,1a,10,2a) + 2),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),83,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  83)			::haxe::Log_obj::trace((HX_("First loop index is ",3c,1a,10,2a) + 3),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),83,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  83)			::haxe::Log_obj::trace((HX_("First loop index is ",3c,1a,10,2a) + 4),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),83,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
            		}
HXLINE(  85)		{
HXLINE(  86)			::haxe::Log_obj::trace((HX_("Second loop value is ",17,53,09,e4) + 1),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),86,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  86)			::haxe::Log_obj::trace((HX_("Second loop value is ",17,53,09,e4) + 4),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),86,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  86)			::haxe::Log_obj::trace((HX_("Second loop value is ",17,53,09,e4) + 2),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),86,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  86)			::haxe::Log_obj::trace((HX_("Second loop value is ",17,53,09,e4) + 67),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),86,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
HXDLIN(  86)			::haxe::Log_obj::trace((HX_("Second loop value is ",17,53,09,e4) + 12),hx::SourceInfo(HX_("src/Main.hx",9a,7a,30,a1),86,HX_("Main",59,64,2f,33),HX_("loops",8f,f1,f9,78)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,loops,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"test") ) { outValue = test_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"hello") ) { outValue = hello_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loops") ) { outValue = loops_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeBreak") ) { outValue = makeBreak_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	HX_("makeBreak",f1,9b,84,8c),
	HX_("test",52,c8,f9,4c),
	HX_("hello",12,33,c1,24),
	HX_("print",2d,58,8b,c8),
	HX_("loops",8f,f1,f9,78),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
