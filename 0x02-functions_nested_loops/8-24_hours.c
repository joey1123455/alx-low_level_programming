#include "main.h"

/**
* jack_bauer - prints a 24 hr clock
*/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + ':');
			for (k = 0; k <= 9; k++)
			{
				_putchar(k);
				for (l = 0; l <= 9; l++)
				{
					_putchar(l);
				}
			}
		}
	}
}
