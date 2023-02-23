/**
* main - uses the _putchar from the main.h header
*
* Return: 0 on success
*/

#include "main.h"

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
