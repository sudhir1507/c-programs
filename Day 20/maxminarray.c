#include<stdio.h>
int main(){
	int a[5],i,max,min,j;
	printf("Enter the element: ");
	for(i=0;i<5;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nmax of array : ");
	max=a[0];
	for(i=1;i<5;i++){
	    if(a[i]>max){
			max=a[i];
		}
		}
	printf("%d",max);
	printf("\nmin of array : ");
	min=a[0];
	for(i=1;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
		}
	printf("%d",min);
	
	
}
