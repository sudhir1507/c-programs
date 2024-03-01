#include<stdio.h>
int main(){
	int i,k=0,limit;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)  
	{
		printf("%d ",i);   
		i=i+k;   
		k++;     
	}
}
