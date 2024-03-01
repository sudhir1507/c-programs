#include<stdio.h>
int main(){
	int a[10],i,skey,count=0,len,mid;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the search key: ");
	scanf("%d",&skey);
	for(i=0;i<len;i++){
		if(a[i]==skey){
			count++;
		}
	}
	mid=len/2;
	if(count>mid)
	   printf("%d is majority ",skey);
	else
	   printf("Element is not majority");
	return 0;
}
