#include "main.h"
/**
 * put_int_d - write an integer number to stdout
 * @n: The number to print
 * @count: count number of char printed
 * Return: count .
 */
int put_int_d(int n, int count)
{
if (n == -2147483648)
{
__putchar('-');
__putchar(2 + '0');
count += 2;
n = 147483648;
}
if (n < 0 && n > -2147483648)
{
__putchar('-');
count++;
n = n * -1;
}
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
 * put_uint - write an unsigned integer number to stdout
 * @n: The number to print
 * @count: count number of char printed
 * Return: count .
 */
int put_uint(unsigned int n, int count)
{

if (n / 10 == 0)
{
__putchar(n + 48);
return (count + 1);
}
if (n / 10 > 0)
{
count = put_uint(n / 10, count);
__putchar((n % 10) + 48);
return (count + 1);
}
return (count);
}
