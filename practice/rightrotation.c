#include<stdio.h>
int main(){
	int a[10],i,temp,len,p,pos;
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the element: ");
	for(i=0;i<len;i++){
	   scanf("%d",&a[i]);
	}
	printf("Enter the positions to be shifted: ");
	scanf("%d",&pos);
	p=pos;
	while(pos){
		temp=a[len-1];
		for(i=len-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
		pos--;
	}
	printf("\n Array after right rotation by %d positions: ",p);
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}	
}
