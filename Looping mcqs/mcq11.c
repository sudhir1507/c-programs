#include<stdio.h>
int main(){
	int x = 3,y,z; 
    z=y=x ; 
    z *= y = x * x ;
    printf ("x = %d y = %d z = %d", x, y, z );
	
}
