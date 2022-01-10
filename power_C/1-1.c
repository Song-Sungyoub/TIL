#include <stdio.h>

int main(){
	char c;
	int n;
	double f;
	char buf[100];
	
	printf("Input [char, int, float, str]`s format: ");
	scanf("%c, %d, %lf, %s", &c, &n, &f, buf);

	printf("Print inputed data: %c, %d, %lf, %s", c,n,f,buf);
	
	return 0;
}
