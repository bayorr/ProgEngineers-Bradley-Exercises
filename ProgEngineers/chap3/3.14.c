#include <stdio.h>
#include <stdlib.h>
#define ZIP_ARR_SIZE 6

// Function takes two arrays and zips them into one, alternating their values
int zip(int * a, int * b, int * c, int n) {
	if(!a || !b || !c || !n) return -1;
	for(int i = 0; i < n; i++) {
		c[2*i] = a[i]; // Algorithm to alternate is 2*i = array_a then 2*i+1 = array_b
		c[2*i+1] = b[i];
	}
}

// Function unzips an array of 2n into two equal lengths on n, alternating their values
int unzip(int * a, int * b, int * c, int n) {
	if(!a || !b || !c || !n) return -1;

	for(int i = 0; i < n; i++) {
		b[i] = a[i];
		a++;
		c[i] = a[i];	
        //printf("array_b: %d\n", b[i]); //used these for debugging
		//printf("array_c: %d\n", c[i]);
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int zarrA[] = {1, 2, 3};
	int zarrB[] = {4, 5, 6};
	int zarrC[ZIP_ARR_SIZE];

	int arr_b[3];
	int arr_c[3];

	zip(zarrA, zarrB, zarrC, 3);
	for (int i = 0; i < ZIP_ARR_SIZE; i++) {
		printf("%d, ", zarrC[i]);
	}
	printf("\n\n");
	
	unzip(arr, arr_b, arr_c, 3);
	for (int i = 0; i < 3; i++) {
		printf("arr_b is: %d\n", arr_b[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("arr_c is: %d\n", arr_c[i]);
	}
	return 0;
}
