#ifndef file_1
#define file_1

// Includes
#include <flua_decls.hpp>
#include </home/eduard/Projects/bp/src/bp/Core/C++/Core.hpp>

// Prototypes

inline void print__Int(Int);

// Includes


// Tuples


// Variables

BPMyClass* a;
Int x;

// DataFlow variables


// Classes

// BPMyClass
class BPMyClass: public gc {
public:
	// init
	inline BPMyClass() {
		// on 'my'
		this->_a = 0;
		this->_x = 0;
		this->_y = 0;
		this->_z = 0;
		this->_val = NULL;
;
	}

public:
	Int _a;
	Int _x;
	Int _z;
	Int _y;
	BPMyClass* _val;
	
};


// Functions

// Module execution
void exec_file_1() {
	// Strings

	// Code
	a = (new BPMyClass());
	x = 7;
	// on 'a'
	a->_a = a->_a;
	a->_y = 5;
	a->_z = 8;
	a->_x = x;
	a->_val = (new BPMyClass());
;
	// on 'a'
	a->_val->_a = 5;
;
	::print__Int(a->_a);
	::print__Int(a->_val->_a);
}
#endif
