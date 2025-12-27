#include <stdio.h>

int main(void){

		FILE *fp;
		unsigned char bytes[6] = {3,12,45,2,68,1};

		fp = fopen("output.bin", "wb");//.bin = binary file | wb = write binary
		
		//Arguments: pointer to data, sizeof each data, # of data, and FILE
		fwrite(bytes, sizeof(char), 6, fp);
		fclose(fp);

		fp = fopen("output.bin", "rb");//Reading from .bin
		
		unsigned char bytes2;
		while(fread(&bytes2, sizeof(char), 1, fp) > 0)//We're using & because we haven't specified
				printf("%d ", bytes2);										//bytes2 as a pointer OR an array
		printf("\n");
		
		fclose(fp);

		return 0;
}

