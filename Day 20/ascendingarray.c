#include<stdio.h>
int main(){
	int a[5],i,temp,j;
	printf("Enter the element: ");
	for(i=0;i<5;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\narray in ascending order: ");
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
