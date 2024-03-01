#include<stdio.h>
int main(){
	int a[10],i,skey,flag=0,j,len,pos;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the key to be deleted: ");
	scanf("%d",&skey);
	for(i=0;i<len;i++){
		if(a[i]==skey){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag)
	  {
	  	 for(j=i;j<len-1;j++){
	   	   a[j]=a[j+1];
	   }
	  }
	else{printf("Element NOT FOUND");	
	}
	 printf("elements of array after deletion: ");
	for(i=0;i<len-1;i++){
		printf("%d ",a[i]);
	}     
	return 0;
}
