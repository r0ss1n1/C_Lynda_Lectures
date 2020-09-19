#include <stdio.h>

void func(void);

int main(void){

	int i = 666;
	for(int i = 0; i <= 10; ++i){
		printf("i is %d\n", i);
		func();
	}
	return 0;
}

void func(void){

	printf("This is the 'func' function\n");
}