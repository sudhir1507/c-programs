#include<stdio.h>
int main(){
	float p,t,r,si;
	printf("\nEnter the principle amount : ");
	scanf("%f",&p);
	printf("\nEnter the time period : ");
	scanf("%f",&t);
	printf("\nEnter the rate of intrest : ");
	scanf("%f",&r);
	
	si=(p*t*r)/100;
	printf("\nSimple intrest is: %f",si);
	return 0;
}
