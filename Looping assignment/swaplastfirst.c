#include<stdio.h>
#include<math.h>
int main(){
	int no,first,last,p,p1,count=0;//4
	printf("Enter the number :");
	scanf("%d",&no);    //1234
	int temp=no;      //1234  
	printf("before swaping number = %d",no); //1234
	while(no!=0)  //  upto 0
	{
		no=no/10;   //1 2 3 4 
		count++;    // 4
	}
	no=temp;   //1234
	
	last=no%10; //1234%10  4
	
	p=pow(10,--count); //1000
	 
	first=no/p;  //1234
	 
	no=no/10; 
	   
	p1=pow(10,--count); 
	 
	no=no%p1;  //123%100  23
	    
	no=last*p + no*10 + first;      // (4*1000)+(23*10)+(1)=  4231
	
	printf("\nafter swaping number = %d",no);
	
}
