//reverse array using pointer
#include<stdio.h>
int main(){
	int a[5],*ptr,s,mid,i;
	int len=sizeof(a)/sizeof(a[0]);
	ptr=a;
	printf("Enter the Elements: ");
	for(i=0;i<5;i++){
		scanf("%d",ptr);
		ptr++;
	}
	ptr=ptr-5;
	printf("\nArray elements:");
	for(i=0;i<5;i++){
		printf("%u---->%d\n",ptr,*ptr);
		ptr++;
	}
	ptr=ptr-5;
	mid=len/2;
	for(s=0;s<mid;s++){
	    int temp=*(ptr+s);
	   *(ptr+s)=*(ptr+len-1-s);
	   *(ptr+len-1-s)=temp;
	}
	printf("\nArray elements after reverse :");
	for(i=0;i<5;i++){
		printf("%u---->%d\n",ptr,*ptr);
		ptr++;
	}	
}

