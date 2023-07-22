#include "main.h"
#include <stdlib.h>

/**
 * convert_binary - function that convert decimal number to binary
 * @n : number to be converted
 * Return: Number of characters that has been printed
 */
int convert_binary(unsigned int n)
{
	unsigned int n1 = n;
	int check = 0, count = 0, i, k, j = 0;
	unsigned int *p;

	while (n1 / 2 > 0)
	{
	j++;
	n1 = n1 / 2;
	}

	p = (unsigned int *)malloc(sizeof(unsigned int) * j);
	if (p == NULL)
	exit(-1);
	i = j;
	for (k = 0; k <= j; k++, i--)
	p[k] = _pow(2, i);
	if (n == 0 && count == 0)
	{
	__putchar('0');
	count++;
	return (count);
	}
	for (i = 0; i <= j; i++)
	{
		if (n / p[i] > 0)
		{
			check = 1;
			__putchar('1');
			count++;
			n = n - p[i];
		}
		else
		{
			if (check == 0)
				continue;
			__putchar('0');
			count++;
		}
	}
	return (count);
}
