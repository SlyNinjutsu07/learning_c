#include <stdio.h>

int main(void){
	
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
	return 0;
}
