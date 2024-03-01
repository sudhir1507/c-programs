#include<stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("Conversion of Celsius to Fahrenheit is: %f",fahrenheit);
	return 0;
}
