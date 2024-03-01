#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("Before swaping three numbers");
	printf("\na=%d\tb=%d\tc=%d",a,b,c);
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("\nAfter swaping three numbers");
	printf("\na=%d\tb=%d\tc=%d",a,b,c);
	return 0;
	
}
