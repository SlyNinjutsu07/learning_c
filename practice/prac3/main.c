#include <stdio.h>

//Serialization and De-serialization

struct Person {
		char *name;
		int age;
		float weight;
};

int main(void){

		FILE *fb; //File for binary
		FILE *fbp; //File for binary for person struct

		//DATA
		struct Person p = {.name = "Daisy", .age=153, .weight=456.5f};
		unsigned char fstring[128];//For data for a formatted string
		sprintf(fstring, "%s is %d years old and weights %f tons", p.name, p.age, p.weight);

		//ERROR CHECKING
		fb = fopen("persondata.bin", "wb");
		fbp = fopen("person.bin", "wb");
		if(!fb && !fbp){
				perror("Error opening file: does not exist\n");
				return 0;
		}

		fwrite(fstring, sizeof(char), 128, fb);
		fclose(fb);
		
		//first arg is ptr
		fwrite(&p, sizeof(struct Person), 1, fbp);
		fclose(fbp);

		return 0;
}
