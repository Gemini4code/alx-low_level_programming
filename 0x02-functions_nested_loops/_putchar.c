#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success print 1
 * On error, print -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

