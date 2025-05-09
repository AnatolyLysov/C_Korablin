#include <stdio.h>


int main(int argc, char *argv[]) {
	unsigned char ch;
	ch = 'а';
	printf("Size of ch: %zu bytes\n", sizeof(ch));
	printf("Character representation of ch: %c\n", ch);
	printf("Unsigned integer representation of ch: %u\n", ch);
	printf("Value of ch: %u\n", ch);
	return 0;
}
