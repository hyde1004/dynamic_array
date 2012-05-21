#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int (*a) = NULL;
	a = (int *) malloc(10*sizeof(int));

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	printf("a[0] = %d\n", a[0]);
	printf("a[1] = %d\n", a[1]);
	printf("a[2] = %d\n", a[2]);

	return 0;
}
