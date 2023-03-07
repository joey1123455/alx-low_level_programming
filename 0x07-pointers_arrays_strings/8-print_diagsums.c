/**
* print_diagsum - prints sum of 2 diagonals
* @a: 2d arr of  ints
* @size: size on arr
*
*/

#include "main.h"
#include <stdio.h>

void print_diagsum(int *a, int size)
{
	int k;
	int i = 0;
	int j = size - 1;
	long s1 = 0;
	long s2 = 0;

	for (k = 0; k < size; k++)
	{
		s1 += *(a + i);
		s2 += *(a + j);
		i += size + 1;
		j += size - 1;
	}
	printf("%ld, %ld\n", s1, s2);
}
