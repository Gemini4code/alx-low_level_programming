#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 means big, 1 means little
 */

int get_endianness(void)
{
	unsigned int e = 1;
	char *a = (char *) &e;

	return (*a);
}
