/**
* main - uses the _putchar from the main.h header
*
* Return: 0 on success
*/

#include "main.h"

int main(void)
{
	char s[9] = "_putchar\n";
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(s[i]);
	return (0);
}
