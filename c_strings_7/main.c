#include <stdio.h>

int main(void){

	//Kind of works like an array
	//The char pointer points to "H"
	//which connects to the rest of the
	//string
	char *s = "Hello, World";//Other alternatives:
							 //char s[], char s[12]
	printf("%s\n", s);//%s is char* ptr
	
	//You can also do:
	for(int i = 0; i < 12; i++)
		printf("%c", s[i]);
	printf("\n");

	//char *s and char s[] different
	
	//char *s holdes a pointer to a string literal
	//stored in read-only memory. Thus, although
	//you can access it like an array, you can't 
	//modify each individual element
	//
	//s[0] = 'z' //Undefined
	//
	//char s[] however, allows you to modify the
	//string (not literal) because it is NOT in 
	//read-only memory. It is a MUTABLE COPY of it,
	//allowing for modification.
	//
	//Literals are defined in read-only memory
	//Arrays are defined closely within the program's
	//memory




	return 0;
}
