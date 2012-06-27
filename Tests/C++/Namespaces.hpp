#ifndef file_1
#define file_1

// Includes
#include <flua_decls.hpp>
#include </home/eduard/Projects/flua/src/flua/Core/C++/Core.hpp>

// Prototypes

inline void print__Int(Int);

// Includes


// Tuples


// Variables

Int Port_FTPData;
Int Port_MySQL;
Int Port_SMTP;
Int Port_Whois;
Int Port_Echo;
Int Port_ESMTP;
Int Port_FTP;
Int Port_Telnet;
Int Port_SSH;
Int Port_Nameserver;
Int Port_HTTP;
Int Port_HTTPS;

// DataFlow variables


// Classes


// Functions

// Module execution
void exec_file_1() {
	// Strings

	// Code
		Port_Echo = 7;
	Port_FTPData = 20;
	Port_FTP = 21;
	Port_SSH = 22;
	Port_Telnet = 23;
	Port_SMTP = 25;
	Port_ESMTP = 25;
	Port_Nameserver = 42;
	Port_Whois = 43;
	Port_HTTP = 80;
	Port_HTTPS = 443;
	Port_MySQL = 3306;
;
		::print__Int(Port_Echo);
	::print__Int(Port_FTP);
;
}
#endif
