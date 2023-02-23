/**
* _abs - compute absolute value of a variable
* @n: int to be computed
*
* Return: 0 on success
*/

#include "main.h"

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
