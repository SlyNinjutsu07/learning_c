#include <stdio.h>

int add_list(int *list, int len){
		int sum = 0;

		for(int i = 0; i < len; i++){
				sum += list[i];
				printf("%d ", list[i]);
		}

		return sum;
}

int main(void){

		FILE *f = fopen("numbers.bin", "rb");
		int l[128];

		int count = 0;

		//Prints out just 1's
		while(count < 128 && fread(&l[count], sizeof(int), 1, f) > 0){ 
				printf("%d ", *l);
				count++;
		}
		printf("\n");

		printf("Sum: %d\n", add_list(l, 8)); 
		


		return 0;
}
