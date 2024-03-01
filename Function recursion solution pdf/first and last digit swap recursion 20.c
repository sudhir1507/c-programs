//18.Write a C program to find first and last digit of a number.
#include<stdio.h>
#include<math.h>
void firstlast(int,int);
int temp,f,l,count,p,mid;
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	temp=no;
	printf("Before swap number: %d\n",no);
	firstlast(no,temp);
	return 0;
}
void firstlast(int no,int temp){
	if(no!=0){
	   f=no%10;
	   no/=10;
	   count++;
	   firstlast(no,temp);
	}else{
//		printf("First=%d\n",f);
		l=temp%10; //1234 4
		p=pow(10,--count); //10 4=10000
		mid=temp%p;   //2345
		mid=mid/10;    //234
		temp=l*p+mid*10+f;  //52341
		printf("After swaping first and last digit number=%d",temp);
	}
}
