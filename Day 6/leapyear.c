#include<stdio.h>
int main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	year%4==0?printf("Leap year"):printf("Not Leap year");
	return 0;
}
