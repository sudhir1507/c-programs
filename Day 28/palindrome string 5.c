#include<stdio.h>
#include<string.h>
int  rvrString(char *ptr,int l){
	int i,st,ed,flag=1;
	st=0;
	ed=l-1;
	for(i=0;i<l;i++){
		if(ptr[st++]!=ptr[ed--]){
			flag=0;
			break;
		}
	}
	return flag==1?1:0;
}
int main(){
	char ch[40];
	printf("Enter the string :");
	gets(ch);
    int l=strlen(ch);
	int p=rvrString(ch,l);
	if(p){
		printf("palindrome");
	}else{
		printf("NOT palindrome");
	}
}
