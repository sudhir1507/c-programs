//Program to find the second largest element of an array
#include<stdio.h>
int sm;
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
	int secmax=maxOfArray(a,size-1);
	printf("Second Largest is %d",secmax);
	return 0;
}
int i=0;
int maxOfArray(int a[],int size){
	if(i<size){
	 return a[size];
		sm=a[size];
	}
	int m=maxOfArray(a,size-1);
	if(a[size]>m){
		sm=m;
		m=a[size];
	}
	return sm;
		   
}
