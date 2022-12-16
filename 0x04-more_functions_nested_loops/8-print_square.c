#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
	int c, p;

	for (c = 0; c < size; c++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar(35);
		}
		if (c != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
