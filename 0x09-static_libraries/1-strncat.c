#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int p;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[c] = src[p];
		c++;
		p++;
	}
	dest[c] = '\0';
	return (dest);
}
