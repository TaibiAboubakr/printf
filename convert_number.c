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


/**
 * convert_hex - function that convert decimal number to lowercase hexa
 * @n : number to be converted
 * @count: Counter that count number of printed characters
 * Return: Number of characters that has been printed
 */
int convert_hex(unsigned int n, int count)
{
match_hex hexa_conv[16] = {
{0, '0'}, {1, '1'}, {2, '2'},
{3, '3'}, {4, '4'},
{5, '5'}, {6, '6'},
{7, '7'}, {8, '8'},
{9, '9'}, {10, 'a'},
{11, 'b'}, {12, 'c'},
{13, 'd'}, {14, 'e'},
{15, 'f'}
};
int i;

if (n == 0)
{
__putchar(48);
return (1);
}
if (n / 16 == 0)
{
for (i = 0; i < 16; i++)
{
if ((n % 16) == hexa_conv[i].n)
__putchar(hexa_conv[i].c);
}
return (count + 1);
}
if (n / 16 > 0)
{
count = convert_hex(n / 16, count);
for (i = 0; i < 16; i++)
{
if ((n % 16) == hexa_conv[i].n)
__putchar(hexa_conv[i].c);
}
return (count + 1);
}

return (count);
}


/**
 * convert_hex_upper - function that convert decimal number to uppercase hexa
 * @n : number to be converted
 * @count: Counter that count number of printed characters
 * Return: Number of characters that has been printed
 */
int convert_hex_upper(unsigned int n, int count)
{
match_hex hexa_conv[16] = {
{0, '0'}, {1, '1'}, {2, '2'},
{3, '3'}, {4, '4'},
{5, '5'}, {6, '6'},
{7, '7'}, {8, '8'},
{9, '9'}, {10, 'A'},
{11, 'B'}, {12, 'C'},
{13, 'D'}, {14, 'E'},
{15, 'F'}
};
int i;

if (n == 0)
{
__putchar(48);
return (1);
}
if (n / 16 == 0)
{
for (i = 0; i < 16; i++)
{
if ((n % 16) == hexa_conv[i].n)
__putchar(hexa_conv[i].c);
}
return (count + 1);
}
if (n / 16 > 0)
{
count = convert_hex_upper(n / 16, count);
for (i = 0; i < 16; i++)
{
if ((n % 16) == hexa_conv[i].n)
__putchar(hexa_conv[i].c);
}
return (count + 1);
}

return (count);
}
