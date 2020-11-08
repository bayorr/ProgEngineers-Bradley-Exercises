/* Exercise 2.5 - Compute minimum and maximum of two integers using the following protoype:
// int minmax(int a, int b, int * min, int * max)
*/

#include <stdio.h>

int minmax(int a, int b, int * min, int * max) {
	if (a > b) {
		*min = b;
		*max = a;
		printf("Max: %d\tMin: %d\n", *max, *min);
	}
	else if (b > a) {
		*min = a;
		*max = b;
		printf("Max: %d\tMin: %d\n", *max, *min);
	}
}

int main() {
	int n;
	int m;
	minmax(10, 15, &n, &m);
}
