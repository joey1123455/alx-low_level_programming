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
  printf("size of char is: %d byte(s)\n", sizeof(char));
  printf("size of int is: %d byte(s)\n", sizeof(int));
  printf("size of long int is: %d bytes(s)\n", sizeof(long int));
  printf("size of long long int is: %d bytes(s)\n", sizeof(long long int));
  printf("size of float is %d bytes(s)", sizeof(float));
  return (0);
}
