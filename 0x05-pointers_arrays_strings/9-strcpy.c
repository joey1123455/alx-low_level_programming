#include "main.h"
/**
* _strcpy - cpy 1 str 2 another
* @dest: str to copy 2
* @src: str to copy 4rm
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int x = 0;

	while (s != 1)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) != '\0')
			x++;
		else
			s = 1;
	}
	return (dest);
}
