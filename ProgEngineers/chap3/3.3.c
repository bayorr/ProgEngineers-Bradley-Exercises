#include <stdlib.h>
#include <assert.h>

#define N 10

int copyArray(int * a, int * cp, int len) {
    int i;
    for (i = 0; i < len; i++) {
        cp[i] = a[i];
    }
    return 0;
}

int main() {
    int array1[N]; 
    int array2[N];    
    int i;
    //put something in the array
    for (i = 0; i < N; i++) {
        array1[i] = i * 3;    
    }
   //copy the array
    copyArray(array1, array2, N);

    // make sure the copy happened
    for (i = 0; i < N; i++) {
        assert (array1[i] == array2[i]);
    }
    return 0;


}
