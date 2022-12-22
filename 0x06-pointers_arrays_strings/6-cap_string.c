#include "main.h"
/**
 *cap_string - capitalizes all words of a string.
 *@strn: The string to be capitalized.
 *Return: A pointer to the changed string.
 */
char *cap_string(char *strn)
{
	int i = 0;

	while (strn[i])
	{
		while (!(strn[i] >= 'a' && strn[i] <= 'z'))
			i++;
		if (strn[i - 1] == ' ' ||
				strn[i - 1] == '\t' ||
				strn[i - 1] == '\n' ||
				strn[i - 1] == ',' ||
				strn[i - 1] == ';' ||
				strn[i - 1] == '.' ||
				strn[i - 1] == '!' ||
				strn[i - 1] == '?' ||
				strn[i - 1] == '"' ||
				strn[i - 1] == '(' ||
				strn[i - 1] == ')' ||
				strn[i - 1] == '{' ||
				strn[i - 1] == '}' ||
				i == 0)
			strn[i] -= 32;
		i++;
	}
	return (strn);
}
