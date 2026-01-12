#include <stdio.h>

int main(void){

  FILE *fb = fopen("text.bin", "wb");
  char *text = "This is a text that is being converted to binary";

  //fwrite(text, 1, strlen(text), fb);
  fputs(text, fb);

  fclose(fb);

  return 0;
}
