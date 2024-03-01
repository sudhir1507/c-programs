/*The “malloc” or “memory allocation” method in C is used to 
dynamically allocate a single large block of memory with the specified size.
 It returns a pointer of type void which can be cast into a pointer of any form.
  It doesn’t Initialize memory at execution time
 so that it has initialized each block with the default garbage value initially.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// enter the elements of the array
		printf("enter The elements of the array: ");
		for (i = 0; i < n; ++i) {
			scanf("%d",(ptr+i));
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}

