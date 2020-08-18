#include "header.h"
/**
 * main - Entry point
 * @ac: Argument counter
 * @av: Argument vector
 * @environ: environment variable
 * Return: 0
 */
int main(int ac, char *av[], char **environ)
{
	char *bf = NULL;
	char **bftoken, **pat;
	ssize_t characters;
	size_t bfsize = 0;
	int ruta  = 0;
	(void)ac;
	(void)av;

	while (1)
	{
		signal(SIGINT, signal_handler);
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, "$ ", 2);
		characters = getline(&bf, &bfsize, stdin);
		if (characters == EOF)
		{
			free(bf);
			exit(0);
		}
		if (*bf != '\n')
		{
			bftoken = readline(bf, environ);
			if ((_strcmp(bftoken[0], "\n") != 0) && (_strcmp(bftoken[0], "env") != 0))
			{
				pat = getpath(environ);
				ruta = _stat(bftoken, pat);
				execfork(bftoken, ruta, environ);
			}
			else
			{
				free(bftoken);
			}
		}
	}
	return (0);
}
