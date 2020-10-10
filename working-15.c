#include <stdio.h>

int main(void){
	int x = 10;
	while(x > 0){
		printf("x is %d\n", x);
		--x;
	}

	x = 7;

	do {
		printf("x is %d\n", x);
		--x;
	} while(x);

	int y = 10;

	while(--y) {
		printf("y is %d\n", y);
		if(y == 5) break;
	}
	int z = 10;
	do {
		printf("z is %d\n", z);
		--z;
		if(z == 3) break;
	} while(z > 0);
	return 0;
}