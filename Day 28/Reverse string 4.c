#include<stdio.h>
#include<string.h>
char * rvrString(char *ptr,int l){
	int st,m,ed;
	m=l/2;
	ed=l-1;
	for(st=0;st<m;st++){
		char ch=ptr[st];
		ptr[st]=ptr[ed];
		ptr[ed]=ch;
		ed--;
		}
	return ptr;
}
int main(){
	char ch[40];
	printf("Enter the string :");
	gets(ch);
    int l=strlen(ch);
    printf("lj=%d",l);
	char *p=rvrString(ch,l);
	printf("Reverse string =%s",p);
}
