/**
* main - prints lowercase char using _putchar
*
* Return: 0 on success
*/

#include "main.h"

int main(void)
{
	int i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
