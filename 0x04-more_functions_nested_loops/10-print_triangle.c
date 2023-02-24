/**
* print_triangle - prints a triangle
* @size: triangle size
*/

#include "main.h"

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j < size; i++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
