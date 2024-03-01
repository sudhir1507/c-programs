#include<stdio.h>
int main(){
	int a,b,c,temp;
	printf("Enter the three numbers: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("Three numbers before swap:a=%d\tb=%d\tc=%d",a,b,c);
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("\nThree numbers after swap:a=%d\tb=%d\tc=%d",a,b,c);
	return 0;
}
