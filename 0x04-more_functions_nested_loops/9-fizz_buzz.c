#include <stdio.h>

/**
 * main - prints numbers 1 - 100, but Fizz for multiples of 3
 * Buzz for multiples of 5 and
 * FizzBuzz for multiples of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf(" FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz ");
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return (0);
}
