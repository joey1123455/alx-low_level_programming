/**
* print_sign - prints the sign of an int, either negative or positive
* @n: the integer to be checked
*
* Return: 1 positive else return 0 or -1
*/

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}
