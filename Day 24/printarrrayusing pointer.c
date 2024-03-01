//input array and print using pointer
#include<stdio.h>
int main(){
	int a[5],*ptr,i;
	ptr=a;      //ptr=&a[0];
	printf("Enter the Elements: ");
	for(i=0;i<5;i++){            //1000-ptr
		scanf("%d",ptr);
		ptr++;                     //(1000+1*2)=1002
	}
	ptr=ptr-5;     //1010-5*2=1000
	printf("\nArray elements :");
	for(i=0;i<5;i++){
		printf("%u---->%d\n",ptr,*ptr);
		ptr++;
	}
}
