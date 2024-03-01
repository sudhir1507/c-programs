#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	printf("Enter the elements of array:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+a[i];
		
	}
	printf("%d ",sum);
	return 0;
	}

