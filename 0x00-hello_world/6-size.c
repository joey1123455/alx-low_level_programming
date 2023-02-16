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
	int s_dbl = sizeof(double);
	int s_flt = sizeof(float);
	int s_chr = sizeof(char);

	printf("size of int type is %d\n", s_int);
	printf("size of double type is %d\n", s_dbl);
	printf("size of float type is %d\n", s_flt);
	printf("size of char type is %d\n", s_chr);
	return (0);
}
