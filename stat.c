#include "header.h"
/**
 *_stat - verifies validity of file
 * @bftoken: double pointer of strings
 * @pat: pointer path
 * Return: 0 or 1
 */
int _stat(char **bftoken, char **pat)
{
	char *newval = NULL, *newval2 = NULL;
	int i;

	struct stat sb;

	for (i = 1 ; pat[i] != NULL ; i++)
	{
		newval = str_concat(pat[i], "/");
		newval2 = str_concat(newval, bftoken[0]);

		if (stat(newval2, &sb) == 0)
		{
			bftoken[0] = newval2;
			free(newval);
			free(pat[0]);
			free(pat);
			return (1);
		}
		free(newval);
		free(newval2);
	}
	free(pat[0]);
	free(pat);
	return (0);
}
