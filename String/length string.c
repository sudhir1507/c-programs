#include<stdio.h>
//#include<string.h>
int count=0;
int stringlen(char ch[]){
	if(ch[count]!='\0'){
		count++;
		return stringlen(ch); 
	}else{
		return count;
	}
}
int main(){
	char ch[50];
	printf("Enter string: ");
	gets(ch);
	//int l=strlen(ch);
	int l=stringlen(ch);
	printf("Length of string : %d",l);
}
