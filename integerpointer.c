#include <stdio.h>
/* Charles Thomas Wallace Truscott, integer array and integer pointer practice
Github.com/r0ss1n1 */

int main(void) {
	int array[10];
	int * ip = array;

	for(int i = 0; i <= 11; ++i){
		* ip = i;
		++ip;
	}
	for(int i = 0; i <= 11; ++i) printf("The element in the integer array is: %d\n", array[i]);
}