#include <stdio.h>

int main(void){

  FILE *fb = fopen("text.bin", "wb");
  char *text = "This is a text that is being converted to binary";

  //fwrite(text, 1, strlen(text), fb);
  fputs(text, fb);
  fputc('A', fb);
  fputs("1082389058091823\n\t\"\"", fb);
  fputs("Here's a bunch of jargon:", fb);
  fputc(84, fb);
  fputs("fasldfjsdfklsdjf\n", fb);

  fclose(fb);

  return 0;
}
