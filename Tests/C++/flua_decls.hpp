#ifndef flua__decls__hpp
#define flua__decls__hpp

#define BP_USE_BOEHM_GC
#include <precompiled/all.hpp>
typedef uint64_t UInt64;
typedef int32_t Int32;
typedef short Int16;
typedef double Float64;
typedef int_fast32_t Int;
typedef float Float;
typedef const char ConstChar;
typedef unsigned short UInt16;
typedef bool Bool;
typedef int64_t Int64;
typedef char Byte;
typedef Byte * CString;
typedef uint32_t UInt;
typedef uint32_t UInt32;
typedef float Float32;
typedef size_t Size;
#define BP_PTR_DECL(x) x*

class BPDivisionByZeroException;
class BPException;
template <typename TDataType> class BPMutableVector;
class BPInt;
class BPUTF8String;
template <typename TDataType> class BPMemPointer;

// Strings
BPUTF8String* EMPTY_STRING;

// Prototypes
inline void print__Int(Int);
// extern func flua_setMem;
// extern func flua_flush;
// extern func flua_write;
// extern func flua_log10;
// extern func flua_copyMem;
// extern func flua_compareMem;
// extern func flua_sqrt;
// extern func flua_systemTimeMicro;
// extern func flua_strlenUtf8;
// extern func flua_sizeOf;
// extern func flua_floor;
// extern func flua_insertInt;
// extern func flua_swap;
// extern func flua_writeXbytesLine;
// extern func flua_isAlnum;
// extern func flua_utf8Slice;
// extern func flua_gcCollect;
// extern func flua_isUpper;
// extern func flua_toLower;
// extern func flua_strlenUtf8Xchars;
// extern func flua_isNan;
// extern func flua_writeXbytes;
// extern func flua_isLower;
// extern func flua_isSpace;
// extern func flua_writeLine;
// extern func flua_rand;
// extern func flua_isInf;
// extern func flua_isAlpha;
// extern func flua_log;
// extern func flua_toUpper;
// extern func flua_isDigit;
// extern func flua_systemTime;
// extern func flua_usleep;
// extern func flua_ceil;
// extern func flua_exp;
// extern func flua_strlen;

// Threads

#ifndef flua_Core_Startup_hpp
	#define   flua_Core_Startup_hpp
	#include <flua/Core/Startup.hpp>
#endif

#ifndef flua_Core_Memory_Memory_hpp
	#define   flua_Core_Memory_Memory_hpp
	#include <flua/Core/Memory/Memory.hpp>
#endif

#ifndef flua_Core_String_CharTypes_hpp
	#define   flua_Core_String_CharTypes_hpp
	#include <flua/Core/String/CharTypes.hpp>
#endif

#ifndef flua_Math_Math_hpp
	#define   flua_Math_Math_hpp
	#include <flua/Math/Math.hpp>
#endif

#ifndef flua_Core_String_String_hpp
	#define   flua_Core_String_String_hpp
	#include <flua/Core/String/String.hpp>
#endif

#ifndef flua_Core_Output_Output_hpp
	#define   flua_Core_Output_Output_hpp
	#include <flua/Core/Output/Output.hpp>
#endif

#ifndef flua_Core_Core_hpp
	#define   flua_Core_Core_hpp
	#include <flua/Core/Core.hpp>
#endif

#include <vector>

#endif
