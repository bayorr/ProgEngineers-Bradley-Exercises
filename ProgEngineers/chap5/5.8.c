#include <stdio.h>
#include <stdlib.h>
/* Reads and arbitray list of strings from stdin, records number of vowels, and prints number of occurances to stdout */

//counts vowels in string from stdin. Returns an int
int countVowels() {
    int count = 0;
    char tmp;
    printf("Use ctr + D to exit!\n");
    while(scanf("%c", &tmp) != EOF) {
        if(tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u' || tmp == 'A' || tmp == 'E' || tmp == 'I' || tmp == 'O' || tmp == 'U') {
            count++;
            whichVowel(tmp);
        }
    }
    return count;
    //printf("%d\n", count);
}

/*
printDistribution() {

}
*/

int whichVowel(char * c) {
    printf("%c", c);
    return 0;
}

int main(void) {
    printf("%d\n", countVowels());
    return 0;
}
