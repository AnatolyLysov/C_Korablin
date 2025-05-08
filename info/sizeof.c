#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <wctype.h>
#include <stdint.h>
#include <float.h>


int main(int argc, char *argv[]) {
	printf("sizeof(char): %zu\n", sizeof(char));
	printf("sizeof(short): %zu\n", sizeof(short));
	printf("sizeof(int): %zu\n", sizeof(int));
	printf("sizeof(long): %zu\n", sizeof(long));
	printf("sizeof(long long): %zu\n", sizeof(long long));
	printf("sizeof(float): %zu\n", sizeof(float));
	printf("sizeof(double): %zu\n", sizeof(double));
	printf("sizeof(long double): %zu\n", sizeof(long double));
	printf("sizeof(void*): %zu\n", sizeof(void*));
	printf("sizeof(size_t): %zu\n", sizeof(size_t));
	printf("sizeof(ptrdiff_t): %zu\n", sizeof(ptrdiff_t));
	printf("sizeof(wchar_t): %zu\n", sizeof(wchar_t));
	printf("sizeof(wint_t): %zu\n", sizeof(wint_t));
	printf("sizeof(int8_t): %zu\n", sizeof(int8_t));
	printf("sizeof(uint8_t): %zu\n", sizeof(uint8_t));
	printf("sizeof(int16_t): %zu\n", sizeof(int16_t));
	printf("sizeof(uint16_t): %zu\n", sizeof(uint16_t));
	printf("sizeof(int32_t): %zu\n", sizeof(int32_t));
	printf("sizeof(uint32_t): %zu\n", sizeof(uint32_t));
	printf("sizeof(int64_t): %zu\n", sizeof(int64_t));
	printf("sizeof(uint64_t): %zu\n", sizeof(uint64_t));
	printf("sizeof(intmax_t): %zu\n", sizeof(intmax_t));
	printf("sizeof(uintmax_t): %zu\n", sizeof(uintmax_t));
	printf("sizeof(intptr_t): %zu\n", sizeof(intptr_t));
	printf("sizeof(uintptr_t): %zu\n", sizeof(uintptr_t));
	printf("sizeof(size_t): %zu\n", sizeof(size_t));
	printf("sizeof(ptrdiff_t): %zu\n", sizeof(ptrdiff_t));
	printf("sizeof(float): %zu\n", sizeof(float));
	printf("sizeof(double): %zu\n", sizeof(double));
	printf("sizeof(long double): %zu\n", sizeof(long double));
	printf("sizeof(va_list): %zu\n", sizeof(va_list));
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("SCHAR_MIN: %d\n", SCHAR_MIN);
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("USHRT_MAX: %d\n", USHRT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("LONG_MIN: %ld\n", LONG_MIN);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("ULONG_MAX: %lu\n", ULONG_MAX);
	printf("LLONG_MIN: %lld\n", LLONG_MIN);
	printf("LLONG_MAX: %lld\n", LLONG_MAX);
	printf("ULLONG_MAX: %llu\n", ULLONG_MAX);
	printf("MB_LEN_MAX: %d\n", MB_LEN_MAX);
	// Removed WCHAR_MIN and WCHAR_MAX as they are not standard macros
	// and may not be defined on all systems.
	printf("WINT_MIN: %d\n", WINT_MIN);
	printf("WINT_MAX: %d\n", WINT_MAX);
	printf("INT8_MIN: %d\n", INT8_MIN);
	printf("INT8_MAX: %d\n", INT8_MAX);
	printf("UINT8_MAX: %d\n", UINT8_MAX);
	printf("INT16_MIN: %d\n", INT16_MIN);
	printf("INT16_MAX: %d\n", INT16_MAX);
	printf("UINT16_MAX: %d\n", UINT16_MAX);
	printf("INT32_MIN: %d\n", INT32_MIN);
	printf("INT32_MAX: %d\n", INT32_MAX);
	printf("UINT32_MAX: %d\n", UINT32_MAX);
	printf("INT64_MIN: %ld\n", INT64_MIN);
	printf("INT64_MAX: %ld\n", INT64_MAX);
	printf("UINT64_MAX: %lu\n", UINT64_MAX);
	printf("INTMAX_MIN: %ld\n", INTMAX_MIN);
	printf("INTMAX_MAX: %ld\n", INTMAX_MAX);
	printf("UINTMAX_MAX: %lu\n", UINTMAX_MAX);
	printf("INTPTR_MIN: %ld\n", INTPTR_MIN);
	printf("INTPTR_MAX: %ld\n", INTPTR_MAX);
	printf("UINTPTR_MAX: %lu\n", UINTPTR_MAX);
	printf("FLT_MIN: %e\n", FLT_MIN);
	printf("FLT_MAX: %e\n", FLT_MAX);
	return 0;
}
// Compile with: gcc -o sizeof sizeof.c
// Run with: ./sizeof

// Note: The output may vary based on the system architecture and compiler used.
// The sizes of types can differ between different systems and compilers.
// The values of the limits may also vary based on the system architecture and compiler used.
// The output is based on a 64-bit architecture with GCC compiler.
