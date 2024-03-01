#include<stdio.h>
#include<math.h>
int main(){
	int i,no,choice,first=0,second=1,next,term,rev=0,n,p1,p,firstno,last,count,temp;
	char ch;
	printf("\nCase 1 : All alphabets: ");
	printf("\nCase 2 : All Ascii characters : ");
	printf("\nCase 3 : swap middle number : ");
	printf("\nCase 4 : Fabbonci series : ");
	printf("\nEnter  choice :");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			ch='A';
			do{
				printf("%c ",ch);
				ch++;
			}while(ch<='Z');
			break;
		case 2:
			ch=1;
			do{
				printf("%c ",ch);
				ch++;
			}while(ch<127);
			break;
		case 3:
			printf("Enter the number: ");
			scanf("%d",&no);
			temp=no;
			count=0;
			do{
				no=no/10;
				count++;
			}while(no!=0);
			no=temp;
			last=no%10;
			p=pow(10,--count);
			firstno=no/p;
			no=no/10;
			p1=pow(10,--count);
			no=no%p1;
			do{
				rev=rev*10+no%10;
				no/=10;
			}while(no!=0);
			n=firstno*p+rev*10+last;
			printf("%d",n);
			break;
		case 4:
			printf("Enter the no of term: ");
			scanf("%d",&term);
			printf("%d %d ",first,second);
			i=3;
			do{
				next=first+second;
				printf("%d ",next);
				first=second;
				second=next;
				i++;
			}while(i<=term);
			
			
	}
}
