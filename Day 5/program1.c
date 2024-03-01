#include<stdio.h>
int main(){
	int a=5,b;
	b=a++>>2&5;
	printf("a=%d",a);
	printf("\nb=%d",b);
	return 0;
}
