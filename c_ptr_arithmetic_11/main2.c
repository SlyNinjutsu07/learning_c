#include <stdio.h>
#include <string.h>

void *my_memcpy(void *dest, void *src, int bytes) {
  char *d = dest, *s = src;

  for(int i = 0; i < bytes; i++)
    /* 1. *d = *s 
     * 2. d++; s++; */
    *d++ = *s++; 

  return dest;
}

void *my_memcpy2(void *dest, void *src, int byte_count) {
  // Convert void*s to char*s
  char *s = src, *d = dest;
  // Now that we have char*s, we can dereference and copy them
  while (byte_count--) {
    *d++ = *s++;
  }
  // Most of these functions return the destination, just in case
  // that's useful to the caller.
  return dest;
}

int main(void) {

  /*
  char s[] = "Yourmom!";
  char t[20];

  memcpy(t, s, sizeof s);
  printf("%s\n", t);

  int x[3] = {1,2,3};
  int y[6];
  memcpy(y,x,sizeof x);
  printf("%d\n", y[2]);

  char a[3] = {84,85,86};
  int b[6];
  memcpy(b, a, sizeof(int));
  printf("%c : %d\n", 85, b[1]); */

  char s[] = "Hellofsdfsd";
  char d[20];

  my_memcpy2(d, s, sizeof s);
  printf("%s\n", d);

  float a[3] = {1.1,2.2,3.3};
  float b[6];

  my_memcpy(b,a,sizeof a);
  printf("%f\n", b[1]);

  return 0;
}



