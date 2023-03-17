#include <stdio.h>

/**
 * main - function that prints out numbers in base 10 starting form 0 to 10
 *
 * Return: 0 means success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a);
	printf("\n");
	return (0);
}
