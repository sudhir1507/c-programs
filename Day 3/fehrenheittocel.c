#include<stdio.h>
int main(){
	float celsius,fehrenheit;
	printf("Enter the tempreture in fehrenheit:");
	scanf("%f",&fehrenheit);
	celsius=(fehrenheit-32)*5/9;
	printf("tempreture in celsius : %.3f",celsius);
	return 0;
	
}
