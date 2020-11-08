#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Replaces each ! with .. Return values indicate erroneous input or success */

int toneDown(char * in, char * out) {
	if(!in || !out) return -1;

	while(*in) {   //while(in[i] == 1)
		*out = *in; 
		if(*out == '!') *out = '.';
			in++;
			out++;
		}
		// Add a string terminator. Not doing this will be disastrous.
		*out = '\0';
	return 0;
}

//Reverse a string
int reverse(char * in, char * out) {
	if(!in || !out) return -1;

	// Find end of string
	int i;
	for(i = 0; in[i] != '\0'; i++); 		
	assert(in[i] == '\0');

	//read in backwards, write out forwards
	// i-- because we don't want NULL, do as long as i >= 0, and count down. Putt that into * out, and then move the memory cell of * out fowards.
	for(i--; i >= 0; i--) {
		assert(in[i] != '\0');
		*out = in[i];
		out++;
	}
	*out = '\0';
	return 0;
}

int removeVowels(char *in, char * out) {
	if(!in || !out) return -1;
	//static const char vowels[] = "aeiou";
/*
	for(int i = 0; in[i] != '\0'; i++) {
		printf("%c ", in[i]);
		tmp = in[i];
		if(tmp == 'a' || tmp == 'e' || tmp == 'o' || tmp == 'u')
			
	}
*/	
	
	while(*in) {
		if(*in == 'i' || *in == 'e' || *in == 'a' || *in == 'o' || *in == 'u') {
			out++;
			//out[i] = in[i]--;
			printf("%s\n", in);
		}
		*out++ = *in++;
		//*out = *in;
		//printf("%s\n", in);
	}


	*out = '\n';
	return 0;
}

int main() {
	char * msgIn = "This is crazy!!! Right?!?!";
	char * msgin2 = "blieak blouse";
	char msgOut[100];
	char msgOut2[100];

	int err = toneDown(msgIn, msgOut);
	assert(!err);
	printf("%s\n", msgIn);
	printf("\t%s\n", msgOut);
	reverse(msgIn, msgOut);
	printf("\t%s\n", msgOut);
	removeVowels(msgin2, msgOut2);
	printf("%s\n", msgOut2);
	return 0;
}
