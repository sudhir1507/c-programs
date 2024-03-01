//38.Write a C program to print all Armstrong numbers between 1 to n.
#include<stdio.h>
#include<math.h>
void armstrong(int,int);
int main(){
	int limit;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	armstrong(1,limit);
    return 0;
}

void armstrong(int no,int limit){
	
	if(no<limit){
	int temp=no,sum=0,count=0;
	for(;no>0;no/=10){
		count++;
	}
	no=temp;
	while(no>0){
		int rem=no%10;
		sum=sum+pow(rem,count);
		no/=10;
	}
		if(sum==temp){
			printf("%d ",temp);
		}
	  no=temp;
	  ++no;
	  armstrong(no,limit);
	}
	
}

