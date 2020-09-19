#include <stdio.h>

int main(int argc, char ** argv){
	/* C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvars32.bat */
	/* C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.25.28610\bin\Hostx64\x86\cl.exe */
	for(int i = 1; i <= 5; ++i){
		int x =	printf("Hello, World!\n") * 5;
		printf("printf returned %d\n", x);
	}
	for(int i = 1; i <= 5; ++i) printf("i equals %d\n", i);
	return 0;
}