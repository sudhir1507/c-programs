#include<stdio.h>
/*Bubble sort is simplest sorting algoritham that works by repeatedly swapping the
adjacent elements of array if they are in worng order*/
int main(){
	int a[5],i,j,len,temp;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of array Before sorting:");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	//bubble sort algoritham
	for(i=0;i<len;i++){
		for(j=(i+1);j<len;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nElements of array after sorting:");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
