#include <stdio.h>

/*
int main(){
	char buf[100];

	printf("put in: ");
	gets(buf);

	printf("Typed str: %s", buf);
}
*/


#define STR_LEN 50

int main(){
	char name[STR_LEN];

	fputs("Type str:", stdout);
	gets(name);

	fputs("Typed str: ", stdout);
	puts(name);

	return 0;
}
