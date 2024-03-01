//13 reverse order of words in a given string
#include<stdio.h>
#include<string.h>
void reverse(char* start,char* end){
	for(start;start<end;start++){
		char temp=*start;
		*start=*end;
		*end=temp;
		end--;
	}
}
int main(){
	char str[50];
	printf("enter the sting: ");
	gets(str);
	char* ind=&str[0];
	char* newword=&str[0];
	while(*ind){
		if(*ind==' '){
			reverse(newword,ind-1);
			newword=ind+1;
		}
		ind++;
	}
	reverse(newword,--ind);
reverse(&str[0],ind);
printf("%s",str);
	return 0;
}
