#include<stdio.h>
int main(){
	int a[10],b[10],i,skey,j=0,count=0,len,pos;
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
			b[j]=i;
			j++;
			count++;
		}
	}
	if(count>0){
		printf("Element FOUND at index : ");
	    for(i=0;i<count;i++){
	   	printf("%d ",b[i]);
	   }	
	}
	   
	else
	   {printf("Element NOT FOUND");
	   }
	return 0;
}
