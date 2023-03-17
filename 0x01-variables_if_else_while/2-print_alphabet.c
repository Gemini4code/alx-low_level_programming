#include <stdio.h>

/**
 * main - function which prints in lowercase
 *
 * Return: 0 means success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
