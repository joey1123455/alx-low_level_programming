#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string
 *
 * Return: o for success
 */
int main(void)
{
	int str_err = (0);
	char str[50];
	size_t n_size;

	strcpy(str, "and that piece of art is useful\" - Dora Korpar,
			2015-10-19\n");
	n_size = strlen(buf);
	write(str_err, str, n_size);
	return (0);
}
