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

	struct pet parrot = //Must include "struct"
					   //full type is "struct pet"
	{"Freddie", 3, true}; //Must follow order of variables
						  //As listed in the struct
						  //Otherwise will break
	//Another way is doing
	//{.name="", .age=1} -> Order independent
	//Omitting canFly defaults it to false

	/*
	parrot.name = "Freddie";
	parrot.age = 3;
	parrot.canFly = true;
	*/

	printf("%s\n", parrot.name);
	printf("%d\n", parrot.age);
	printf("%d\n", parrot.canFly);

	return 0;
}
