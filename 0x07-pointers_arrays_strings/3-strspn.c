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
	int i, j, exist;
	unsigned int c;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		exist = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				c++;
				exist = 0;
			}
			if (exist == 1)
				break;
		}
	}
	return (c);
}
