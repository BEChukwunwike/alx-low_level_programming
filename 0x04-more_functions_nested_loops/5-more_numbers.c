#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers
 * from 0 to 14, followed by a new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int c, n, p;

	c = (10);

	for (n = 0; n < 15; n++)
	{
		p = c * n;
			_putchar(p + 0);
	}
	_putchar('\n');
}
