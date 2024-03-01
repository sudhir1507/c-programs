#include<stdio.h>
int main(){
	int p=1,j=1,base,index,*b,*i;
	printf("Enter the base and index: ");
	scanf("%d %d",&base,&index);
	b=&base;
	i=&index;
	while(j<=*i){
		p=p* *b;
		j++;
	}
	printf("%d Power of %d is %d",*i,*b,p);
}
