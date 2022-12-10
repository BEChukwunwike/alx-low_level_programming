#include <stdio.h>

/**
 *main - prints hexadecimals in lowercase
 *Return: returns 0
 */
int main(void)
{
	int N;
	char Alpha;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');

	for (Alpha = 'a'; Alpha <= 'f'; Alpha++)
		putchar(Alpha);
	putchar('\n');

	return (0);
}
