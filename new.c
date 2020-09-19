#include <stdio.h>

char * hello(char * str) {
	char * new = str;
	return new;
}

int main(void){
	printf("%s\n", hello("hello world"));
}