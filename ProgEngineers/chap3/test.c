#include <stdlib.h>

int main() {
	int a = 525; 	//sets int a equal to 5
	int * b; 	//define a point, b

	b = &a; 	//make b equal to the address of a
	*b = 10;	//set whatever b points to (address of a), to 10
}
