#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: Always 0
 */
void print_alphabet(void);

{
	char letr = 'a';

	while (letr <= 'z')
	{
		_putchar(letr);
		letr++;
	}
	_putchar('\n');

	return (0);
}
