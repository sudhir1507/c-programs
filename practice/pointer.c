#include<stdio.h>
int main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("value of a=%d\n",a);
	printf("adrees of a=%u\n",&a);
	printf("value of ptr=%u\n",ptr);
	printf("Value of *ptr=%d\n",*ptr);
	printf("adress of ptr=%u\n",&ptr);
	ptr++;
	printf("value of ptr=%u\n",ptr);

}
