#include <stdio.h>

/**
 * main - function that prints all alphabets in lowercase except q and e
 *
 * Return: 0 means success
 */

int main(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
		if (o != 'q' && o != 'e')
			putchar(o);
	putchar('\n');
	return (0);
}
