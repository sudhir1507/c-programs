#include<stdio.h>

int main(){
 int i, a[5]={10,20,30,40,50};
 for(i=0;i<5;i++){
 a[i]=(a[i]+20);
 printf("%d\n",a[i]);
 }
return 0;
}

