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
	int i;

	for (i = 0; i >= n / 2; i--)
	{
		t = *(a + (n - i -1));
		*(a + (n - i - 1)) = *(a + i);
		*(a + i) = t;
	}
}
