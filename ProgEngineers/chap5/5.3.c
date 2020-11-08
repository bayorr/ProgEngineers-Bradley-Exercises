/* Program takes structued input from file or stdin. Finds the minimum and range of integers fed into program */

#include <stdio.h>
#include <stdlib.h>

//Usage
void printUsage() {
    printf("Usage: min < [data file]\n\tWhere data file is a nonempty list of integers\n");
}

int main() {

    int min, max, range;

    if(scanf("%d", &min) != 1) { //scanf returns 1 upon success. 
        printUsage();
        return -1;
    }

    //only works with clean data
    int val, ret;
    while(ret != EOF) { //use EOF since the min might be 0
        ret = scanf("%d", &val);
        if(ret == 0) {
            printUsage();
            return -1;
        }

        if(val < min)
            min = val;
        else if(val > min)
            max = val;
    }

    range = max - min;
    printf("Min: %d\n", min);
    printf("Range: %d\n", range);

    return 0;
}
