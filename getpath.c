#include "header.h"
/**
 * getpath - function returns path
 * @environ: environment variable
 * Return: tokpa
 */

char **getpath(char **environ)
{
	int i;
	char **tokpa;

	for (i = 0 ; environ[i] != NULL ; i++)
	{
		if (environ[i][0] == 'P' && environ[i][2] == 'T')
		{
			tokpa = tokpath(environ[i]);
		}
	}
	return (tokpa);
}
/**
 * tokpath - function that creates tokens of directory
 * @fpat: pointer path
 * Return: tokpat
 */

char **tokpath(char *fpat)
{
	int count = 0;
	char *usep = NULL;
	char **tokpat = _calloc(sizeof(char *), 64);
	char *fpat_copy = NULL;

	if (tokpat == NULL)
		return (NULL);

	fpat_copy = _strdup(fpat);
	usep = strtok(fpat_copy, "=:");

	while (usep != NULL)
	{
		tokpat[count] = usep;
		count++;
		usep = strtok(NULL, "=:");
	}
	return (tokpat);
}
