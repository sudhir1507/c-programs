#include<stdio.h>
int fun()
{
 static int num = 16; 
 return num--;
}
int main()
{
 for(fun(); fun(); fun())   // hare numis static and postfix operation is there fun called and then value decremnt
    printf("%d ", fun());
    return 0;
}

