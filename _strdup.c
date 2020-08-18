#include "header.h"
/**
 *_strdup - function
 *@str: char
 *Return: 0
 */
char *_strdup(char *str)
{
	unsigned int len = 0, len1 = 0;
	char *a = NULL;

	if (!str)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	else
	{
		for (; str[len1]; len1++)
			a[len1] = str[len1];
		a[len1] = '\0';
	}
	return (a);
}
