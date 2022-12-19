#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: pointer
 *Return: a reversed string
 */
void rev_string(char *s)
{
	int r = 0;
	int c = 0;
	char i;

	while (*(s + r) != '\0')
	r += 1;
	r -= 1;
	while (c < r)
	{
		i = s[r];
		s[r] = s[c];
		s[c] = i;
		c++;
		r--;
	}
}

