/**
* string_upper - change all lower case to upper
* @str: src str
*
* Return: upper(str)
*/

#include "main.h"

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = *(str + i) - 6 - 26;
		i++;
	}
	return (str);
}
