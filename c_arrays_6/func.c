#include <stdio.h>
#define COUNT 5

//Param can be a ptr; but you can pass in the array
//Ptr as a parameter is the most often used
void print_arr(int *p){
	for(int i = 0; i < COUNT; i++)
		printf("%d ", p[i]);

	printf("\n");
}

//Can also do int a[COUNT] or a[5]
void multiply(int a[], int factor){
	for(int i = 0; i < COUNT; i++)
		a[i] *= factor;
}

//Can also do mA[][3] -> First dimesnion isn't really needed
void print_multi_arr(int mA[2][3]){
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++)
			printf("[%d, %d] = %d\n", i, j, mA[i][j]);
}


int main(void){
	
	//Crash
	int arr[COUNT] = {1,2,3,4,5};
	int *pArr = &arr[0];//Both a pointer and the actual array
						//Can be passed in to print_arr

	print_arr(arr);
	multiply(arr, 2);
	print_arr(pArr);

	int mArr[2][3] = {
		{0,1,2},
		{3,4,5}
	};

	print_multi_arr(mArr);

	return 0;
}
