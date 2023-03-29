#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int x, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[x] == s1[z])
			{
				n[x] = s2[z];
			}
		}
	}
	return (n);
}

