#include<stdio.h>
int main(){
	int no1,no2;
	printf("Enter the numbers: ");
	scanf("%d%d",&no1,&no2);
	switch(no1>no2)
	{
		case 1:
			printf("%d is greater",no1);
			break;
		case 0:
			printf("%d is greater",no2);
			break;
		default:
			printf("%d and %d are equal Number",no1,no2);
	}
	return 0;
}
