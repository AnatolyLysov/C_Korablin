/*size_t is an unsigned integer type in C and C++ that is used to represent the size of objects in memory. 
It is defined in the <stddef.h> or <stdio.h> header file in C. 
The exact size of size_t depends on the platform and compiler, but it is guaranteed to be 
large enough to represent the size of the largest object that can be allocated in memory on that platform.

Key Points About size_t:
Unsigned Type: size_t is always unsigned, meaning it cannot represent negative values. 
This makes it suitable for representing sizes and counts, which are inherently non-negative.

Platform-Dependent Size: On a 32-bit system, size_t is typically 4 bytes (32 bits),
 while on a 64-bit system, it is typically 8 bytes (64 bits). This ensures it can represent 
 the size of any object in memory on the given platform.

Common Use Cases:

Used by functions like sizeof to return the size of an object in bytes.
Used in standard library functions like malloc, strlen, and array indexing to handle sizes and counts.
Why Use size_t Instead of int?:

Since size_t is unsigned, it avoids potential bugs related to negative values when dealing with sizes or counts.
It is portable and adapts to the platform's memory model, ensuring compatibility across different systems.
Example in Your Code:
In your code, the sizeof(ch) function returns the size of the variable ch in bytes. The return type
 of sizeof is size_t, which is why %zu is used in the printf statement to correctly format the output.

Here:

sizeof(ch) evaluates to the size of the unsigned char type, which is typically 1 byte on most platforms.
%zu is the format specifier for size_t in printf.
Why %zu?
%zu is specifically designed for size_t to ensure proper formatting regardless of the platform's 
size_t size. Using %u or %d could lead to undefined behavior if the size of size_t differs from int.
In summary, size_t is a robust and portable type for representing sizes and counts, and it is widely 
used in C programming for memory-related operations.*/

// The code snippet you provided demonstrates the use of size_t in C programming.
// It includes the <stdio.h> header for input/output functions and defines a main function 
//that performs the following tasks:
// 1. Declares an unsigned char variable ch and assigns it the character 'а'.
// 2. Prints the size of ch in bytes using sizeof(ch) and the %zu format specifier.
// 3. Prints the character representation of ch using %c.
// 4. Prints the unsigned integer representation of ch using %u.
// 5. Prints the value of ch using %u.
// 6. Returns 0 to indicate successful execution of the program.
//
// The output of the program will depend on the platform and compiler used, but it will 
//typically show that the size of ch is 1 byte, and the character representation of ch is 'а'.

#include <stdio.h>
#include <stddef.h>

int main(int argc, char *argv[]) {
	char ch = 'a';
	printf("Size of ch: %zu bytes\n", sizeof(ch));
    printf("Character representation of ch: %c\n", ch);
	printf("Unsigned integer representation of ch: %u\n", (unsigned char)ch);
	printf("Value of ch: %u\n", (unsigned char)ch);
	
	signed char ch_signed = 'a';
	printf("Size of ch_signed: %zu bytes\n", sizeof(ch_signed));
	printf("Character representation of ch_signed: %c\n", ch_signed);
	
	printf("Unsigned integer representation of ch_signed: %u\n", (unsigned char)ch_signed);
	printf("Value of ch_signed: %u\n", (unsigned char)ch_signed);
	
	return 0;
}