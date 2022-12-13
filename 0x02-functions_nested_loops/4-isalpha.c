#include "main.h"
/**
 *_isalpha - checks alphabetical characters
 *@c: characters for checking
 *Return: 1 if character is an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
