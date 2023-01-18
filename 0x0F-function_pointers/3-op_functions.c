#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - returns the sum of a and b
 * @a: first element
 * @b: second element
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = (a + b);

	return (sum);
}

/**
 * op_sub -  returns the difference of a and b
 * @a: first element
 * @b: second element
 * Return: dif
 */
int op_sub(int a, int b)
{
	int dif = (a - b);

	return (dif);
}

/**
 * op_mul - returns the product of a and b
 * @a: 1st element
 * @b: 2nd element
 * Return: prod
 */
int op_mul(int a, int b)
{
	int prod = (a * b);

	return (prod);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: 1st element
 * @b: 2nd element
 * Return: div
 */
int op_div(int a, int b)
{
	int div = (a / b);

	return (div);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: 1st element
 * @b: 2nd element
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod = (a % b);

	return (mod);
}
