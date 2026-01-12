#include <stdio.h>

int main(void){

    FILE *fo = fopen("text.bin", "rb");
    char text[64];

    fgets(text, sizeof text, fo);
    //fread(text, sizeof(char), sizeof text, fo);
    fclose(fo);

    printf("%s\n", text);

    return 0;
}
