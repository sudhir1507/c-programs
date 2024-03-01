#include<stdio.h>
int main(){
	int a,*ptr;

	printf("Enter the number : ");
	scanf("%d",&a);
	ptr=&a;
	printf("Value of Number: %d\n",*ptr);
	printf("Address of Number: %u",ptr);
	
}
