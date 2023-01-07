#include "main.h"
#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 * @s: initial segment.
 *@accept: accepted bytes.
 *Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				n++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
