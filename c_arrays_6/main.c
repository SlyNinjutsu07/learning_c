#include <stdio.h>
#define COUNT 5//Initializes a constant "COUNT" to 5

int main(void){
	
	int i =0;
	//Sugar candy for pointers n sh
	int arr[5];//If given no values, it points
			   //to random numbers in memory

	int r[4];
	r[0] = 1; r[1] = 2; r[2] = 3; r[3] = 4;
	
	for(int i = 0; i < 4; i++)
		printf("%d : %d\n", i, r[i]);

	//Getting size = sizeof(arr) / sizeof(arrType)
	printf("%zu / %zu = %zu\n", sizeof(r), sizeof(int), sizeof(r) / sizeof(int));
	printf("Int Arr 5 : %zu\n", sizeof arr);//Each added elem adds memory
								//5 = 20 bytes
	printf("Double Arr w/ 48 : %zu\n", sizeof( double [48] ));//A double is 8 bytes
	
	//Array Initializers 6.3
	int arr2[4] = {2,45,235,10};
	int empt_arr[5] = {0};//Initialize all values to 0
						  //If not initialized -> line 6
	
	//Every element not initialized is put as 0
	//[5] = 55 -> slot 55 into index 5 (skips 4 so [4] = 0)
	int arr3[10] = {0,11,12, [5] = 55, 2, 4};
	for(i; i < 10; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	int arr4[COUNT] = {[COUNT-3] = 3, 2, 1};//Start at index 2
	for(i=0; i < 5; i++)
		printf("%d ", arr4[i]);
	printf("\n");

	//6.4 Out of Bounds
	

	return 0;
}
