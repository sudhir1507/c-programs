#include<stdio.h>
int main(){
	int a,b,*p1,*p2;
	printf("Enter the number a : ");
	scanf("%d",&a);
	p1=&a;
	printf("Enter the number b : ");
	scanf("%d",&b);
	p2=&b;
	printf("Numbers before swap : %d %d\n",*p1,*p2);
	*p1=*p1 + *p2;
	*p2=*p1 - *p2;
	*p1=*p1 - *p2;
	printf("Numbers After swap : %d %d",*p1,*p2);
}
