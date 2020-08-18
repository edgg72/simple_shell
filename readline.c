#include "header.h"
/**
 * readline - function that creates tokens of directory
 * @line: line that getline passes
 * @env: environment variable
 * Return: buffer
 */
char **readline(char *line, char **env)
{
	int i = 0;
	char *lin;
	char **buffer = _calloc(sizeof(char *), 64);

	if (buffer == NULL)
		return (NULL);

	lin = strtok(line, " \n\t\r\a");
	while (lin != NULL)
	{
		buffer[i] = lin;
		i++;
		lin = strtok(NULL, " \n\t\r\a");
	}
	if (buffer[0] == NULL)
		buffer[i] = "\n";

	if ((_strcmp(buffer[0], "exit") == 0) && buffer[1] == NULL)
	{
		free(lin);
		free(buffer);
		free(line);/**/
		exit(0);
	}
	if ((_strcmp(buffer[0], "env") == 0) && buffer[1] == NULL)
		find_env(env);

	return (buffer);
}
