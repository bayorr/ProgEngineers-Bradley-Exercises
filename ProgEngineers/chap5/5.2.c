/*Takes two args, m and n, such that m < n, and prints the sum of (m + 1) + ... + n
*/ 
#include <stdio.h>

int printUsage() {
    printf("Takes two positive integers, m and n, such that m < n and calculates (m + 1) + ... + n\n");
}

int main(int argc, char ** argv) {
    if(argc != 3) {
        printUsage();
        return -1;
    }

    int n, m;
//sscanf() converts string numeral from arguments to real integers
    if(sscanf(argv[1], "%d", &m) != 1) {
        printUsage();
        return -1; 
    }
    
    if(sscanf(argv[2], "%d", &n) != 1) {
        printUsage();
        return -1; 
    }

    if(m > n) {
        printUsage();
        return -1;
    }

    if(m < 0 || n < 0) {
        printUsage();
        return -1;
    }

    /*
    Using a for loop    
    int t = 0;
    for(int i = 0; i < n; i++) {
        t = t + m + 1;
    }
    */
    int z = n * (m + 1);

    //printf("%d\n", t);
    printf("%d\n", z);

    return 0;
}
