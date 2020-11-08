#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void swap(int * x, int * y, int * z) {
	int g = *x;
	*x = *y;
	*y = *z;
	*z = g;
}


int main() {
	int a = 1, b = 2, c = 3;
	swap(&a, &b, &c);
	//assert (a == 2);
	if (a == 2 && b == 3)
		printf("Success\n");
	//assert (b == 3);
	return(0);
}
