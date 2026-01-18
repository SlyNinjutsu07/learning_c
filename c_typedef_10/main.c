#include <stdio.h>

typedef int urmom; //"urmom" can now be used as a placeholder for "int"

struct car {
  char *type;
  int wheelCount;
};

typedef struct car car; //"struct car" can now be implied through "car" without having to say struct over and over

//Another way that you can do the above is the following

typedef struct animal { //Define it as a typdef
  char *name;
  int leg_count, speed;
} animal; //Then give it an "alias"/new name

//You can even do this:
typedef struct { //No name; "anonymous"
  int x, y;
} point; //"alias"

//Typedef also allows you to readjust a type if you have it used commonly
typedef float needADble;//As the name suggest, you can change float to a double to change the type whenever

typedef int array_of_5_ints[5];

typedef int* iptr;

int main(void){

    printf("Hello, world\n");

    car honda = {.type = "honda", .wheelCount = 6};
    printf("%s, %d\n", honda.type, honda.wheelCount);

    //No errors for both
    struct animal x;
    animal y;

    point p = {.x = 10, .y = 10};
    printf("{%d, %d}\n", p.x, p.y);

    //Valid
    array_of_5_ints a = {0,1,2,3,4};
    iptr i = &honda.wheelCount;

    return 0;
}
