#include <stdio.h>

int main(void){

		FILE *f = fopen("numbers.bin", "wb");
		int list[] = {1,4,2,6,7,8,5,9};

		fwrite(&list, sizeof(int), 8, f);

		return 0;
}
