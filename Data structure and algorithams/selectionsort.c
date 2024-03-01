#include<stdio.h>
/*Selection sort is a simple and efficent sorting algoritham that works by repeadly
selecting smallest or largest element form the unsorted portion of the array 
and moving it to the sorted portion of the array*/
int main(){
	int a[5],i,j,min_idx,len,temp;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of array Before sorting:");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	//selection sort algoritham
	for(i=0;i<(len-1);i++){
		min_idx=i;
		for(j=(i+1);j<len;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
		if(min_idx!=i){
			temp=a[i];
			a[i]=a[min_idx];
			a[min_idx]=temp;
		}
	}
	printf("\nElements of array after sorting:");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
