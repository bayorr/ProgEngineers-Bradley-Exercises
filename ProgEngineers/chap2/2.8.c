/* A demonstration of the series 1 x ... x n using recursion in C */

#include <stdio.h>
#include <stdlib.h>

// Computers series
int _sum(int a) {
	if (a == 1) return 1;
	// Else perform recursion on int a and return that value + a.
	return _sum(a - 1) + a;
}

// Function calls verifies input for computational function _sum 
int sum(int a, int * s) {
	if (a <= 0 || a == NULL)
		return -1;

	*s = _sum(a);
	return 0;
}

int main() {
	int s;

	sum(3, &s);
	printf("%d\n", s);
	return 0;
}