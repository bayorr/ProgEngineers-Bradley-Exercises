#include <stdio.h>

//finds power (int n) of base (int a).
int _power(int a, int n) {
	int b = a;
	int i = 1;
	while(i < n) {
		b *= a;
		i++;
	}
	return b;
}

int power(int a, int n, int * p) {
	if (n < 0) return -1;
	*p = _power(a, n);
}

int main(void) {
	int a = 3, n = 5, p;

	power(a, n, &p);
	printf("%d^%d = %d\n", a, n, p);
	return 0;
}