#include<stdio.h>
int main(){
	int i,a[6],c[6],j,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nNext Bigger Elements are :");
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]<a[j]){
				printf("\nNext Bigger Element of %d in the array is :%d",a[i],a[j]);
				c[i]=a[j];
				break;
			}
		}
}
printf("\nNext Bigger Element of %d in the array is :%d",a[len-1],-1);
printf("\nnext bigger element array: ");
for(i=0;i<len;i++){
	printf("%d ",c[i]);
}
}
