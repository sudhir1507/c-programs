// toggle each charectore of a string
#include<stdio.h>
char toggleStr(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		if(ch[i]>='a'&&ch[i]<='z'){
			ch[i]=ch[i]-32;
		}else if(ch[i]>='A'&&ch[i]<='Z'){
			ch[i]=ch[i]+32;
		}
		i++;
	}
	return ch;
}
int main(){
	char ch[50];
	printf("enter the sting: ");
	gets(ch);
	printf("String before conversion :%s",ch);
	//strupr(ch);
	char p=toggleStr(ch);
	printf("\nString after conversion :%s",ch);
	return 0;
}
