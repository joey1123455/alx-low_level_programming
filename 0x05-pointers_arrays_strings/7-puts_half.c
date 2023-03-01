#include "main.h"

/**
* puts_half - prints 2nd hlf of str
* @str: str to print
*
* Return: void
*/

void puts_half(char *str)
{
	int x, y;

	y = 0;
	
	while (*(str + y) != '\0')
		y++;
	x = y % 2 == 0 ? y / 2 : (y / 2) + 1;
	while (x < y)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
