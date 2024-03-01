#include<stdio.h>
int main(){
	int i,j,a[10],k,max,len,l;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the length of contigious array: ");
	scanf("%d",&k);
	i=0;
	while(i<=(len-k)){
		max=a[0];
		for(j=i;j<(i+k);j++){
				if(max<a[j]){
					max=a[j];
				}
				printf("%d ",a[j]);
			}
			printf("--->%d\n",max);
		i++;
		}	
	}
	
	
