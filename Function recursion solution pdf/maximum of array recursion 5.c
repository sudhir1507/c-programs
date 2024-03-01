//Program to find the largest element of an array
#include<stdio.h>
int maxOfArray(int a[],int size);
int main(){
	int size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements of array :");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int maximun=maxOfArray(a,size-1);
	printf("Maximum is %d",maximun);
	return 0;
}

int maxOfArray(int a[],int size){
	if(size==0){
		return a[size];
	}
	int m=maxOfArray(a,size-1);
	if(a[size]>m){
		m=a[size];
	}
	return m;
}
