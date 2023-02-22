/**
* main - uses the _putchar from the main.h header
*
* Return : o on success
*/

#include <stdio.h>

int main (void)
{
	char s[8] = "_putchar";
	int i = 0;

	for (i; i <= 8; i++)
		putchar(s[i]);
		return (0);
}
