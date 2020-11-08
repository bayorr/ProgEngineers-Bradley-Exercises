#include <stdlib.h>
#include <stdio.h>

int intMean(int * arr, int len, int * mn) {
    if(len <= 0 || !arr)
        return -1;
    int i, s = 0;
    for(i = 0; i < len; i++) {
        s += arr[i];
    }
    *mn = s/len;
}

//unit test
int main() {
    int a[] = {1, 3, 2, 1, 1, 5, 4};
    int n = 7;
    int v = 1;
    int occur;
    int mean;

    intMean(a, n, &mean);
    printf("%d\n", mean);
}
