#include <stdio.h>

int main(void){

    FILE *fo = fopen("text.bin", "rb");
    char text[256];

    while(fgets(text, sizeof text, fo) != NULL)
      printf("%s", text);
    //while(fgets(text, sizeof text, fo) != NULL) //Ends at '\n'
    //fread(text, sizeof(char), sizeof text, fo);
    fclose(fo);


    return 0;
}
