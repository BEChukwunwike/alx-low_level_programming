#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1:First string
 * @s2:Second string
 * Return: NULL in case of failure , but pointer to new string
 * in case of success
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int ind, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ind = n = 0;
	while (s1[ind] != '\0')
		ind++;
	while (s2[n] != '\0')
		n++;
	concat = malloc(sizeof(char) * (ind + n + 1));

	if (concat == NULL)
		return (NULL);
	ind = n = 0;
	while (s1[ind] != '\0')
	{
		concat[ind] = s1[ind];
		ind++;
	}
	while (s2[n] != '\0')
	{
		concat[ind] = s2[n];
		ind++, n++;
	}
	concat[ind] = '\0';
	return (concat);
}


