#include <stdio.h>

int main(void){

		FILE *fp;
		char s[1024]; //For enough space to allocate
		float length;
		int mass;

		fp = fopen("whales.txt", "r");
		while(fscanf(fp, "%s %f %d", s, &length, &mass) != EOF)
				printf("%s whale is %d tonnes and %f meters long\n", s, mass, length);
		fclose(fp);

		return 0;
}

