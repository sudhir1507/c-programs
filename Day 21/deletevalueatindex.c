#include<stdio.h>
int  main(){
	int a[5],i,len,skey,j;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter skey:");
	scanf("%d",&skey);
	for(i=0;i<len;i++){
		if(a[i]==skey){
			break;
		}
	}
	for(j=i;j<(len-1);j++){
		a[j]=a[j+1];
	}
	printf("\nAfter deletetion Array: ");
	for(j=0;j<len-1;j++){
		printf("%d ",a[j]);
	}
	
}
