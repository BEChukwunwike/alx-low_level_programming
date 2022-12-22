#include "main.h"
/**
 * string_toupper - change all
 * lowercase to uppercase
 * @p: pointer
 * Return: p
 */
char *string_toupper(char *p)
{
	int c;

	c = 0;
	while (p[c] != '\0')
	{
		if (p[c] >= 'a' && p[c] <= 'z')
			p[c] = p[c] - 32;
		c++;
	}
	return (p);
}
