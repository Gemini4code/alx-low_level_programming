#include <stdio.h>

/**
 * main - function that prints out numbers in base 10 starting form 0
 *
 * Return: 0 means success
 */

int main(void)
{
	int u;

	for (u = 0; u < 10; u++)
		putchar(u + '0');
	putchar('\n');
	return (0);
}
