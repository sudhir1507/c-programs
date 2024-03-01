#include<stdio.h>
/*Binary search is a defind as a searching algoritham used in a sortd array 
by repeatedly dividing the search interval half,it is more efficient for large data array */
int main(){
	int i,skey,a[10],l=0,r,mid,len,flag=0,pos;
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
	r=len-1;
	while(l<=r){
		mid=l+(r-l)/2;
		if(a[mid]==skey){
			pos=mid;
			flag=1;
			break;
		}
		else if(a[mid]<skey){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	if(flag){
		printf("Element FOUND at index %d",pos);
	}else{
		printf("Element NOT FOUND");
	}
}
