#include <stdlib.h>
#include <stdio.h>

/* Sums the elements of an integer array */

int sumArray(int * a, int len, int * sum) {
    int i;
    for (i = 0; i < len; i++) {
        *sum += a[i];
    }
    return 0;
}

int main() {
    int i, sum;
    int array[] = {10, 20, 30, 40, 10};

    // calulate #of elements in the array. This does not show if they have been initialized
    int arraySize = sizeof(array) / sizeof(array[0]);
    printf("Elements in array: %d\n", arraySize);

    // gets elements of an array and returns the sum
    sumArray(array, arraySize, &sum);
    printf("Sum: %d\n", sum);
}
