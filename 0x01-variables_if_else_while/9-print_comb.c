#include <stdio.h>

/**
 *main - will prints all possible combinations of single-digit numbers.
 *Return: returns 0
 */

int main(void)
{
	int N;

	for (N = 0; N <= 9; N++)
	{
		putchar ((N % 10) + '0');
		if (N == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
