#include <stdio.h>

struct Person {
		char *name;
		int age;
		float weight;
};

int main(void){

		FILE *f = fopen("persondata.bin", "rb");
		FILE *f1 = fopen("person.bin", "rb");

		struct Person p;
		unsigned char str[128]; //String of length 128
														//to store data

		if(!f && !f1){
				perror("Your mom, it dont wrk");
				return 0;
		}

		fread(&p, sizeof(struct Person), 1, f1);	
		fread(str, sizeof(char), 128, f);
		/*while(fread(str, sizeof(char), 128, f) > 0)
				printf("%s", str);*/

		printf("%s\n", str);

		return 0;
}
