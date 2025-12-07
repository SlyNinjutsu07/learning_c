#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){

	// for(;;) condition = Inf loop
	// if(1) or if(0) = if(true) or if(false)
	// sizeof(val) returns a size_t
	// size_t can be printed with %zu in printf

	int x = 1;

	switch(x){
		case 1:
			printf("1\n");
			break; //Remove break to have a "fall-through"
		case 2:
			printf("2\n");
			break;
	}
	
	
	
    return 0;
}
