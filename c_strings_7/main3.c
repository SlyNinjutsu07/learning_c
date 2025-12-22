#include <stdio.h>
#include <string.h>

int main(void){

	char s[] = "Hello, world";
	char *t = s;//You can't copy strings, 
				//just points to same string
	
	s[0] = 'z';
	printf("%s\n", s);

	t[1] = 'z';
	printf("%s\n", s);

	char s2[] = "Your mom";
	char t2[100];//Ensure there is enough for
				//each char byte
	strcpy(t2, s2);//Copy s to t
	t2[0] = 'z';

	printf("%s -> %s\n", s2, t2);

	return 0;
}
