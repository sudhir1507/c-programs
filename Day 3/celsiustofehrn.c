#include<stdio.h>
int main(){
	float celsius,fehrenheit;
	printf("Enter the tempreture in celsius: ");
	scanf("%f",&celsius);
	fehrenheit=(celsius*1.8)+32;
	printf("Conversion cesius to fehrenheit: %.3f",fehrenheit);
	return 0;
	
}
