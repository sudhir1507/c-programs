#include<iostream>
using namespace std;
//int i=0;// global Varibale
void show(){
//	static int i=0; //
	if(i<=5)
	{
		cout<<"\nHi";
		i++;
		show();
	}else{
		cout<<"Stop";
	}
}
int main(){
	show();
}
