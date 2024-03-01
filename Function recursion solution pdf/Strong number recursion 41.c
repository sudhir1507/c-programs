//41.Write a C program to check whether a number is Strong number or not.
#include<stdio.h>
int isStrong(int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int temp=no;
	int s=isStrong(no,temp);
	if(s==1){
		printf("%d is Strong number..!",temp);
	}else{
		printf("%d is NOT Strong number..!",temp);
	}
 return 0;
}
int sum=0;
int isStrong(int no,int temp){
	int i;
	if(no!=0){
		int rem=no%10;
		int fact=1;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		no/=10;
	   return isStrong(no,temp);
	}
	if(sum==temp){
		return 1;
	}else{
		return 0;
	}
}
