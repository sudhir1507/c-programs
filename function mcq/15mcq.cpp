#include<stdio.h>
#include<math.h>
int f(int *p, int n)
{
 if (n <= 1)
    return 0;
 else 
    return max(f(p+1,n-1),p[0]-p[1]);
}
int main()
{
 int a[] = {3,5,2,6,4};
 printf("%d", f(a,5));
}


