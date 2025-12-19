#include <stdio.h>

int main(void){

	//No warnings for this
	int arr[5] = {0};
	for(int i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	printf("\n");

	//Multi-dimensional arrays
	int mArr[2][2] = {
		{1,2},
		{3,4}
	};//Row-major order : First index = # rows, second index = # cols 
	
	/* Cannot re-assign same array
	 * But you can do this method if its a new array
	 * '[][] = #' technique has to be used for each index though
	mArr = {
		[0][0] = 1, [0][1] = 2,
		[1][0] = 3, [1][1] = 4
	};
	*/
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("{%d, %d} = %d\n", i, j, mArr[i][j]);
		}
	}

	//Pointer to an array -> Typically pointer to first element
	int arr2[COUNT] = {0,1,2};
	int *p = &arr2[0]; //Pointer to first elem
					  //Also the same as -> int *p = arr;
	print_arr(p);
	

	return 0;
}
