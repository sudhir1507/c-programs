#include<stdio.h>
int main(){
	
		int sum,avg,percentage,sub1,sub2,sub3,sub4,sub5,sub6;
		printf("Enter the Marks of six subject: ");
		scanf("%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
		sum=sub1+sub2+sub3+sub4+sub5+sub6;
		avg=sum/6;
		percentage=sum*100/600;
		printf("Average is : %d",avg);
		printf("\nPercentage is: %d",percentage);
		return 0;
	
}
