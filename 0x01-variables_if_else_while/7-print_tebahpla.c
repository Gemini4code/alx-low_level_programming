#include <stdio.h>

/**
 * main -  function that prints all the lowercase alphabets in reverse order
 *
 * Return: 0 means success
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
