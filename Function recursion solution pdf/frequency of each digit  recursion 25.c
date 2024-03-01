//Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
void frequencyD(long int,int);
int main(){
	long int no;
	printf("Enter the number :");
	scanf("%ld",&no);
	frequencyD(no,0);
	return 0;
}
void frequencyD(long int no,int i){
	int count,r;
	long int n;
	if(i<10){  //1
		count=0;
		n=no;//12565
		while(n!=0){
			r=n%10;
			if(r==i){
				count++;
			}
			n/=10;
		}
		printf("%d----%d\n",i,count);
		++i;
		frequencyD(no,i);
	}
}
