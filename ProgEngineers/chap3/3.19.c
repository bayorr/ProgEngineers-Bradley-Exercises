#include <stdio.h>
#include <stdlib.h>

int copyString(char * in, char * out) {
	if(!in || !out) return -1;
	int i = 0;
	while(in[i] != '\0') {
		out[i] = in[i];
		out = out + 1;
		in = in + 1;
	}
	out = '\0';
	return 0;
}


int main() {
	char out[100];
	char in[] = "This is a string";

	copyString(in, out);
	printf("%s\n", out);
	return 0;
}