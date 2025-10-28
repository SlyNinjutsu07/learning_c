#include <stdio.h>
#include <stdbool.h>

int main(void){

    int i = 31;
    float f = 3.14;
    char* s = "Hello, World";

    printf("%d\n", i);
    ++i;
    printf("%d\n", i);
    i++;
    printf("%d\n", i);

    return 0;
}