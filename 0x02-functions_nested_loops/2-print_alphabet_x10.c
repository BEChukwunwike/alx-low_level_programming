#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 */
void print_alphabet_x10(void);
{
	int ten;
	char letr;

	for (ten = 0; ten <= 9; ten++)
	{
		for (letr = 'a'; letr <= 'z'; letr++)
			_putcher(letr);
		_putcher('\n');
	}
}
