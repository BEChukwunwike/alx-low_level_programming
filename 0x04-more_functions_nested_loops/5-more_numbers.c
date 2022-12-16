#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers
 * from 0 to 14, followed by a new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, p;

	for (n = 0; n < 10; n++)
	{
		for (p = 0; p < 15; p++)
		{
			if (p >= 10)
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
	_putchar('\n');
	}
}
