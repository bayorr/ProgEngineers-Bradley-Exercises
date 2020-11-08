#include <stdio.h>

int sum(int a) {
	//does recursion
	int b = 0;
	if (a == 1) return a;
	b = sum(a - 1);
	return b + a;
}

int main(void) {
	int a = 3;
	printf("%d\n", sum(a));
	return 0;
}