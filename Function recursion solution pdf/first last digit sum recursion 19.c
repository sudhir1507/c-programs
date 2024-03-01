//19.Write a C program to find sumof first and last digit of a number.
#include<stdio.h>
int firstlast(int);
int temp,f,l;
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	temp=no;
	int s=firstlast(no);
	printf("\nSum =%d",s);
	return 0;
}
int firstlast(int no){
	if(no!=0){
	   f=no%10;
	   no/=10;
	  return firstlast(no);
	}else{
//		printf("First=%d",f);
		l=temp%10;
//		printf("\nLast=%d",l);
		return f+l;
	}
}
