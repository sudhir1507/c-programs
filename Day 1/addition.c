#include<stdio.h>
struct temp
{
	 int x;
	 double y;
};
int main(){
	struct temp * tt;
	
	printf("size of *tt %d",sizeof(struct temp));
	return 0;
	
}
