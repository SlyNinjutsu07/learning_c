#include <stdio.h>


/*NOTE
 * a[b] == *(a+b)
 */

void iterate_thru_arr(int *a, int size) {
  int i = 0;
  while (i < size) {
    printf(
        "%d ",
        *(a + i)); // By doing this notation, it jumps 'i' times 'sizeof(int)'
                   // bytes to the next int. So it's type sensitive
    i++;
  }
  printf("\n");
}

/* NOTE
 * *p++ is equal to *(p++) 
 * NOT (*p)++
 * MEANING THERE IS PEMDAS
 * */
void increment_ptr(int **ptr, int final_val) {
  while (**ptr != final_val) {
    printf("%d ", **ptr);
    (*ptr)++;
  }
}

//Only works on arrays
int str_len(char *s){
  int len = 0;
  
  /* Here's what we can do,
   * We can essentially take the difference between pointers 
   * to find the length of a string
   * meaning p(end) - p(beg) = len*/
  char *bs = s; //Stores original pointer
  while(*s != '\0')
    s++; //End ptr

  len = s - bs;

  return len;
}

int main(void) {
  //When incrementing, you can't do array++ since its a variable to an array
  //But you CAN do it with p since it equals a pointer to array[0]
  int array[5] = {0, 1, 2, 3, 4};
  int *p = array; // or *p = &array[0];

  //iterate_thru_arr(array, 5);
  increment_ptr(&p, 4); 
  printf("%d\n", *p);

  printf("%d\n", str_len("yourmom\\"));

  return 0;
}


