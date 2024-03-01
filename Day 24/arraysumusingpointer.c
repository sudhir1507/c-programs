//sum of array elements using pointer
//reverse array using pointer
#include<stdio.h>
int main(){
	int a[5],*ptr,sum=0,i;
	ptr=a;
	printf("Enter the Elements: ");
	for(i=0;i<5;i++){
		scanf("%d",ptr);
		ptr++;
	}
	ptr=ptr-5;
	for(i=0;i<5;i++){
		sum=sum+ * ptr;
		ptr++;
	}
	printf("Sum is : %d",sum);
}
