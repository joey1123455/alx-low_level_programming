/**
* print_numbers - prints char 0 - 9
*
* Return: void
*/

#include "main.h"

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 52 && i != 50)
			_putchar(i);
	}
	_putchar('\n');
}
