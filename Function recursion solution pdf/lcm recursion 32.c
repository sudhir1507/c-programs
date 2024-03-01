//2.Write a C program to find LCM of two numbers.
#include<stdio.h>
int lcm(int,int,int);
int main(){
	int a,b;
	printf("Enter the number a and b : ");
	scanf("%d%d",&a,&b);
	int result=lcm(a,b,1);
	printf("LCM of %d and %d is %d",a,b,result);
	return 0;
}
int h=0;
int lcm(int a,int b,int i){
	if(i<a||i<b){
		if(a%i==0&&b%i==0){
			h=i;
		}
		return lcm(a,b,++i);
	}else{
		return (a*b)/h;
	}
}
