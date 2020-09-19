#include <stdio.h>

extern int var;
extern void func();

int number = 7;

int main(void){
	if(1){
	/* Scope / storage class */
		int number = 8;
	/* auto, static, extern, register */
	}
	printf("The number is %d\n", number);

	for(int i = 1; i <= 5; ++i){
		static number = 7;
		printf("The number is %d\n", ++number);
		printf("The extern var is %d\n", var);
		func();
	}

	for(int i = 1; i <= 5; ++i){
		register int number = 7;
		printf("The number is %d\n", ++number);
	}
	return 0;
}