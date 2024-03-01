#include<stdio.h>
#include<stdio.h>
int main(){
	int no,cno,rem,rev=0,count=0,sum=0,p1,p,last,first,temp;
	printf("Enter the no to perfrom operetions:");
	scanf("%d",&no);
	printf("\nCase 1 : Reverse Number");
	printf("\nCase 2 : Count Digits");
	printf("\nCase 3 : Calculate Sum of Digits");
	printf("\nCase 4 : Calculate sum of only even number from Digits");
	printf("\nCase 5 : Swap first and last digits of Number");
	printf("\nEnter the case :");
	scanf("%d",&cno);
	
	switch(cno){
		case 1:
			temp=no;
	        while(no!=0){
		        rem=no%10;
		        rev=rev*10+rem;
		        no=no/10;
	        }
	        printf("reverse of %d is %d ",temp,rev);
	        break;
	    case 2:
	        while(no!=0){
	        	no=no/10;
	        	count++;
			}
			printf("Number of digits is %d",count);
	    	break;
		case 3:
	        while(no!=0){
		        rem=no%10;
		        sum=sum+rem;
		        no=no/10;
	        }
			printf("Sum of digit is %d",sum);
	        break;
	        
	    case 4:
	        while(no!=0){
		        rem=no%10;
		        if(rem%2==0){
		        sum=sum+rem;
		    }
		        no=no/10;
	        }
			printf("Sum of only even digits is %d",sum);
	        break;
	    case 5:
	    	temp=no;
	        printf("before swaping number = %d",no);
	        while(no!=0){
				no=no/10;
				count++;
			}
			no=temp;
			last=no%10;
			p=pow(10,--count);
			first=no/p;
			no=no/10;
			p1=pow(10,--count);
			no=no%p1;
			no=last*p + no*10 + first;
			printf("\nafter swaping number = %d",no);
	        break;
	    	
	}
	return 0;
}
