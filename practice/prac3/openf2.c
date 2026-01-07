#include <stdio.h>

int add_list(int *list, int len){
		int sum = 0;

		for(int i = 0; i < len; i++)
				sum += list[i];

		return sum;
}

int main(void){

		FILE *f = fopen("numbers.bin", "rb");
		int l[128];

		while(fread(&l, sizeof(int), 1, f))
				printf("%d ", *l);
		printf("\n");

		int len = sizeof(l) / sizeof(int);
		
		//Printed a stupid number
		//Func doesnt work
		printf("Sum: %d\n", add_list(l, len));

		return 0;
}
