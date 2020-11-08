/*  */

#include <stdio.h>

// a)

int seqA(int n) {
	int i, a = 1;
	for(i = 1; i < n; i++)
		a = 3*a + 2;
	return a;
}

// b)
int seqB(int n) {
	int i, a = 59;
	for(i = 1; i <= n; i++)
		a = a/2 + 1;
	return a;
}



// C)
int seqC(int n) {
	int i, a = 1, b = 1;
	for(i = 2; i <= n; i++) {
		int t = b;
		b = a + b;
		a = t;
	}
	return b;
}

// d)
int seqD(int n) {
	int i, a = 0, b = 2;
	for(i = 2; i <= n; i++) {
		int t = b;
		b = 2*a - b;
		a = t;
	}
	return b;
}


// e)
int seqE(int n) {
	int i, a = 7, b = 11;
	for(i = 2; i <= n; i++) {
		int t = b;
		b = -1*a + b;
		a = t;
	}
	return b;
}

// f)
int seqF(int n) {
	int i, a = 1, b = 1, c = 1;
	for(i = 3; i <= n; i++) {
		int t = c;
		c = a + c;
		a = t;
		b = c;
	}
	return c;
}

int main(void) {
	printf("%d\n", seqA(6));
	printf("%d\n", seqB(6));
	printf("%d\n", seqC(6));
	printf("%d\n", seqD(6));
	printf("%d\n", seqE(6));
	printf("%d\n", seqF(6));
	return 0;
}