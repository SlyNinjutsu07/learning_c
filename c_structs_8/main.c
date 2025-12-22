#include <stdio.h>
#include <stdbool.h>

//Structs aren't classes
//They're like types
//with variables bundled inside that make it up.
//There are no methods

struct pet {
	char *name;
	int age;
	bool canFly;
};


int main(void){

	struct pet parrot; //Must include "struct"
					   //full type is "struct pet"
	parrot.name = "Freddie";

	printf("%s\n", parrot.name);

	return 0;
}
