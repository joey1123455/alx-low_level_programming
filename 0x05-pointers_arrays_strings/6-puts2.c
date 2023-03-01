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

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
