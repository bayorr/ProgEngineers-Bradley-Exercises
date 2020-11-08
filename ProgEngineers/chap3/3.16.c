#include <stdio.h>
#include <stdlib.h>

/* Another version of 3.15 that does not use a loop counter, but uses pointer arithmetic instead */

int whisper(char * msgIn, char * msgOut) {
	//int i = 0;
	//char tmp;

	if(msgIn == NULL || msgOut == NULL) return -1;

	//for(int i = 0; msgIn[i] != '\0'; i++) {
	while(*msgIn != '\0') {
		//tmp = msgIn[i];
		//printf("0x%2x ", msgIn[i]);
		printf("0x%2x ", *msgIn);
		if(*msgIn <= 'Z' && *msgIn >= 'A') {
			//tmp += 'a' - 'A'; //tmp + (97 - 65)
			*msgIn += 'a' - 'A';
		}
		
		//msgOut[i] = tmp;
		*msgOut++ = *msgIn++;
		//i++;
	}
	//msgOut[i] = '\0';
	*msgOut++ = '\0';
	return 0;
}


int main() {
	char ourMessage[] = "tHiS iS a TeSt";
	int arrSize = sizeof(ourMessage) / sizeof(ourMessage[0]);
	char whispered[arrSize];
	printf("Array size: %d\n", arrSize); //for debugging
	
	whisper(ourMessage, whispered);
	printf("\n%s\n", whispered);
	for (int i = 0; i < sizeof whispered; ++i)
	{
		printf("0x%2x ", whispered[i]);
	}
	putchar('\n');
	return 0;
}