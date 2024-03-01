#include<stdio.h>
int main(){
	int a[10],i,skey,flag=0,len,pos;
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
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag)
	   printf("Element FOUND at index %d",pos);
	else
	   printf("Element NOT FOUND");
	return 0;
}
