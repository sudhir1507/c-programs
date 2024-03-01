#include<stdio.h>
int * copystr(int a[],int len){
	int i,mid=len/2,end=len-1;
	for(i=0;i<mid;i++){
		int temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
		
	}
	return a;
}
int main(){
	int i,a[5];
	printf("Enter first array  :");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("array elements");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	int *p=copystr(a,5);
	printf("\narray after reverse:");
	for(i=0;i<5;i++){
		printf("%d ",p[i]);
	}
	return 0;
	
}
