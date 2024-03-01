#include<stdio.h>
//kth smallest and largest element
int main(){
	int a[10],i,j,k,count=0,len,kth;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array:\n");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nafter sorting\n");
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
		     if(a[i]>a[j]){
		     		int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			 }
//			printf("88888888888000000\n");
		}
	}
		for(i=0;i<len;i++){
		printf("%d ",a[i]);
//		printf("-000000000000\n");
	}
	for(i=0;i<len;i++){
//		printf("iiiiiiiiiihi\n");
		for(j=i+1;j<len;j++){
			if(a[i]==a[j]){
				for(k=j;k<len-1;k++){
					a[k]=a[k+1];
				}
				len--;
				j--;
//				printf("hhhhi\n");
		}
		}
	}
	printf("\nelements of array after deleteing duplicate:\n");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter k th smallest elements ");
	scanf("%d",&kth);
	printf("\nkth smallest element : %d",a[kth-1]);
//	printf("hi\n");
	

	
}
