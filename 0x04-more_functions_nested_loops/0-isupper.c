/**
* _isupper - confirms if a character is uppercase
* @c: char to be confirmed
*
* Return: 1 if upper else 0
*/

#include "main.h"

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
