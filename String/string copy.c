//strcpy()
#include<stdio.h>
//#include<string.h>
int i=0;
char * myStrCopy(char *ch[],char *ch1[]){
	while(ch[i]!='\0'){
		ch[i]=ch1[i];
		i++;
	}
	return ch;
}
int main(){
	char ch[50],ch1[50];
	printf("Enter the first String: ");
	gets(ch);
	printf("Enter the second String: ");
	gets(ch1);
	printf("Before coping ch :%s",ch);
	//strcpy(ch,ch1);
	char *ptr=myStrCopy(ch,ch1);
	printf("\nafter coping ch :%s",ptr);
	return 0;
}
