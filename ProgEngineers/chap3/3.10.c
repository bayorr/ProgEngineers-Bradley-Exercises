#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int numOccur(int arr[], int num, int val, int * occ) {
    if( !arr || !num || !val || !occ)
        return -1;
    // working local variables
    int i;
    int c = 0;    
    for(i = 0; i < num; i++) {
        if(arr[i] == val) {
            c++;
            *occ = c;
        }
    }    

    return 0;
}

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

    numOccur(a, n, v, &occur); //if you take out the &, you get a segmentation fault
    printf("%d\n", occur);

    intMean(a, n, &mean);
    printf("%d\n", mean);
}
