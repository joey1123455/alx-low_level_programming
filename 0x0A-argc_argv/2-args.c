/**
* main - prints the name of the function
* @argc: count of arguments passed
* @argv: list of arguments
*
* Return: success ? 0 : 1
*/

#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
