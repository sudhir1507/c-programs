#include <stdio.h> 
int funcf (int x);
int funcg (int y);
main()
{
 int x = 5, y = 10, count;
 for (count = 1; count <= 2;++count)  
{
 y += funcf(x) + funcg(x);  //21 + 
 printf ("%d ", y);
 }
}
funcf(int x)  // x=5
{ int y; 
 y = funcg(x);  // y=5 
 return (y);
}
funcg(int x)
{ static int y = 10; 
  y += 1;  //11
 return (y+x); //16
}

