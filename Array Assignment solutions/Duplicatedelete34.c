#include<stdio.h>
int main(){
	int a[10],i,j,k,count=0,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array:\n");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(a[i]==a[j]){
				for(k=j;k<len-1;k++){
					a[k]=a[k+1];
				}
				len--;
				j--;
		}
		}
	}
	printf("Array after deleteing dduplicate: ");
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
}
