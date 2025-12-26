#include <stdio.h>

void print_whole_line(char *fn, FILE *fp){
		int c = 0;
		fp = fopen(fn, "r");

		while((c = fgetc(fp)) != EOF)
				printf("%c", c);
		fclose(fp);
}

int main(void){


		//FILE* data type
		//stdin -> Standard Input -> default to keyboard
		//stdout -> Stand. Output -> default to the screen
		//stderr -> Stand. Error -> default to screen

		//These two are the same thing
		printf("Hello, world\n");
		fprintf(stdout, "Hello, world\n");

		FILE *fp; //Var represents an OPEN FILE
		fp = fopen("hello.txt", "r"); //Open hello.txt for "r"eading
		int c = fgetc(fp);
		printf("%c\n", c);
		fclose(fp);

		print_whole_line("hello.txt", fp);

		return 0;
}


