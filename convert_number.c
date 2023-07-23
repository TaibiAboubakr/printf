#include "main.h"
#include <stdlib.h>

/**
 * convert_binary - function that convert decimal number to binary
 * @n : number to be converted
 * Return: Number of characters that has been printed
 */
int convert_binary(unsigned int n)
{
	unsigned int *p, n1 = n;
	int check = 0, count = 0, i, k, j = 0;

	if ((n == 0 || n == 1) && count == 0)
	{
		__putchar(n + '0');
		count++;
		return (count);
	}
	while (n1 / 2 > 0)
	{
		j++;
		n1 = n1 / 2;
	}
	p = (unsigned int *)malloc(sizeof(unsigned int) * (j + 1));
	if (p == NULL)
		return (-1);
	for (i = j, k = 0; k <= j; k++, i--)
		p[k] = _pow(2, i);
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
			if (check != 0)
			{
			__putchar('0');
			count++;
			}
		}
	}
	if (p != NULL)
	free(p);
	return (count);
}

/**
 * convert_octal - function that convert decimal number to octal
 * @n : number to be converted
 * @count: Counter that count number of printed characters
 * Return: Number of characters that has been printed
 */
int convert_octal(unsigned int n, int count)
{

if (n / 8 == 0)
{

__putchar((n % 8) + 48);
return (count + 1);
}
if (n / 8 > 0)
{
count = convert_octal(n / 8, count);
__putchar((n % 8) + 48);
return (count + 1);
}
return (count);
}
