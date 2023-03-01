/**
* print_rev - print rev of str
* @s: str to rev
*
* return: void
*/

#include "main.h"

void print_rev(char *s)
{
	int x;
	int y;

	x = 0;
	while (s[x] != '\0')
		x++;
	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
