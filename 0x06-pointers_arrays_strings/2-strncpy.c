/**
* _strncpy - copies a str and pads with null bytes if necessary
* @dest: destination of the copied str
* @src: the str containign str 2 append
*
* Return: dest
*/

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char nul = 0;

	while (i < n)
	{
		nul = *(src + i) == '\0' && !nul ? 1 : nul;
		*(dest + i) = nul ? '\0' : *(src + i);
		i++;
	}
	return (dest);
}

