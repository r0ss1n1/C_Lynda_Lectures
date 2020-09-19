void func(void);
static int var = 10;

void func(void){
	printf("printf called from inside the func.h header in the func() function\n");
	printf("var from inside func.h is %d\n", ++var);
}