#include<stdio.h>
#include<string.h>
int main()
{    static char a[ ] = "Able was I ere I saw elbA"; 
    char *t, *s, *b; 
    s = a ; 
    b = a + strlen (a ) -1 ; 
    t = b; 
    while (s != t) 
    {  printf ("%c",*s); 
         s++; 
         printf ("%c",*t); 
           t--;
      } 
     
}

