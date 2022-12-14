#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: The number
 * Return: value the last digit of the number
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (0);
}
