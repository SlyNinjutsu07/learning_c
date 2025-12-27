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

		fp = fopen("output.txt", "w");//Write mode & and generate a new txt file
		fputc('A', fp);//File put char
		fputc('\n', fp);
		fprintf(fp, "x = %d\n", mass);//File print formatted
		fputs("your mom", fp);//File put string
		fclose(fp);

		return 0;
}

