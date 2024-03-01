#include<stdio.h>
#include<string.h>
int main(){  
      static char str[ ] = "For your eyes only";
      int i; 
      char *p; 
      for (p = str, i = 0 ; p + i <= str + strlen (str); p++, i++)
           printf ("%c", *( p + i)) ; 
     
}

