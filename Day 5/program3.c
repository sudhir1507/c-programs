#include<stdio.h>
int main(){
	int a=10,b=20,c;
	c=a + b++ + ++a + b--;
	printf("a=%d\tb=%d\tc=%d\t",a,b,c);
	return 0;
}
