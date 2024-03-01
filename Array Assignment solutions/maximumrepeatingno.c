#include<stdio.h>
int main(){
	int a[9],i,skey,maximum,j,count,len,max;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	max=0;
	for(i=0;i<len-1;i++){
		count=0;
		for(j=i+1;j<len;j++){			
		if(a[i]==a[j]){
			count++;
		}
	}
	if(count>max){
		max=count;
		maximum=a[i];
	}
   }
   printf("\nMaximum repeating element is %d",maximum);
	return 0;
}
