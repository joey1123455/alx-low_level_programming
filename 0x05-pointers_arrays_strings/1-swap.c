#include "main.h"

/**
* swap_int - derefrence the value of to int to each other
* @a: first var
* @b: second var
*
* Return: void
*/


void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*a = s;
}
