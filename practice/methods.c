#include <stdio.h>
#include "methods.h"

void print_arr(int *a, int len){
	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void addTo(int *p, int amt){
	*p += amt;
}

int* ret_ptr_in_arr(int *arr, int index, int len){
	if(len <= index) return NULL;

	int *p = &arr[index];
	
	return p;
}

void arr_times_2(int *a, int len){
	for(int i = 0; i < len; i++)
		a[i] *= 2;
}

//int if_len_valid(int x){
