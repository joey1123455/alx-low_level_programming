/**
 * main - prints a string onto the screen
 *
 * Return: Always 0 (Successs)
 */
#include <unistd.h>

int main(void)
{
	write(2,
	"with proper grammer, but the outcome is a piece of art,\n", 57);
	return (0);
}
