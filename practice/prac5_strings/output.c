#include <stdio.h>
#include <string.h>

int main(void){

    FILE *fo = fopen("text.bin", "rb");
    char *text[64];

    int count = 0;
    while(fread(text, 1, 1, fo) > 0) {
        printf("%c", text[count]);
        count++;
    }
    fclose(fo);

    printf("%s", text);

    return 0;
}