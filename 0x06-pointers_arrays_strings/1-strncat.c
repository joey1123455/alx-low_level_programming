/**
* _strncat - concat 2 str
* @dest: destination str
* @src: the str to concat
* @n: max no of chars frm src
*/

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int d_l = 0;
	int s_l = 0;

	while (*(dest + d_l) != '\0')
		d_l++;
	while (*(src + s_l) != '\0' && s_l < n)
	{
		*(dest + d_l + s_l) = *(src + s_l);
		s_l++;
	}
	*(dest + d_l + s_l) = '\0';
	return (dest + 0);
}
