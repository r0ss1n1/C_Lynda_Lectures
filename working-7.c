#include <stdio.h>
#include "func.h"

extern void func(void);
extern int var;

int main(void) {

	for(int i = 0; i < 10; ++i){
		int num = 1;
		printf("num, auto integer, equals %d\n", ++num);

	}

	for(int i = 0; i < 10; ++i){
		static int num = 1;
		printf("num, static integer, equals %d\n", ++num);
	}

	for(int i = 0; i < 10; ++i){
		register int num = 1;
		printf("num, register integer, equals %d\n", ++num);
	}

	for(int i = 0; i < 10; ++i){
		printf("var, extern integer equals %d\n", var);
		printf("Calling func()\n");
		func();
		// printf("Return value of func() is void, what does it return?\n%d\n", func());

	}
	return 0;
}