#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 means success
 */

int main(void)
{
	int pass_wd[100];
	int x, sum, y;

	sum = 0;	

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass_wd[x] = rand() % 78;
		sum += (pass_wd[x] + '0');
		putchar(pass_wd[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}
