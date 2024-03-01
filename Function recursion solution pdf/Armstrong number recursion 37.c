//37.Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int isArmstrong(int,int,int);
int main(){
	int no,count=0;
	printf("Enter the number: ");
	scanf("%d",&no);
	int temp=no;
	for(;no>0;no/=10){
		count++;
	}
	no=temp;
	int r=isArmstrong(no,temp,count);
	if(r==1){
		printf("%d is Armstrong number",temp);
	}else{
		printf("%d is NOT Armstrong number",temp);	 
	}
}
int sum=0;
int isArmstrong(int no,int temp,int count){
	if(no>0){
		int rem=no%10;
		sum=sum+pow(rem,count);
		
		return isArmstrong(no/=10,temp,count);
	}else{
		if(sum==temp){
			return 1;
		}else{
			return 0;
		}
	}
}
