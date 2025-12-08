#include <stdio.h>

void increment(int *p){
	*p += 1;
}

int main(void){

	int i;
	int *p;//Pointer to ints, because "p" is of type "int*"
	p = &i;//& means "address-of"
		   //so you return the "address-of" a value to a ptr;
	
	i = 10;//Setting i to 10
	*p = 20;//Setting i to 20
			//We don't do "p" because that is a
			//pointer that only accepts "adress-of" (&)
			//*p accesses the value of the address

	printf("The value of i is %d\n", i);
	//printf("The value of i is %d\n", *p);
	printf("The address is %p\n", p);//"%p" used for ptrs

	printf("Before incrememnt: %d\n", i);
	increment(&i);//&i and p, are of the same type (int*)
	printf("After incrememnt: %d\n", *p);

	int *n = NULL;//NULL ptr
	//*n = ... -> Doing this can result in a crash

	int x, y;//Both ints
	int *a, b;//a is int* and b is regular int. You add '*' to designate 
			  //something as a ptr; If we want b to be a ptr, we do "*b"
			  //as well
	
	printf("%zu\n", sizeof p);
	return 0;
}
