#include<stdio.h>
int main(){
	float length_centimeter,meter,kilometer;
	printf("Enter the lenght in centimeter: ");
	scanf("%f",&length_centimeter);
	meter=length_centimeter/100;
	kilometer=length_centimeter/100000;
	printf("\n%f",meter);
	printf("\n%f",kilometer);
	return 0;
	
}
