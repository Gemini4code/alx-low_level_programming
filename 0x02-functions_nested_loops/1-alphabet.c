#include "main.h"

/**
 * print_alphabet - prints out alpabets a-z
 *
 * Return: 0 means success
 */

void print_alphabet(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
		_putchar(o);
	_putchar('\n');
}
