#include<stdio.h>
int main(){
	int unit,bill;
	printf("Entet the number of unit:");
	scanf("%d",&unit);
	if(unit<=50){
		bill=unit*0.5;
	}else if(unit>50&&unit<=150){
		bill=(unit-50)*0.75+50*0.50;
	}else if(unit>150&&unit<=250){
		bill=(unit-150)*1.20+100*0.75+50*0.50;
	}else{
		bill=(unit-250)*1.50+100*1.20+100*0.75+50*0.50;
	}
	bill=bill+bill*0.20;
	printf("Total bill is %d",bill);
	return 0;
}
