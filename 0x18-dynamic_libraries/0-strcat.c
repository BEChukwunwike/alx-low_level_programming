#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: returns a pointer to the
 * resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int n;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[c] = src[n];
		c++;
		n++;
	}
	dest[c] = '\0';
	return (dest);
}

