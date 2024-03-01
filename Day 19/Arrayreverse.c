#include<stdio.h>
int main(){
	int a[6],i,start,end,mid,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of arrays: ");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	printf("\nElements of array in reverse order: ");
	end=len-1;
	mid=(len/2);
	for(start=0;start<mid;start++){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		end--;
	}
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
}
