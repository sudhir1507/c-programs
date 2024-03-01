#include<stdio.h>
int main(){
	int a,b,*p1,*p2;
	printf("Enter the number : ");
	scanf("%d",&a);
	p1=&a;
	printf("Enter the number : ");
	scanf("%d",&b);
	p2=&b;
	printf("Addition is:%d\n",*p1 + *p2);
	printf("Substraction is:%d\n",*p1 - *p2);
	printf("Multiplication is:%d\n",*p1 * *p2);
	printf("Division is:%d\n",*p1 / *p2);

}
