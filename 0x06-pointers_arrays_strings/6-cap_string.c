#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int letters = 0;

	while (str[letters])
	{
		while (!(str[letters] >= 'a' && str[letters] <= 'z'))
			letters++;

		if (str[letters - 1] == ' ' ||
				str[letters - 1] == '\t' ||
				str[letters - 1] == '\n' ||
				str[letters - 1] == ',' ||
				str[letters - 1] == ';' ||
				str[letters - 1] == '.' ||
				str[letters - 1] == '!' ||
				str[letters - 1] == '?' ||
				str[letters - 1] == '"' ||
				str[letters - 1] == '(' ||
				str[letters - 1] == ')' ||
				str[letters - 1] == '{' ||
				str[letters - 1] == '}' ||
				letters == 0)
			str[letters] -= 32;

		letters++;
	}
	return (str);
}

