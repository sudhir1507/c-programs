//Write a C program to find HCF (GCD) of two numbers
#include<stdio.h>
int hcf(int,int,int);
int main(){
	int a,b;
	printf("Enter the number a and b : ");
	scanf("%d%d",&a,&b);
	int result=hcf(a,b,1);
	printf("HCF of %d and %d is %d",a,b,result);
	return 0;
}
int h=0;
int hcf(int a,int b,int i){
	if(i<a||i<b){
		if(a%i==0&&b%i==0){
			h=i;
		}
		return hcf(a,b,++i);
	}else{
		return h;
	}
}
