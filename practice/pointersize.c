#include<stdio.h>
	
		int main()
		{ 
		  void *ptr;
		  int a=100;
		  float f=5.6;
		  char ch='q';
		  ptr=(int*)&a;
		 
//		  ptr=(float*)&f;
		 printf("Value of a:%d\n",*(int*)ptr);
		  printf("size of pointer : %d\n",sizeof((int*)ptr));
		  printf("Adrress of a: %u\n",(int*)ptr);
		  ptr++;
		  ptr=(char*)&ch;
		  printf("size of pointer : %d\n",sizeof((char*)ptr));
          printf("Adrress of ch: %u\n",(char*)ptr);
		  printf("Value of ch: %c",*(char*)ptr);
		  
  }
