#include<stdio.h>
#include "searcharray.h"
int main(){
	int a[8],i,skey;
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter the Elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter value to search:");
	scanf("%d",&skey);
	int result = search(a,skey);
	if(result>=0)
	    printf("value found at index %d",result);
	else
	    printf("value not found");
}
