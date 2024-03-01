#include<stdio.h>
int main(){
	int a[5],i,temp,j,len,count=1;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the element: ");
	for(i=0;i<len;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\narray in ascending order: ");
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<len;i++){
		if(a[i]>a[i+1]){
			printf("\nsecond max=%d ",a[i+1]);
			break;
		}
		
	}
	
	return 0;
}
