/**
* cap_string - change letters from lower to upper case
* @str: src str
*
* Return: str
*/

#include "main.h"

char *cap_string(char *str)
{
	int i, x;
	char p_c = '\t';
	char w_s[] = {' ', '\t', '\n', ';', '.', '!', '?', '"', '(', ')', 
'}', '{', ',', '\r'};
	char w_s_l = 14;
	char s_c = 0;

	i = 0;
	while (*(str + i) != '\0')
	{
		for(x = 0; x < w_s_l; x++)
		{
			if ((w_s[x]) == p_c)
			{
				s_c = 1;
				break;
			}
			s_c = 0;
		}
			if ((*(str + i) >= 'a' && *(str + i) <= 'z') &&
 s_c)
				*(str + i) = *(str + i) - 6 - 26;
			p_c = *(str + i);
			i++;
	}
	return (str);
}
