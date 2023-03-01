#include "main.h"
/**
* puts2 - print every other char
* @str: str to print
*
* Return: void
*/

void puts2(char *str)
{
	int x;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
