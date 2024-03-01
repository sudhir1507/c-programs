#include<stdio.h>

int main() 
{   static char s[ ] = "Oinks Grunts and Guffaws"; 
      printf ("%c\n",*(&s[2])); //n
      printf ("%s\n", s +5) ;  // Grunts and Guffaws
      printf ("%s\n",s);   //oinks Grunts and Guffaws
      printf ("%c\n",*(s +2)) ; //n
      printf ("%d\n",s);  //adress

}

