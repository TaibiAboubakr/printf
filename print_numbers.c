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
_putchar(n + 48);
return (count + 1);
}
if (n / 10 > 0)
{
count = put_int_d(n / 10, count);
_putchar((n % 10) + 48);
return (count + 1);
}
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
_putchar(p[j]);
j++;
count++;
}
return (count);
}
