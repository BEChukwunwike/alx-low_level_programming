#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@n: input value
 *Return: n value
 */
char *leet(char *n)
{
	int c, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[c] == s1[p])
			{
				n[c] = s2[p];
			}
		}
	}
	return (n);
}
