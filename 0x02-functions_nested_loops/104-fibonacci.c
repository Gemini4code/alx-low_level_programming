#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int x;
	unsigned long int fst = 1;
	unsigned long int lst = 2;
	unsigned long int l = 1000000000;
	unsigned long int fst1;
	unsigned long int fst2;
	unsigned long int lst1;
	unsigned long int lst2;

	printf("%lu", fst);
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", lst);
		lst += fst;
		fst = lst - fst;
	}
	fst1 = (fst / l);
	fst2 = (fst % l);
	lst1 = (lst / l);
	lst2 = (lst % l);
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", lst1 + (lst2 / l));
		printf("%lu", lst2 % l);
		lst1 = lst1 + fst1;
		fst1 = lst1 - fst1;
		lst2 = lst2 + fst2;
		fst2 = lst2 - fst2;
	}
	printf("\n");
	return (0);
}
