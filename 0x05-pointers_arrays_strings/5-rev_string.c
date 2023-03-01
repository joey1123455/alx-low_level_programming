#include "main.h"
/**
* swap - swap chars
* @a: first char
* @b: 2nd char
*
* Return: void
*/

void swap(char *a, char *b)
{
	char s;
	s = *a;
	*a = *b;
	*b = s;
}

/**
* rev_string - reverse a string
* @s: 
*
* Return: void
*/

void rev_string(char *s)
{
	int x;
	int l;

	x = 0;
	l = _strlen(s);
	if (x > l)
	{
		swap(s + l, s + x);
		l--;
		x++;
	}
}
