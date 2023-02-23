/**
* print_numbers - prints char 0 - 9
*
* Return: void
*/

#include "main.h"

void print_numbers(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
