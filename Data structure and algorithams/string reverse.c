#include<stdio.h>
char* revers(char *ptr,int len){
	int i,m=len/2,l=len-1;
	for(i=0;i<m;i++){
		char temp=ptr[i];
		ptr[i]=ptr[l];
		ptr[l]=temp;
		--l;
	}
	return ptr;
}
int main(){
	char ch[30];
	printf("Enter string:");
	gets(ch);
	int len=strlen(ch);
	char *p=revers(ch,len);
	printf("%s",p);
}
