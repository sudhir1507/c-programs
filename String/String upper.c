// strupr() function is used for convert lower case string to upper case string.
#include<stdio.h>
//#include<string.h>
int i=0;
char * myUpperStr(char *ptr){
	if(ptr[i]!='\0'){
		if(ptr[i]>='a'&&ptr[i]<='z'){
			ptr[i]=ptr[i]-32;
		}
		++i;
		return myUpperStr(ptr); 
	}else{
		return ptr;
	}
}
int main(){
	char ch[50];
	printf("enter the sting: ");
	gets(ch);
	printf("String before conversion :%s",ch);
	//strupr(ch);
	char *p=myUpperStr(ch);
	printf("\nString after conversion :%s",ch);
	return 0;
}
