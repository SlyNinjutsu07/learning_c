#include <stdio.h>
#include <string.h>

int new_strlen(char *s);

int main(void){

	char *s = "Hello, world";
	printf("%s : %zu\n", s, strlen(s));
	//strlen() returns the amount of bytes for
	//all characters combined. And each character
	//is typically 1 byte. Not always the case tho
	
	char *s2 = "你好，我说中文。";//24 bytes long
								  //rather than 8
	printf("%s : %zu : %zu\n", s2, strlen(s2), strlen("你"));
	
	char *s3 = "😭😂😤😔☠️";//22 bytes rather than 5
	printf("%s : %zu : %zu\n", s3, strlen(s3), strlen("😭"));
	
	//HOW A STRING IS DEFINED IN C
	//
	//1) A string = a ptr to the 1st char in a string
	//2) There is a "zero-valued byte" (or NUL character)
	//somewhere in memory (a couple of positions after) 
	//after the 1st ptr.
	//s = "Hello"; -> "Hello\0" -> '\0' = NUL (!= NULL)
	//This NUL character acts as a terminator. It's in 
	//every string. Look at new_strlen() for definition.
	printf("\"%s\" length is %d\n", s2, new_strlen(s2));

	return 0;
}

//Doesnt work for 汉字 or emojis
//Because chars are single bytes (8 bits).
//A chinese char = 3 bytes = 4 chars
//Emoji = 4 bytes = 4 chars
int new_strlen(char *s){
	int count = 0;
	while(s[count] != '\0')//While it's not equal to the terminator
		count++;
	
	return count;
}


