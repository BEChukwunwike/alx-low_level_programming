#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: input array
 * @n: number of elements
 * Return: 0
 */
void print_array(int *a, int n)
{
	int t = 0;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
	}
	if (t != (n - 1))
	{
			printf(", ");
	}
	printf("\n");
}
