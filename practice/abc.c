#include<stdio.h>
#include<math.h>
int main(){	
  int i,k,sum,no,fact,rem,limit=200,count=0;
  for(k=1;k<=limit;k++){
  no=k;
  sum=0;
  for(i=1;i<no;i++){
  	   if(no%i==0){
  	   	 sum=sum+i;
		 }	 
  }
  if(sum==k)
        printf("%d ",k);
   	
}
	}
	 

