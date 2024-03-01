#include<stdio.h>
int main(){
	int a[10],i,j,count;
	printf("Enter the elements if arrays: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of array: ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\nPrime numbers are: ");
	for(i=0;i<10;i++){
		count=0;
		for(j=2;j<a[i];j++){
			if(a[i]%j==0){
				count++;
			}
		}
		if(count==0){
			printf("%d ",a[i]);
		}
	}
}
