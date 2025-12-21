#include <stdio.h>
#include <string.h>

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
	


	return 0;
}
