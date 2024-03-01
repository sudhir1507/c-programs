#include<stdio.h>
int main(){
	int i,j,a[5],diff,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	int flag=0;
	printf("\nEnter the difference :");
	scanf("%d",&diff);
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(a[j]-a[i]==diff)
			    {
			    	printf("The pair are:(%d,%d) ",a[i],a[j]);
			    	flag=1;
		    		break;
				}
		}
		if(flag)
		    break;
	}		
}
