#include<stdio.h>
#include<string.h>
int checkAnagram(char first[],char second[],int f,int s){
	int flag=1,i,j;
	if(f==s){
		for(i=0;i<f;i++){
			for(j=(i+1);j<f;j++){
				if(first[i]>first[j]){
					char temp=first[i];
					first[i]=first[j];
					first[j]=temp;
				}
				if(second[i]>second[j]){
					char temp=second[i];
				    second[i]=second[j];
				    second[j]=temp;
				}
			}
		}
		//perform comparision
		for(i=0;i<f;i++){
			 if(first[i]!=second[i])
			 {  flag=0;
			 	break;
			 }
		}
		return flag?1:0;
	}
	else{
		return 0;
	}
}
int main(){
 char name[90],name1[90];
 printf("Enter first string\n");
 //scanf("%s",&name);
 gets(name);
 printf("\nEnter second string\n");
 //scanf("%s",&name1);
 gets(name1);
 int f=strlen(name);
 int s=strlen(name1);
 int result=checkAnagram(name,name1,f,s);
 if(result){
 	printf("Strings are anagram");
 }
 else{
 	printf("Strings are not anagram");
 }
return 0;
}

