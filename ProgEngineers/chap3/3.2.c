#include <stdio.h>
#define N 100

int main() {
	int fib[N];

    //fib[0] = 1;
    //fib[1] = 1;

	int * x;

    *x = 1;
    *(x + 1) = 1;

    *(x + 2) = *x + *(x + 1);
    
    int i = 2;
	while(i < N) {
		fib[i] = *(x - 2) + *(x - 1);
		i++;
    }

	return 0;
}
