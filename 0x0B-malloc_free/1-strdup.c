#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 * Return: NULL in case of error, pointer to allocated space
 */

char *_strdup(char *str)
{
	char *p;
	int ind, n;

	if (str == NULL)
		return (NULL);

	for (ind = 0; str[ind]; ind++)
		n++;
	p = malloc(sizeof(char) * (n + 1));

	if (p == NULL)
		return (NULL);
	for (ind = 0; str[ind]; ind++)
	{
		p[ind] = str[ind];
	}
	p[n] = '\0';
	return (p);
}
