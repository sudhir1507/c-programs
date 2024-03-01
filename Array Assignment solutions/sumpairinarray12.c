#include<stdio.h>
int main(){
	int i,j,a[6],len,sum;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	int flag=0;
	printf("\nEnter the sum :");
	scanf("%d",&sum);
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]+a[j]==sum)
			    {
			    	printf("pair of elements can make given sum by the index value %d and %d ",i,j);
			    	flag=1;
		    		break;
				}
		}
		if(flag)
		    break;
	}
	
	
}
