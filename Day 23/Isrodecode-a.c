#include<stdio.h>
int main(){
	int a[12],i,mid,start,end;//={88 87 73 70 36 87 77 36 83 86 87 77};
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter Message:");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}

	start=0;
	mid=len/2;
	end=len-1;
	for(start=0;start<mid;start++){
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			end--;
	}
	printf("Message after decoding :\n");
	for(i=0;i<len;i++){
		printf("%c",a[i]-4);
	}
}
