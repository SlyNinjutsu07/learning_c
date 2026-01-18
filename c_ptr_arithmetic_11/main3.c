#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *name;
  int leg_count;
} animal;

int compar(const void *e1, const void *e2){
  const animal *a1 = e1;
  const animal *a2 = e2;

  if(a1->leg_count > a2->leg_count)
    return 1;
  else return -1;

  return 0;
}

int main(void){

  animal arr[4] = {
    {.name = "Parrot", .leg_count = 2},
    {.name = "Spider", .leg_count = 8},
    {.name = "Fish", .leg_count = 0},
    {.name = "Dog", .leg_count = 4},
  };

  for(int i = 0; i < 4; i++)
    printf("%s : %d | ", arr[i].name, arr[i].leg_count);
  printf("\n");

  qsort(arr, 4, sizeof(animal), compar);  

  for(int i = 0; i < 4; i++)
    printf("%s : %d | ", arr[i].name, arr[i].leg_count);
  printf("\n");



  return 0;
}
