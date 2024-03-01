#include<stdio.h>
int main()
{   
 int weight;
 printf("Enter weight\n");
 scanf("%d",&weight);
 if(weight>7000){
 	printf("Overload");
 }
 else if(weight>=1 && weight<=2000){
 	printf("25 minutes required");
 }
 else if(weight>=2001 && weight<=4000){
 	printf("35 minutes required");
 }
 else if(weight>=4001 && weight<=7000){
 	printf("45 minutes required");
 }
 else{
 	printf("invalid input");
 }
	return 0;
}
