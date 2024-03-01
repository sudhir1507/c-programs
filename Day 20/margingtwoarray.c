#include<stdio.h>
int main(){
	int i,a[5],b[5],len,j,temp,s,c[10];
	len=sizeof(a)/sizeof(a[0]);
	s=sizeof(c)/sizeof(c[0]);
	printf("enter the first array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of first array : ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}

	printf("\nenter the second array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&b[i]);
	}
	printf("Elements of second array : ");
	for(i=0;i<len;i++){
		printf("%d ",b[i]);
	}
	for(i=0;i<len;i++){
		c[i]=a[i];
	}
	for(j=0;j<len;j++){
		c[i]=b[j];
		i++;
	}
	for(i=0;i<s;i++){
		for(j=i+1;j<s;j++){
			if(c[i]<c[j]){
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
		}
	}
	
	printf("\nElements of array after marging two arrays : ");
	for(i=0;i<s;i++){
		printf("%d ",c[i]);
	}
	
}
