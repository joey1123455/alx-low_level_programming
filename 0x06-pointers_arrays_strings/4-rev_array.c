/**
* reverse_array - reverse the cont of an array
* @a: arr of ints
* @n: no of elements in arr
*
* Return: void
*/

#include "main.h"

void reverse_array(int *a, int n)
{
	int t;
	int i = n -1;

	for (i; i >= n / 2; i--)
	{
		t = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = t;
	}
}
