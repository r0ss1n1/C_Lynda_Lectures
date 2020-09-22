#include <stdio.h>

int main(void){
	char s[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
	char a[] = "This is a string";
	printf("Character array s[] is %s\n", s);
	printf("Character array a[] is %s\n", a);

	for(int i = 0; s[i] != '\0'; ++i){
		printf("s[i] is %c\n", s[i]);
	}

	for(char * p = a; * p; ++p){
		printf("char * p is %c\n", *p);
	}
	return 0;
}