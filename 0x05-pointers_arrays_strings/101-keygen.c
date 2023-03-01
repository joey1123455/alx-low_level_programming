#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - gen rand valid pass
*
* Return: 0 if success
*/

int main(void)
{
	int n;
	int l = '!';
	int c_r = 90;
	int u = l + c_r;
	int s = 2772;
	int c_s = 0;

	srand(time(0));
	while (c_s < s - u)
	{
		n = l + (int)(((double)rand() / RAND_MAX) * c_r);
		putchar(n);
		c_s += n;
	}
	if (c_s != s)
		putchar(s - c_s);
	putchar('\n');
	return (0);
}
