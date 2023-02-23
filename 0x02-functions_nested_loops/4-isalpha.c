/**
* _isalpha - checks to see if a char is an alphabet
* @c: the character to be checked
*
* Return: 1 if it is an alphabet else 0
*/

#include "main.h"

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
