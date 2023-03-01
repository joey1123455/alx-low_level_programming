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

	y = _strlen(str);
	if (y % 2 == 0)
	{
		x = y / 2;
	} else
	{
		x = (y + 1) / 2;
	}
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

/**
* _strlen - len of str
* @s: str
*
* Return: len of str
*/

int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; s[x] != '\n'; x++)
		y += 1;
	return (y);
}

