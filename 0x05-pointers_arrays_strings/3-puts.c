/**
* _puts - print str with new line
* @str: str to print
*
* Return: void
*/

#include "main.h"

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
