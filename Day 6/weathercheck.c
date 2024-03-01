#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temp: ");
	scanf("%d",&temp);
	temp<0?printf("Freezing temp"):
	temp<=10&&temp>0?printf("Very Cold"):
	temp<=20&&temp>10?printf("Cold"):
	temp<=30&&temp>20?printf("Normal Temp"):
	temp<=40&&temp>30?printf("Its Hot"):
		printf("Its Very Hot");;;;
		return 0;
}
