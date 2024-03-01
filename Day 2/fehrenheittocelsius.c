#include<stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("Enter the tempreture in fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("Conversion of Fehrenheit to celsius: %.3f",celsius);
	return 0;
	
}
