/**
* _islower - checks the case of a value
* @c: character to be checked
*
* Return: 1 if c is lowercase
*/

#include "main.h"
#include <stdio.h>

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
