/**
* print_line - prints a line using _
* @n: number of _
*
* Return: void
*/

#include "main.h"

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
