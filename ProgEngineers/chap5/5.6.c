/* Select exercises from A. Bradley's 'Programming for Engineers', from Springer press */
/* Exercise 5.1 - Calls whisper() or shout() from two command line arguments, -w and -s. Then reads arbitray list of strings from stdin to pass into function calls - */

#include <stdio.h>
#include <unistd.h>

void printUsage() {
    printf("Usage: command [-s][-w]<string>\n");
    printf("\tExample: cmd -sSoMe StRiNg\n");
}

int whisper(char * msgIn, char * msgOut) {
	int i = 0;
	char tmp;
   

	if(msgIn == NULL || msgOut == NULL) return -1;

	//for(int i = 0; msgIn[i] != '\0'; i++) {
	while(msgIn[i] != '\0') {
		tmp = msgIn[i];
		printf("0x%2x ", msgIn[i]);
		if(tmp <= 'Z' && tmp >= 'A') {
			tmp += 'a' - 'A'; //tmp + (97 - 65)
		}
		
		msgOut[i] = tmp;
		i++;
	}
	msgOut[i] = '\0';
	return 0;
}

int shoutSafe() {
    char tmp;
    printf("Use ctr + D to exit!\n");
    while(scanf("%c", &tmp) != EOF) {
        if('a' <= tmp && tmp <= 'z')
            tmp += 'A' - 'a';
        printf("%c", tmp);
        }
    printf("\n");
    return 0;
}

int whisperSafe() {
    char tmp;
    printf("Use ctr + D to exit!\n");
    while(scanf("%c", &tmp) != EOF) {
        if(tmp <= 'Z' && tmp >= 'A')
            tmp += 'a' - 'A';
        printf("%c", tmp);
        }
    printf("\n");
    return 0;
}

int shout(char * msgIn, char * msgOut) {
    int i = 0;
    char tmp;
   

    if(msgIn == NULL || msgOut == NULL) return -1;
    while(msgIn[i] != '\0') {
        tmp = msgIn[i];
        printf("0x%2x ", msgIn[i]);
        if('a' <= tmp && tmp <= 'z') {
            tmp += 'A' - 'a';
        }
        msgOut[i] = tmp;
        i++;
    }
    msgOut[i] = '\0';
    return 0;
}

int main(int argc, char ** argv) {
    int in; //for opt
    char msgO[100];
    //char c;
    char *wValue = NULL;
    char *sValue = NULL;
    //char *SValue = NULL;

    if(argc < 2) {
        printUsage();
        return -1;
    }

    /*char in;
    if(sscanf(argv[1], "%c", &in) != 1) {
        printUsage();
        return -1;
    }*/

//http://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html#Example-of-Getopt
/* use char: to add option. "ws:" makes '-s' require an argument */
    while((in = getopt(argc, argv, "s:w:SW")) != -1) {
        //char in = scanf("%d"argv[1]); //could be argv+1
        switch(in) {
            case 'w':
                wValue = optarg;
                whisper(wValue, msgO);
            //   printf("This works for w\n");
                printf("\t%s\n", msgO);
                return 0;
            case 's':
                sValue = optarg;
                shout(sValue, msgO);
            //    printf("This works for s\n");
                printf("\t%s\n", msgO);
                return 0;
            case 'S':
                shoutSafe();
                return 0;
            case 'W':
                whisperSafe();
                return 0;
        }
    }
    return 0;
}
