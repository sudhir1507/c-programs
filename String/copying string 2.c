#include<stdio.h>
#include<string.h>
char * copystr(char *ch,char *ch1,int l){
	int i;
	for(i=0;i<l;i++){
		ch[i]=ch1[i];
	}
	return ch;
}
int main(){
	char ch[30],ch1[30];
	printf("Enter first string :");
	gets(ch);
	printf("Enter first string :");
	gets(ch1);
	int l=strlen(ch1);
	printf("\nBefore coping string: %s",ch);
	char *p=copystr(ch,ch1,l);
	printf("\nAfter coping string:%s",p);
	return 0;
	
}
