#include<stdio.h>

int main(){
	int days,weeks,years;
	printf("Enter the Days: ");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("\nYears :%d",years);
	printf("\nWeeks : %d",weeks);
	printf("\nDays :%d",days);
	return 0;
}
