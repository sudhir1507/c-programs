#include<stdio.h>
int main(){
	int no,i=2,count=0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	while(i<=no){
		if(no%i==0)
		{
			count++;
	        
		}
		i++;
	}
		if(count==1){
			printf("Prime");
		}else{
			printf("Not prime");
		}
	
}
