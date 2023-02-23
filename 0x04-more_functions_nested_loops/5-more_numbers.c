/**
* more_numbers - prints char 1-14 10 times
*
* Return: void
*/

#include "main.h"

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 11)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(i / 10 + '0');
			else
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
