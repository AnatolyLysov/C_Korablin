#include <stdio.h>
int main(int argc, char *argv[]) {
	int array[100];
	int *ptr = array;
	int i;
	for (i = 0; i < 100; i++) {
		ptr[i] = i;
	}
	for (i = 0; i < 100; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
	
	return 0;
}