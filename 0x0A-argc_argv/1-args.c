/**
* main - prints no of arguments passed
* @argc: no of args
* @argv: list of arguments
*
* Return: success ? 0 : 1
*/

#include "main.h"

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i = 0;
	int j = argc;

	while (j > 1)
	{
		if (i == (j - 1))
			break;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
