#include<stdio.h>
		#include<conio.h>
		int main()
		{ 
		  int *ptr,size,i;
//		  printf("\n\n");
		  printf("\nhow  much memory u required\n");
		  scanf("%d",&size);
		  ptr=&size;
		  for(i=1;i<=size;i++)
		  { printf("\nEnter value on %u block\n",ptr);
		    scanf("%d",ptr);
		     ptr++;
		  }
		  ptr=ptr-size;
		  printf("\nDisplay all values\n");
		  for(i=1;i<=size;i++)
		  { printf("%u ---->%d\n",ptr,*ptr);
		    ptr++;
		  }
		  
		  }
