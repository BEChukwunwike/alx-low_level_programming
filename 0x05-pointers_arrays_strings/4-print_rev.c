#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int c = 0;
	int a;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s--;
	for (a = c; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
