//Q. what will be the output of given code?
#include<stdio.h> 
int f(int n, int k)
{  //20 1
 if (n == 0)
    return 0;
 else if (n % 2)
     return f(n/2, 2*k) + k;  
 else 
    return f(n/2, 2*k) - k;  // 10 2 - 1 //5 2 
}
int main ()
{
 printf("%d", f(20, 1));
 return 0;
}
