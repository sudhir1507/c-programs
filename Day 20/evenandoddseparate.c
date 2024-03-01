#include<stdio.h>
int main(){
	int i,a[5],len;
	len=sizeof(a)/sizeof(a[0]);

	printf("enter the array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nElements of array : ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nEven elements: ");
	for(i=0;i<len;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
	printf("\nOdd elements: ");
	for(i=0;i<len;i++){
		if(a[i]%2==1){
			printf("%d ",a[i]);
		}
	}
}
