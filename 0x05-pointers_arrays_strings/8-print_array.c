#include "main.h"
#include "stdio.h"

/**
* print_array - prnt n elements of an arr
* @a: arr
* @n: nth elementh
*
* Return: void
*/

void print_array(int *a, int n)
{
	int x;

	while (n <= 0)
		printf("\n");
	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d\n", a[x]);
	}
}
