/**
* times_table - print 9 times table
*/

#include "main.h"

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if ((k / 10) == 0)
			{
				_putchar((k % 10) + '0');
			} else
			{
				_putchar((k / 10) + '0');
				/*_putchar((k % 10) + '0');*/
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((k / 10) == 0)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
