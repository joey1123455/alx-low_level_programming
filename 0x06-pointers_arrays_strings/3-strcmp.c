/**
* _strcmp - compare two str 
* @s1: 1st str 2 comp
* @s2: 2nd str 2 comp
* 
* Return: s1 < s2 ? - diff : s1 == s2 ? 0 : s1 > s2 ? + diff
*/

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int a;
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	a = *s1 - *s2;
	return (a);
} 
