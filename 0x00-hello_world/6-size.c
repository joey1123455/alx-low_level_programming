/**
 * main - prints the sizes of data types in c
 * @ s_int - size of int
 * @ s_dbl - size of double
 * @ s_flt - size of floats
 * @ s_chr - size of char
 *
 * Return: 0 always
*/

#include <stdio.h>

int main(void)
{
	int s_int = sizeof(int);
	int s_LLI = sizeof(long long int);
	int s_flt = sizeof(float);
	int s_chr = sizeof(char);
	int s_LI = sizeof(long int);

	printf("size of char is: %d byte(s)\n", s_chr);
	printf("size of int is: %d byte(s)\n", s_int);
	printf("size of long int is %d bytes(s)\n", s_LI);
	printf("size of long long int is %d bytes(s)\n", s_LLI);
	printf("size of float is %d bytes(s)", s_flt);
	return (0);
}
