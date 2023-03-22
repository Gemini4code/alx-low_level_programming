#include "main.h"

/**
 * print_last_digit -  function that prints the last digits of a number
 *
 * @i: function parameter
 *
 * Return: z means success
 */

int print_last_digit(int i)
{
	int z;

	z = i % 10;
	if (i < 0)
		z = -z;
	return (z);
}
