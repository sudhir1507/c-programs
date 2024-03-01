//40.Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>
void allPerfect(int,int);
int main(){
	int limit;
	printf("Enter the limit:");
	scanf("%d",&limit);
	allPerfect(1,limit);
	return 0;
}

void allPerfect(int no,int limit){
	int i,sum;
	if(no<limit){
		sum=0;
		for(i=1;i<no;i++){
			if(no%i==0){
			   sum=sum+i;
		     }	
	    }
	    if(no==sum){
		  printf("%d ",no);
    	}
    	++no;
    	allPerfect(no,limit);	
}
}
