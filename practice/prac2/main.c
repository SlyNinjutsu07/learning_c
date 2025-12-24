#include <stdio.h>

struct word {
	int length;
	char startLetter;
	char str[4];
};

void modifyStartLetter(struct word *w, char c){
	w->str[0] = c;
	w->startLetter = c;
}

int main(void){

	struct word w1 = {.str = "nice", .length = 4};
	printf("w1 : %s : %d : %c\n", w1.str, w1.length, w1.startLetter);
	modifyStartLetter(&w1, 'H');
	printf("w1 : %s : %d : %c\n", w1.str, w1.length, w1.startLetter);

	return 0;
}
