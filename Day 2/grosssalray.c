#include<stdio.h>
int main(){
	int gs,bs,da,hra;
	printf("Enter the base salary: ");
	scanf("%d",&bs);
	da=bs*20/100;
	hra=bs*25/100;
	gs=bs+da+hra;
	printf("Gross salary: %d",gs);
	return 0;
}
