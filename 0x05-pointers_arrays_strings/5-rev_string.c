#include "main.h"
 
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
	l = 0;
	while (*(s + l) != '\0')
		l++;
	for (x; x < l / 2; x++)
	{
		char t = *(s + l - x -1);
		*(s + l - x - 1) = *(s + x);
		*(s + x) = t;
	}
}
