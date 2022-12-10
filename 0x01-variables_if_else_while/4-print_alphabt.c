#include <stdio.h>

/**
 *main - this will print alphabet except q and e
 *Return: returns to 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

