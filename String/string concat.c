/*You have design your own function and pass two strings as parameter
 and concat them without using any inbuilt function and return resultant string 
at function calling point and perform this operation using a recursion*/
#include<stdio.h>
//#include<string.h>

int getlength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
int cnt=0;
char * myConcatstr(char ch[],char ch1[],int flen){
	if(ch1[cnt]!='\0'){
		ch[flen++]=ch1[cnt++];
		return myConcatstr(ch,ch1,flen);
	}else{
		return ch;
	}
}
int main(){
	char ch[50],ch1[50];
	printf("Enter the first String: ");
	gets(ch);
	printf("Enter the second String: ");
	gets(ch1);
	printf("Before concanating ch :%s",ch);
	//strcat(ch,ch1);
	int flen=getlength(ch);
	char *p=myConcatstr(ch,ch1,flen);
	printf("\nafter concanating ch :%s",ch);
	return 0;
	
}
