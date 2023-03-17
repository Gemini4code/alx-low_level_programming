#include <stdio.h>

/**
 * main - function that prints out alphabets in lowerase and uppercase
 *
 * Return: 0 means success
 */

int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
		putchar(e);
	for (e = 'A'; e <= 'Z'; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
