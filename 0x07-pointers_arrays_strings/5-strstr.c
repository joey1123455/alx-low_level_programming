/**
* _strstr - locates substr in a str
* @haystack: the str
* @needle: substr
*
* Return: substr ? substr : 0
*/

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0' && *(needle + j) == 
*(haystack + i + j); j++)
		{
			if (*(needle + j) == '\0')
				return ((haystack + i));
		}
	}
	return(*(needle + j) == '\0' ? haystack + i : 0);
}
