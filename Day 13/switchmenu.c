#include<stdio.h>
#include<math.h>

int main(){
	int no,ch,a=0,rem,c=0,temp,count=0,flag=0,i,r,sum=0,fact,f;
	printf("Enter the number: ");
	scanf("%d",&no);
	printf("\ncase 1: Amstrong number ");
	printf("\ncase 2: Strong number");
	printf("\ncase 3: Duck number");
	printf("\ncase 4: Perfect number ");
	printf("\ncase 5: prime number ");
	printf("\nEnter the choice: ");
	scanf("%d",&ch);
	temp=no;
	switch(ch){
		case 1:
			for(;no>0;no/=10){
				c++;
			}
	        no=temp;
	        for(;no>0;no/=10){
	        	rem=no%10;
	        	a+=pow(rem,c);
			}
	        if(a==temp){
		         printf("Amstrong");
	        }else{
	        	printf("Not Amstrong");
	        }
	        break;
		case 2:
			temp=no;
			for(;no!=0;no/=10){
			    i=1;
			    fact=1;
			    rem=no%10;  //145 5
			    for(;i<=rem;i++){
			     	fact=fact*i;   //1*1 1*2 2*3 6*4 24*5 120
					   	
				 }
				 sum=sum+fact;
			}
			if(sum==temp){
				printf("Strong number");
	    	}else{
				printf("not strong number");
			}	 
			break;	 
		case 3:
			for(;no!=0;no/=10){
				rem=no%10;
				if(rem==0){
					flag=1;     
				}		
			}
			if(flag){
				printf("Duck Number");
			}else{
				printf("Not Duck Number");
			}
		    break;
		case 4:
			for(i=1; i<(no-1); i++){
				f=no%i;   // 6   1   2   3
				if(f==0){
					sum=sum+i;    //1  3 6
				}
			}
			if(sum==no)
			{
				printf("prefect");
			}
			else{
				printf("not prefect");
			}
			break;
			case 5:
				for(i=2;i<=no;i++){
					if(no%i==0){
						count++;
					}
				}
				if(count==1){
					printf("Number is prime");
				}else{
					printf("Number is not prime");
				}
				break;
			
	}
	}

