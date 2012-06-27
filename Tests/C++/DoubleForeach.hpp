#ifndef file_1
#define file_1

// Includes
#include <flua_decls.hpp>
#include </home/eduard/Projects/flua/src/flua/Core/C++/Core.hpp>
#include </home/eduard/Projects/flua/src/flua/Collection/List/C++/List.hpp>

// Prototypes

inline void print__Int(Int);

// Includes


// Tuples


// Variables

BPMutableList< BPMutableList< Int >* >* a;

// DataFlow variables


// Classes


// Functions

// Module execution
void exec_file_1() {
	// Strings

	// Code
	a = (new BPMutableList< BPMutableList< Int >* >());
	{
	BPMutableList< Int >* x;
	BPListNode< BPMutableList< Int >* >* node = a->_start;
	while(node->getNext()) {
		node = node->getNext();
		x = node->getValue();
		{
		Int l;
		BPListNode< Int >* node = x->_start;
		while(node->getNext()) {
			node = node->getNext();
			l = node->getValue();
			::print__Int(l);
_continue_point_1:
;
		};

		};
_continue_point_2:
;
	};
	};
}
#endif
