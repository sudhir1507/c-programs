#include<stdio.h>
int main(){
	int i,a[8],mid,end,start,len,temp;
	len=sizeof(a)/sizeof(a[0]);

	printf("enter the array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nlen is %d",len);
	printf("\nElements of array before reverseing : ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	end=len-1;
	mid=len/2;
	for(start=0;start<mid;start++){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		end--;
	}
	printf("\nElements of array after reverseing : ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	
}
