#include "main.h"
/**
 * put_int_d - write an integer number to stdout
 * @n: The number to print
 * @count: count number of char printed
 * Return: count .
 */
int put_int_d(int n, int count)
{
if (n / 10 == 0)
{
__putchar(n + 48);
return (count + 1);
}
if (n / 10 > 0)
{
count = put_int_d(n / 10, count);
__putchar((n % 10) + 48);
return (count + 1);
}
return (count);
}
/**
 * put_str_s - write a string to stdout
 * @p: pointer to string
 * Return: number of characters printed .
 */
/* Not used replaced by _puts */
int put_str_s(char *p)
{
int j = 0;
int count = 0;
if (p == NULL)
{
_puts("(null)");
return (6);
}

while (p[j] != '\0')
{
__putchar(p[j]);
j++;
count++;
}
return (count);
}
/**
 * is_hex_oct_dec - chekc the base of number
 * @str: pointer to a string
 * Return: an integer
 */
int is_hex_oct_dec(char *str)
{
int i = 0;
printf("in is_hex_oct_dec\n");

while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
i++;
if (str[i] == '0' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
return (16);
else if (str[i] == '0' && (str[1 + 1] != 'x' || str[i + 1] != 'X'))
return (8);
else
return (10);
printf("in end of is_hex_oct_dec\n");
return (-1);
}


/**
 * _pow - function that calculate power
 * @base: base
 * @exp: expo
 * Return: result of pow
 */

int _pow(int base, int exp)
{
int result = 1, i;
for (i = 0; i < exp; i++)
result *= base;
return (result);
}
/**
 * print_number - Prints an integer
 * @str: pointer to string
 * Return: count of printed character
 */

int print_number(char *str)
{
int base, count = 0, k, div = 1, j = 0, i = 0, x = 0, n;
base = is_hex_oct_dec(str);
k = _atoi(str);
if (k < 0)
{
__putchar('-');
count++;
k = -k;
}
n = k;
if (base == 16)
{
while (n != 0)
{
x = n % 10;
k += x *_pow(16, i);
i++;
n = n / 10;
}
}
if (base == 8)
{
while (n != 0)
{
x = n % 10;
k += x *_pow(8, j);
j++;
n = n / 10;
}
}
while (k / div >= 10)
div = div * 10;
while (div != 0)
{
__putchar((k / div)+'0');
count++;
k = k % div;
div = div / 10;
}
return (count);
}
