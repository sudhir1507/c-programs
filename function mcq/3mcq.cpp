#include <stdio.h>
int main()
{ int (*ptr)(int ) = fun; 
(*ptr)(3);
 return 0;
}
int fun(int n)
{ for(;n > 0; n--) 
 printf("GIRI’S TECH HUB PVT.LTD ");
 return 0;
 }
