#include "header.h"
/**
 *str_concat - function
 *@s1: char
 *@s2: char
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0, len1 = 0, a;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len))
	{
		len++;
	}
	while (*(s2 + len1))
	{
		len1++;
	}
	str = malloc((len + len1 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < len; a++)
	{
		*(str + a) = *(s1 + a);
	}
	for (a = 0; a <= len1; a++)
	{
		*(str + len) = *(s2 + a);
		len++;
	}

	return (str);
}
