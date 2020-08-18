#include "header.h"
/**
 * signal_handler - handles ctrl c
 * @signal: input signal
 * Return: void
 */
void signal_handler(int signal __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n$ ", 3);
}
