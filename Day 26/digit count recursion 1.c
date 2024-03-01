#include<stdio.h>
int digitcount(int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int dc=digitcount(no);
	printf("Number of digits = %d",dc);
}
count=0;
int digitcount(int no){
	if(no!=0){
		no/=10;
		count++;
		return digitcount(no);
		
	}else{
		return count;
	}
}
