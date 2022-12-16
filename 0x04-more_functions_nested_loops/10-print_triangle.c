#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: numbers of lines
 * Return: no return.
 */

void print_triangle(int size)
{
	int c, p;

	for (c = 0; c < size; c++)
	{
		for (p = 1; p < (size - c); p++)
			_putchar(' ');
		for (p--; p < size; p++)
			_putchar(35);
		if (c < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
