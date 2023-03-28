#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer to swap
 * @b: 2nd integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
