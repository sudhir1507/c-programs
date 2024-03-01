#include<stdio.h>
#include<string.h>
char * copystr(char ch[],char ch1[],int l){
	int i=0;
	while(ch[i]!='\0'){
		ch[l]=ch1[i];
		l++;
		i++;
	}
	return ch;
}
int main(){
	char ch[30],ch1[30];
	printf("Enter first string :");
	gets(ch);
	printf("Enter first string :");
	gets(ch1);
	int l=strlen(ch);
	printf("\nBefore coping string: %s",ch);
	char *p=copystr(ch,ch1,l);
	printf("\nAfter coping string:%s",p);
	return 0;
	
}
