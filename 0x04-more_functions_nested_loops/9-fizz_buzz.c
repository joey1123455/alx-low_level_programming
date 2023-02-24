/**
* main - prints fizz buzz solution
*
* Return: 0 on success
*/

#include "main.h"

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (1 < 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
