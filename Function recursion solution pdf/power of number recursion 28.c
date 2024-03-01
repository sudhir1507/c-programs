//Write a C program to find power of a number using for loop.
#include<stdio.h>
int powerOfNo(int,int,int);
int main(){
	int base,index;
	printf("Enter the base and index: ");
	scanf("%d%d",&base,&index);
	int p=powerOfNo(base,index,1);
	printf("%d power of %d is %d",index,base,p);
	return 0;
}
int powerOfNo(int base,int index,int pr){
	if(index!=0){
		pr=pr*base;
		return powerOfNo(base,--index,pr);
	}else{
		return pr;
	}
}
