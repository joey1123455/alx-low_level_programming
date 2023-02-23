/**
* _isdigit - checks char if its an int
* @c: the char to be checked
*
* Return: 1 if int else 0
*/

#include "main.h"

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
