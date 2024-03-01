#include<stdio.h>
void getCount(char str[]){
	int i=0,cnt=0,cnt1=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		    cnt++;
		}else if(isalpha(str[i])){
			cnt1++;
		}
		i++;
	}
	printf("Number of Vowels=%d",cnt);
	printf("\nnumber of consonent=%d",cnt1); 
}
int main(){
	char str[30];
	printf("Enter the String: ");
	gets(str);
    getCount(str);
	return 0;
}
