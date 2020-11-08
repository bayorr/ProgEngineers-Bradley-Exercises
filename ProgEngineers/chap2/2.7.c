/* A demonstration of the series 1 * ... * n using recursion in C */

#include <stdio.h>
#include <stdlib.h>

// Helper Function computes 1 * ... * n for positive n.
int _prod(int n) {
	int prod = 0;
	if (n == 1) return 1; //Because 1x1=1
	return _prod(n - 1) * n; //Count down 1 from the stack, then multiply  
}

// Calls helper function
int prod(int n, int * s) {
	if (n <= 0 || n == NULL)
		return -1;

	*s = _prod(n);
	return 0;
}

int main(void) {
	int b = 5;
	int s;

	prod(b, &s);
	printf("%d\n", s);
	return 0;
}