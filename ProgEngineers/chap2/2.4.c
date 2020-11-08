#include <stdio.h>

int absoluteVal(int a) {
	//int x;
	if (a < 0) return -a;
	return a;
}


int main() {
	int v = -5;
	printf("%d\n", absoluteVal(v));
	return 0;
}
