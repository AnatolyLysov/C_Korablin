/*The difference between signed char and unsigned char lies in how they represent and interpret the range of values stored in a single byte (8 bits):

1. Signed Char
A signed char can represent both positive and negative values.
The most significant bit (MSB) is used as the sign bit:
0 indicates a positive number.
1 indicates a negative number (in two's complement representation).
Range: -128 to 127 (for an 8-bit system).
Example:*/

signed char ch = -10; // Valid
signed char ch = 130; // Undefined behavior (out of range)

/*2. Unsigned Char
An unsigned char can only represent non-negative values.
All 8 bits are used to store the magnitude of the number.
Range: 0 to 255 (for an 8-bit system).
Example:*/

unsigned char ch = 250; // Valid
unsigned char ch = -10; // Undefined behavior (out of range)

/*Key Differences in Behavior
Value Interpretation:

A signed char interprets the MSB as the sign, so 0xFF (all bits set) is interpreted as -1.
An unsigned char interprets all bits as part of the magnitude, so 0xFF is interpreted as 255.
Casting:

When casting between signed char and unsigned char, the value may change due to reinterpretation of the bits.
Example Code*/

#include <stdio.h>

int main() {
    signed char s_ch = -1; // -1 in signed char
    unsigned char u_ch = (unsigned char)s_ch; // Cast to unsigned char

    printf("Signed char: %d\n", s_ch); // Prints: -1
    printf("Unsigned char: %u\n", u_ch); // Prints: 255 (reinterpretation of bits)

    return 0;
}

/*When to Use
Use signed char when you need to store small negative and positive values.
Use unsigned char when you need to store only non-negative values or when working 
with raw binary data (e.g., file I/O, image processing).*/

/*
In C, the bit representation of a signed char depends on the system's representation of signed integers, which is typically two's complement. Let's break it down:

Key Points:
A signed char typically uses 8 bits (1 byte).
In two's complement:
The most significant bit (MSB) is the sign bit:
0 for positive numbers.
1 for negative numbers.
Negative numbers are represented by inverting all the bits of the absolute value and adding 1.
For s_ch = -1:
The absolute value of 1 in binary (8 bits) is:

00000001

Invert all bits:

11111110

Add 1 to the inverted bits:

11111110 + 1 = 11111111

Thus, the bit representation of s_ch = -1 is:

11111111

Verification:

If you interpret 11111111 as a signed 8-bit integer:
The MSB is 1, so it's negative.
To find the value, invert the bits and add 1:

Invert: 00000000
Add 1: 00000001

Result: -1.
This confirms that 11111111 correctly represents -1 in two's complement.
*/