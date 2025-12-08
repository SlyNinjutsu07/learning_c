#include <stdio.h>

void add_one(int *n){
	*n += 1;
}

int main(void){

	int i = 10;
	int *p;
	p = &i;
	
	printf("Before: %d\n", *p);
	add_one(p);
	printf("After: %d\n", *p);

	//int *n = NULL;
	//*n = 12;

	return 0;
}
