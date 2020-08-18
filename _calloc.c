#include "header.h"

/**
 * _calloc - function
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (a = 0; a < (nmemb * size);  a++)
	{
		p[a] = 0;
	}
	return ((void *)p);
}
