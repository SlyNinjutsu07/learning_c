#include <stdio.h>
#include "methods.h"

int main(void){

	int a[5] = {0,1,2,3,4};
	print_arr(a,5);

	int val = 0;
	addTo(&val, 2);
	printf("%d\n",val);

	int *val2 = ret_ptr_in_arr(a, 3);
	printf("%d\n", *val2);

	return 0;
}
