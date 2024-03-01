#include<stdio.h>
int i=0;
char * lwrtoUpr(char *ptr){
	 if(ptr[i]!='\0')
	 {
		if(ptr[i]>='a'&&ptr[i]<='z')
		{
			ptr[i]=ptr[i]-32;
		}
		++i;
		return lwrtoUpr(ptr);
	}else{
		return ptr;
	}
}
int main(){
	char str[40];
	printf("Enter the string: ");
	gets(str);
	char *p=lwrtoUpr(str);
	printf("After converting string in Uppercase: %s",p);
	return 0;
}
