#include <stdio.h>

/**
 * main - function prints all numbers of base 16
 *
 * Return: 0 means success
 */

int main(void)
{
	int z;
	char v;

	for (z = 0; z < 10; z++)
		putchar(z + '0');
	for (v = 'a'; v <= 'f'; v++)
		putchar(v);
	putchar('\n');
	return (0);

}
