/**
 * main - prints the sizes of data types in c
 *
 * Return: 0 always
*/

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", Sizeof(char));
	printf("Size of an int: %ld byte(s)\n", Sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", Sizeof(float));
	return (0);
}
