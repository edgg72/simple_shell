#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>

int _stat(char **bftoken, char **pat);
char **readline(char *line, char **env);
int execfork(char **buftok, int process, char **environ);
char **getpath(char **environ);
char **tokpath(char *fpat);
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);
void find_env(char **environ);
char *_strdup(char *str);
void signal_handler(int signal __attribute__((unused)));
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
