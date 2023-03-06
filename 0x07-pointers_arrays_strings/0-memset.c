/**
* *_memset - fills an array with a const char
* @s: dest var
* @b: const char
* @n: no of fills
*
* Return: poin 2 s
*/

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i >= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
