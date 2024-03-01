#include<stdio.h>
 int calAdd(int a,int b){
 	return a+b;
 }
 int calSub(int a,int b){
 	return a-b;
 }
 int calMulti(int a,int b){
 	return a*b;
 }
 int calDiv(int a,int b){
 	return a/b;
 }
 int calMod(int a,int b){
 	return a%b;
 }
int main(){
	int a,b;
	printf("enter the a and b:");
	scanf("%d%d",&a,&b);
	int add=calAdd(a,b);
	int sub=calSub(a,b);
	int multi=calMulti(a,b);
	int div=calDiv(a,b);
	int mod=calMod(a,b);
	printf("Addition is : %d\n",add);
	printf("Subtraction is : %d\n",sub);
	printf("Multiplication is : %d\n",multi);
	printf("Division is : %d\n",div);
	printf("Modulo is : %d\n",mod);
	return 0;
}
