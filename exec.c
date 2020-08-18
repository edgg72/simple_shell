#include "header.h"
/**
 * execfork - function that creates a new process
 * @buftok: double pointer of strings
 * @process: process
 * @environ: environment variable
 * Return: 1
 */
int execfork(char **buftok, int process, char **environ)
{
	pid_t child_pid;
	int status;

	if (buftok == NULL)
	return (-1);
	child_pid = fork();

	if (child_pid < 0)
	{
		perror("./hsh: ");
		exit(1);
	}
	else if (child_pid == 0)
	{
		if (execve(buftok[0], buftok, environ) == -1)
		{
			perror("./hsh: ");
			free(buftok);
			exit(1);
		}
		exit(0);
	}
	else
	{
		if (process == 1)
			free(buftok[0]);

		free(buftok);
		wait(&status);
	}
	return (1);
}
