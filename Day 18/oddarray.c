#include<stdio.h>
int main(){
	int a[10],i,min;
	printf("Enter the elements of array:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==1){
			printf("%d ",a[i]);
		}
		
	}
	return 0;
	}

