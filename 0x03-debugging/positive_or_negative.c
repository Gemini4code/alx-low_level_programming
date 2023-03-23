#include "main.h"

/**
 * positive_or_negative - checks program for positive or negative numbers
 *
 * @i: number to be checked
 *
 * Return: 0 means success
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
