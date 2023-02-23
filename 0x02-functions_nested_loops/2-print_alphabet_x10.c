/**
* print_alphabet_x10 - prints 10 sets of lower case letters
*
* Return: void
*/

#include "main.h"

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
