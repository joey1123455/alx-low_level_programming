/**
* _memcpy - copies memory from src to dest
* @src: source
* @dest: destination
* @n: no of copies
*
* Return: dest
*/

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
