#include<iostream>
using namespace std;

//	static int no;
class A{
	
	protected:
	int no;
	public:
	virtual void setv(int no)=0;
	virtual int sh()=0;		
};
class B : public A{
	protected:
		int no;
	public:
		void setv(){
			this->no=no;
		}
		int sh(){
		return no;	
		}
};
class C : public B{
	
	public:
		
		int sh(){
			
			return no;
		}
};
int main(){
	
	A *a;
	a=new B();
	a->setv(10);
	cout<<"\nReturn Value in b:"<<a->sh();
	a=new C();
	//a->setv()
	cout<<"\nReturn Value: in c"<<a->sh();
	
	return 0;
}
