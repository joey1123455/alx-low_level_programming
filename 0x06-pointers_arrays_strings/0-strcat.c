/**
* _strcat - concate 2 str
* @dest: destination string
* @src: source str
*
* Return: dest
*/

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int d_l = 0;
	int s_l = 0;

	while (*(dest + d_l) != '\0')
	{
		d_l++;
	}
	while (*(src + s_l) != '\0')
	{
		*(dest + (d_l + s_l)) = *(src + s_l);
		s_l++;
	}
	*(dest + d_l + s_l) = '\0';
	return (dest);
}
