#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0 means success
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (y = x; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

