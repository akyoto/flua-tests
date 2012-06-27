#ifndef file_1
#define file_1

// Includes
#include <flua_decls.hpp>
#include </home/eduard/Projects/bp/src/bp/Core/C++/Core.hpp>

// Prototypes

inline BPTuple_Int_Int_UTF8String_* func();
inline void print__Int(Int);
inline void print__UTF8String(BPUTF8String*);

// Includes


// Tuples


// Struct 'BPTuple_Int_Int_UTF8String_'
class BPTuple_Int_Int_UTF8String_ {
public:
	Int _0;
	Int _1;
	BPUTF8String* _2;
	
	inline BPTuple_Int_Int_UTF8String_(Int __0, Int __1, BPUTF8String* __2) : _0(__0), _1(__1), _2(__2) {}
} ;
// Variables

Int a;
Int b;

// DataFlow variables


// Classes


// Functions

// func
inline BPTuple_Int_Int_UTF8String_* func() {
	return (new BPTuple_Int_Int_UTF8String_(3, 4, file_1_flua_string_0));
}

// Module execution
void exec_file_1() {
	// Strings
	file_1_flua_string_0 = new BPUTF8String(const_cast<Byte*>("5"));
	file_1_flua_string_1 = new BPUTF8String(const_cast<Byte*>(""));

	// Code
	BPTuple_Int_Int_UTF8String_* _flua_tuple_0 = ::func();
	a = _flua_tuple_0->_0;
	b = _flua_tuple_0->_1;
	c = _flua_tuple_0->_2;
	delete _flua_tuple_0;
	;
	::print__Int(a);
	::print__Int(b);
	::print__UTF8String(c);
	c = c->after__UTF8String(file_1_flua_string_1);
}
#endif
