#include <stdio.h>

//You need to globally define this
struct car {
	char *name;
	float price;
	int speed;
};

//Method declaration
void set_price(struct car *c, float p);

int main(void){

	struct car honda = {.name="CR-V", .speed=100};

	set_price(&honda, 799.99);
	printf("%f\n", honda.price);

	struct car a, b;
	b = a; //Copy the struct
	
	//Only safe way to compare structs is
	//to compare each field separately
	return 0;
}

//Method def
void set_price(struct car *c, float p){
	c->price = p;
}

