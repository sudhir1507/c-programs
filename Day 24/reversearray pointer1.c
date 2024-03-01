//reverse array using pointer
#include<stdio.h>
int main(){
	int a[5],*ptr,s,mid,i,end;
	int len=sizeof(a)/sizeof(a[0]);
	ptr=a;
	printf("Enter the Elements: ");
	for(i=0;i<5;i++){
		scanf("%d",(ptr+i));        //1000+1*2=1002
	}
	mid=len/2;  //2
	end=len-1;   //4      12345  52341
	for(i=0;i<mid;i++)
	{
	    int temp=*(ptr+i);    //1000+0*2=1000 1002
	   *(ptr+i)=a[end];
	      a[end]=temp;
	      end--;
	}
	printf("\nArray elements after reverse :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}	
}

