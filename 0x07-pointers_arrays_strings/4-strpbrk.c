/**
* _strpbrk - search string for any set of bytes
* @s: src str
* @accept: sub string
*
* Return: a pointer to bytes that matches
*/

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
