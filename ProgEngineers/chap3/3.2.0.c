#include <stdio.h>
#define N 100

int main() {
    int fib[N];
    int i;

    fib[0] = 1;
    fib[1] = 1;

    for(i = 2; i < N; i++)
        fib[i] = fib[i-2] + fib[i-1];
    
return 0;
    
}
