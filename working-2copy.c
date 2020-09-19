#include <stdio.h>

int main(void){

	for(int i = 1; i <= 5; ++i) printf("i equals %d\n", i);
	for(int i = 1; i <= 5; ++i){
		int x = printf("Hello, World!\n") * 5;
		printf("The return value stored in x is %d\n", i);
	}
	return 0;
}