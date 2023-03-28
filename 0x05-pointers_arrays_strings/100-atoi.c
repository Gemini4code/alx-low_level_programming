#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the resulting int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, l, e, num;

	a = 0;
	b = 0;
	c = 0;
	l = 0;
	e = 0;
	num = 0;

	while (s[l] != '\0')
		l++;

	while (a < l && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}
