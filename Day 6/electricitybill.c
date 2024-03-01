#include<stdio.h>
int main(){
	float unit,bill;
	printf("Enter the number of unit:");
	scanf("%f",&unit);
	unit<=50 ? printf("Total bill:%f",(0.50*unit+(0.50*unit)*20/100)):
	unit>50&&unit<=150? printf("Total bill:%f",(0.75*unit+(0.75*unit)*20/100)):
	unit>150&&unit<=250? printf("Total bill=%f",(1.20*unit+(1.20*unit)*20/100)):
	printf("Total bill=%f",(1.50*unit+(1.50*unit)*20*100));;;
	return 0;
}
