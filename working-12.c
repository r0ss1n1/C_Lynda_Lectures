#include <stdio.h>

int main(void){
	int a = 7;
	int b = 10;
	int c = (a < b) ? 1 : 0;
	if(c) {
		printf("a is less than b");
	} else {
		printf("a is not less than b");
	}
	return 0;
}