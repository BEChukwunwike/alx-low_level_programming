#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * else a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lenght = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		lenght++;
	ptr = malloc(sizeof(char) * (lenght + 1));

	if (ptr == NULL)
		return (NULL);

	lenght = 0;

	for (index = 0; s1[index]; index++)
		ptr[lenght++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		ptr[lenght++] = s2[index];

	ptr[lenght] = '\0';
	return (ptr);
}
