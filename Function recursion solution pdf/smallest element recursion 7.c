//Program to find the smallest element of an array
#include<stdio.h>
int smallestOfArray(int a[],int size);
int main(){
	int size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements of array :");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int small=smallestOfArray(a,size-1);
	printf("Minimum is %d",small);
	return 0;
}

int smallestOfArray(int a[],int size){
	if(size==0){
		return a[size];
	}
	int m=smallestOfArray(a,size-1);
	if(a[size]<m){
		m=a[size];
	}
	return m;
}
