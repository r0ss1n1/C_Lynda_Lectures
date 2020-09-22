#include <stdio.h>

int main(void){
	char s[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
	char a[] = "This is a string";
	printf("Characters in the array are %s\n", s);
	for(int i = 0; a[i] != 0; ++i){
		printf("The char iterates over the integer iterator i, a[i] is %c\n", a[i]);
	}
	for(char * cp = s; *cp; ++cp){
		printf("Incrementing tbe character pointer array in turn, s[] or ++cp in turn is %c\n", *cp);
	}
	return 0;
}