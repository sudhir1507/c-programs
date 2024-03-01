#include<stdio.h>
int getLength(char str[]){
	int i=0,cnt=0;
	while(str[i]!='\0'){
		if(str[i]!=' '){
			cnt++;
		}
	      i++;
	}
	return cnt;
}
int main(){
	char str[30];
	printf("Enter the String: ");
	gets(str);
    int l=getLength(str);
	printf("Length of Str :%d",l);
}
