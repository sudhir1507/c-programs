#include<stdio.h>
int main(){
	int a[10],i,temp,j,len,mid,count,flag;
	len=sizeof(a)/sizeof(a[0]);
	mid=len/2;
	printf("Enter the element: ");
	for(i=0;i<len;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
    flag=1;	
	for(i=0;i<len;i++){
		count=1;
		for(j=i+1; j<len; j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>mid)
		{
			printf("\n%d is mejority",a[i]);
    		flag=0;
    		break;
		}
	}
	if(flag==1)
		{
			printf("No Mejority\n");
		}
	return 0;
}
