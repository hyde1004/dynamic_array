#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int** a = NULL;

	a = (int **) malloc(3*sizeof(int *));

	a[0] = (int *) malloc(10*sizeof(int));
	a[1] = (int *) malloc(10*sizeof(int));
	a[2] = (int *) malloc(10*sizeof(int));

	a[0][0] = 110;
	a[0][1] = 120;
	a[0][2] = 130;

	printf("a[0][0] = %d\n", a[0][0]);
	printf("a[0][1] = %d\n", a[0][1]);
	printf("a[0][2] = %d\n", a[0][2]);
	printf("\n");

	a[1][0] = 210;
	a[1][1] = 220;
	a[1][2] = 230;

	printf("a[1][0] = %d\n", a[1][0]);
	printf("a[1][1] = %d\n", a[1][1]);
	printf("a[1][2] = %d\n", a[1][2]);
	printf("\n");

	a[2][0] = 310;
	a[2][1] = 320;
	a[2][2] = 330;

	printf("a[2][0] = %d\n", a[2][0]);
	printf("a[2][1] = %d\n", a[2][1]);
	printf("a[2][2] = %d\n", a[2][2]);

	free(a[0]);
	free(a[1]);
	free(a[2]);
	
	free(a);
	
	return 0;
}
