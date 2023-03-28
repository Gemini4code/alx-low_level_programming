#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * starting with the first one
 * @str: input
 * Return: print characters
 */

void puts2(char *str)
{
	int i = 0;
	int p = 0;
	char *l = str;
	int z;

	while (*l != '\0')
	{
		l++;
		i++;
	}
	p = i - 1;
	for (z = 0 ; z <= p ; z++)
	{
		if (z % 2 == 0)
	{
		_putchar(str[z]);
	}
	}
	_putchar('\n');
}
