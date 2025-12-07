#include <stdio.h>

int plus_one(int n);//Prototype or declaration

char* hello(void);//MUST use void

int main(void){

	int i = 10;
	printf("i + 1 : %d\n", plus_one(i));
	printf("%s", hello());

	return 0;
}

//Func definition
int plus_one(int n){
	return n + 1;
}

//Must use void to say no parameters, good practice
char* hello(void){
	return "Hello, World\n";
}
