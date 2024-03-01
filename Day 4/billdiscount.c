#include<stdio.h>
int main(){
	int meter,perunitrate,bill;
	printf("Enter the meter: ");
	scanf("%d",&meter);
	printf("Enter the perunitrate: ");
	scanf("%d",&perunitrate);
	bill=meter*perunitrate;
	bill>2000?printf("20 percent discount is applied and bill=%d",bill=bill*80/100):printf("No discount");
	return 0;
	
}
