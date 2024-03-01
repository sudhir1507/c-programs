#include<stdio.h>
int main(){
	char ch[90];
	int i=0,sum=0,sumn=0,num=0,nodigit=0;
	printf("Enter the string:");
	scanf("%s",ch);
	while(ch[i]!='\0'){
		if(ch[i]>='0'&&ch[i]<='9'){
			sum+=(ch[i]-'0');    //13
			num=num*10+(ch[i]-'0');   // 10
			nodigit++;   //6
		}else{
			sumn+=num;  //12+18+10=40
			num=0;          //abc12kj18kj10
		}
		i++;
	}
	sumn=sumn+num;
	printf("Sum of digit=%d\n",sum);
	printf("Sum of number in string=%d\n",sumn);
    printf("number of digit=%d\n",nodigit);

}
