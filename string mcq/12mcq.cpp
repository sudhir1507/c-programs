#include<stdio.h>

int main() 
{ static char s[251] = "The cocaine man"; 
    int i = 0 ; 
    char ch; 
    ch = s[++i]; 
    printf ("%c%d\n", ch,i); // h 1
    ch = s[i++]; 
    printf ("%c %d\n", ch,i); //h 2
    ch = i++[s]; 
    printf ("%c%d\n", ch, i) ;  //e 3
    ch = ++i[s] ; 
     printf ("%c%d\n", ch,i); //c 4
   
}

