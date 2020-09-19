#include <stdio.h>

void pointer(void);
void pointer_to_array(void);

int main(void){
	pointer();
	pointer_to_array();
	return 0;
}

void pointer(void){

	int x = 7;
	int * pointer = &x;

	printf("The address of x is %d\n", pointer);
	printf("The value of x is %d\n", x);

}

void pointer_to_array(void){

	int integer_array[5];

	integer_array[0] = 9;

	printf("The first value in the integer array is currently %d\n", integer_array[0]);
	int * pointer = integer_array;
	* pointer = 6;
	++pointer;
	* pointer = 6;
	++pointer;
	* pointer = 6;
	++pointer;
	* pointer = 9;
	++pointer;
	* pointer = 9;
	++pointer;
	* pointer = 9;

	for(int i = 0; i <= 5; ++i){
		printf("%d\n", integer_array[i]);
	}	
}