#include<stdio.h>
#include<math.h>
int main(){
	float a=11,b=2,c;
//	c=fmod(a,b);
    c=(int)a%(int)b;
	printf("%f",c);
	return 0;
	
}
