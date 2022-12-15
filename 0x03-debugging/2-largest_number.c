#include "main.h"

/**
 * largest_number - prints the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;

		printf("%d is the largest number\n", largest);
	}
	else if (b > a && b > c)
	{
		largest = b;

		printf("%d is the largest number\n", largest);
	}
	else
	{
		largest = c;

		printf("%d is the largest number\n", largest);
	}
	return (largest);
}
