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
	while (i < 10)
	{
		for (j = '0'; j < '15'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
