//10 total no of words in string
#include<stdio.h>
int count=1,i=0;
int countwords(char ch[]){
	if(ch[i]!='\0'){
		if(ch[i]==' '){
			count++;
		}
		i++;
		return countwords(ch);
	}else{
		return count;
	}
	
}
int main(){
	char ch[50];
	printf("enter the sting: ");
	gets(ch);
	int c=countwords(ch);
	printf("Total number of Words : %d",c);
	return 0;
}
