#include <stdio.h>

void print_whole_file(char *fn, FILE *fp) {
  int c = 0;
  fp = fopen(fn, "r");

  while ((c = fgetc(fp)) != EOF)
    printf("%c", c);
  fclose(fp);
}

void print_in_lines(void) {
  int lineN = 0;
  FILE *f;
  char s[1024]; // Allocate bytes for reading text

  f = fopen("hello.txt", "r");
  while (fgets(s, sizeof s, f) != NULL)
    printf("%d: %s", ++lineN, s);
  fclose(f);
}

int main(void) {

  // FILE* data type
  // stdin -> Standard Input -> default to keyboard
  // stdout -> Stand. Output -> default to the screen
  // stderr -> Stand. Error -> default to screen

  // These two are the same thing
  printf("Hello, world\n");
  fprintf(stdout, "Hello, world\n");

  FILE *fp;                     // Var represents an OPEN FILE
  fp = fopen("hello.txt", "r"); // Open hello.txt for "r"eading
  int c = fgetc(fp);
  printf("%c\n", c);
  fclose(fp);

  print_whole_file("hello.txt", fp);

  print_in_lines();

  return 0;
}
