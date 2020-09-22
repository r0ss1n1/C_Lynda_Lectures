#include <stdio.h>

int main(void){
	/* C, unlike C++ does not have the BOOL data type, where int x = 0 int y = 1 are used for True and False etc */
	int x = 0;
	int y = 1;

	if(x) {
		printf("x is true\n");
	} else if(y){
		printf("y is true\n");
	} else {
		printf("neither are true\n");
	}
	x = 1;
	y = 0;

	if(x) {
		printf("x is true\n");
	} else if(y){
		printf("y is true\n");
	} else {
		printf("neither are true\n");
	}
	x = 0;
	y = 0;

	if(x) {
		printf("x is true\n");
	} else if(y){
		printf("y is true\n");
	} else {
		printf("neither are true\n");
	}
	return 0;
}