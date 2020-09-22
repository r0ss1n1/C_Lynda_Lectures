#include <stdio.h>
/* Shout out to Microsoft and the authors of 'Windows System Programming
and 'Windows via C++' & the Microsoft Dev Reference authors (Technet authors) */

/* Learning C from Kernighan's manual, Pohl et al. 'A Book on C', and
an Indian fellows' 'Let Us C', before transferring to Windows (Win32 x64)
API, particularly sockets, protocols, file formats & encryption */

/* Then onto C++ from Savitch's Absolute C++ which was used as a textbook
at RMIT. Dropped out of SCU BSc Math to study in my own time. Schizophrenia
is a burden */

/* Scrap paper at Github.com/r0ss1n1 authored by Charles Truscott */


int main(void){
	int x = 5;

	int y = 10;

	do {
		printf("x is %x\n", x);
		--x;
	} while(x != 0);

	while(x < y){
		printf("y is %x\n", y);
		--y;
	}
	x = 5;
	y = 10;
	int z = (x <= y) ? 1 : 0;
	while(z){
		printf("x is %x\n", x);
		if(x == 7){
			printf("x is 7\n");
			break;
		}
		++x;
	}
	return 0;
}