/**
* _strlen - lenght of str
* @s: str var
*
* Return: len of str
*/

#include "main.h"

int _strlen(char *s)
{
	int a;

	a = 0;
	for (a = 0; *s++;)
		a++;
	return (a);
}
