#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	i=j=k=1;
	int a[5]={10, 20,30,40,50};
	int b=a [1];
	b+=10;  //30
	a[i+1]=--b+1;     //b=29 
	int c=a[j++];   //c=20
	int d=a[j+1]; //40
	printf("B= %d\tC=%d\tD=%d\n",b,c,d);	
	return 0;
}

