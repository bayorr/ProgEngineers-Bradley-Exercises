/* Exercise 3.8 - Function finds the lowest and highest value of an array */

#include <stdlib.h>
#include <stdio.h>

int minmax(int * a, int n, int * min, int * max) {
    int i;
    int minimum = a[0];
    int maximum = a[0];
    
    for(i = 1; i < n; i++) {
        if(a[i] < minimum)
            minimum = a[i];
        else if(a[i] > maximum)
            maximum = a[i];
        *min = minimum; //point to min value
        *max = maximum; //point to max value
    }
    return 0;
}

//unit test
int main() {
    int minimum, maximum;
    int arr[] = {1, 2, 115, 34, 21, 7, 24, 6, 54, 3, 9, 87, 101, 4, 17}; //our array

    int arrSize = sizeof(arr) / sizeof(arr[0]); //calculate number of elements in array to setup for loop

    minmax(arr, arrSize, &minimum, &maximum);
    printf("minimum is %d\nmaximum is %d\n", minimum, maximum);
}
