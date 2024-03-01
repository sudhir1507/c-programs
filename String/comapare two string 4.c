#include<stdio.h>
#include<string.h>
int comparestr(char ch[],char ch1[],int len1,int len2){
	int i,flag=1;
	if(len1!=len2){
		return 0;
	}
	else{
		for(i=0;i<len1;i++){
			if(ch[i]!=ch1[i]){
				flag=0;
				break;
			}
		}
		return flag==1?1:0;
	}
}
int main(){
	char ch[30],ch1[30];
	printf("Enter the first string: ");
	gets(ch);
	int len1=strlen(ch);
	printf("\Enter the second string: ");
	gets(ch1);
	int len2=strlen(ch1);
	int c=comparestr(ch,ch1,len1,len2);
	if(c){
		printf("Two strings are Equeal");
	}else{
		printf("Two strings are NOT Equeal");
}
}
