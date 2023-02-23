/**
* print_times_table - prints times table
* @n number of rows
*/

#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
	int prod, mul, n1;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 <= n; ++n)
		{
			_putchar(48);
			for (mul = 1; mul <= n; ++mul)
			{
				_putchar(',');
				_putchar(' ');
				prod = n1 * mul;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');

		}
	}
}
