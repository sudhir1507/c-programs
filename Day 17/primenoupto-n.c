#include<stdio.h>
int main(){
	int i=2,j,count,limit;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	printf("%d\t",i);
	do{
		count=0;
		j=2;
		do{
		   if(i%j==0){
		   	count++;
		   	break;
		   }
		   j++;	
		}while(j<i);
		if(count==0){
			printf("%d\t",i);
		}
		i++;
	}while(i<=limit);

}
