#include <stdio.h>

/**
 * main - function that prints different combinations of two digits
 *
 * Return: 0 means success
 */

int main(void)
{
	int s;
	int l;

	for (s = 0; s < 10; s++)
	{
		for (l = 1; l < 10; l++)
		{
			if (s < l && s != l)
			{
				putchar(s + '0');
				putchar(l + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
