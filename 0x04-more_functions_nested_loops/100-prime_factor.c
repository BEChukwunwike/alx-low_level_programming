#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that finds and prints the largest
 * prime factor of the number 612852475143
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%lu\n", n);
	return (0);
}
