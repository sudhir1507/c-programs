#include<stdio.h>
int main(){
	int a[5],i;
	printf("Enter the element: ");
	for(i=0;i<5;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
}
