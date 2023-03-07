#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The source string
 * @accept: The prefix substring
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */


int length(char *s);

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c;
	int l;

	l = length(s);
	printf("%d ", l);
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				c++;
			}
		}
		if (i == (l / 2))
			break;
	}
	return (c);
}

int length(char *s)
{
	int i, l;

	for (i = 0; *(s + i) != '\0'; i++)
		l = i;
	return (l);
}
