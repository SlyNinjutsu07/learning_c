#include <stdio.h>
#include <stdbool.h>

#include "methods.h"

int main(void){

	/*
	int a[5] = {0,1,2,3,4};
	print_arr(a,5);

	int val = 0;
	addTo(&val, 2);
	printf("%d\n",val);

	int *val2 = ret_ptr_in_arr(a, 3, 5);
	printf("%d\n", *val2);

	arr_times_2(a, 5);
	print_arr(a, 5);
	*/

	int num = 10;
	recurse_to_zero(&num);

	int x = 17, y = 19;
	printf("Is 17 legal?: %d\n", is_age_valid(x));
	printf("Is 19 legal?: %d\n", y >= 18 ? true : false);











	return 0;
}
