#include<stdio.h>
int main(){
	int no,a,i,j,count;
	printf("enter the number: ");
	scanf("%d",&no);
	for(i=2;i<no;i++)  // 24
	{
		a=no%i;
		if(a==0) //
		{
			count=0;
	       for(j=2; j<=i; j++)
	       {
	       	  if(i%j==0)
	       	  {
	       	  	 count++;
			  }
		   }
		   if(count==1){
				printf("%d ",i);
			} 
		}
		
	}
}
