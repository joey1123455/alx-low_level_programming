/**
 * main - prints the sizes of data types in c
 *
 * Return: 0 always
*/

#include <stdio.h>

int main(void)
{
	printf("Size of char is: %ld byte(s)\n", sizeof(char));
	printf("Size of int is: %ld byte(s)\n", sizeof(int));
	printf("Size of long int is: %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int is: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of float is: %ld bytes(s)", sizeof(float));
	return (0);
}
