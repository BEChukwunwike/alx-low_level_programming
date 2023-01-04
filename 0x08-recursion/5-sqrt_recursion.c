#include "main.h"
int New_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (New_sqrt_recursion(n, 2));
}
/**
 * New_sqrt_recursion - returns natural square root of a number.
 * @i: input
 * @n: input number.
 * Return: natural square root.
 */
int New_sqrt_recursion(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + New_sqrt_recursion(n, i + 1));
}
