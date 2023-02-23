/*
* largest_number - returns largest 3 no
* @a: first int
* @b: second int
* @c: third int
*
* Return: largest no
*/

#include "main.h"

int largest_number(int a, int b, int c)
{
	int lx;

	lx = a;
	if (b > lx)
		lx = b;
	if (c > lx)
		lx = c;
	return (lx);
}
