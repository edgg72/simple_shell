#include "header.h"
/**
 * find_env - function that prints the environment
 * @environ: environment variable
 * Return: void
 */
void find_env(char **environ)
{
	int i;

	for (i = 0 ; environ[i] ; i++)
	{
		puts(environ[i]);
	}
}
