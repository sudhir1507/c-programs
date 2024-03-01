#include<stdio.h>
int main(){
	int a=5,b=6,c;
	c=++a || ++b || a++;
	printf("a=%d\tb=%d\tc=%d\t",a,b,c);
	return 0;
}
