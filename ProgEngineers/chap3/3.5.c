#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 3 //Define the max size

//Compute the sum of two n dimensional vectors

vectorSum(int x[], int y[], int n, int sum[]) {
    int i;
    int sumV[MAX_SIZE];
    for(i=0; i < MAX_SIZE; i++) {
        printf("Vector 1: %d\n", x[i]);
        printf("Vector 2: %d\n", y[i]);
        printf("Operation: %d + %d = %d\n", x[i], y[i], x[i]+y[i]);        
        sumV[i] = x[i] + y[i];
    }
    return *sumV;
}

int main() {
    int a[] = {2, 4, 6}; //For testing, make a couple vectors
    int b[] = {3, 6, 9};
    int i, * sumd; //Counter and pointer to store returned array values
    //int sumd[MAX_SIZE];

    vectorSum(a, b, MAX_SIZE, sumd);
    return 0;
}
