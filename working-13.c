#include <stdio.h>
#define ONE (1)
#define TWO (2)
#define THREE (3)
#define FOUR (4)
#define FIVE (5)
#define SIX (6)

int main(void) {
	int x = 6;
	switch(x) {
	case ONE:
		puts("The x integer variable is one");
		break;
	case TWO:
		puts("The x integer variable is two");
		break;
	case THREE:
		puts("The x integer variable is three");
		break;
	case FOUR:
		puts("The x integer variable is four");
		break;
	case FIVE:
		puts("The x integer variable is five");
		break;
	case SIX:
		puts("The x integer variable is six");
		break;
	default:
		puts("The x integer variable is some other number");
		break;
	}
	return 0;
}