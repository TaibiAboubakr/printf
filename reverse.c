#include "main.h"
#include <stdlib.h>
/**
 * put_rev - function that prints a reverse string
 * @str: pointer to string
 * Return: number of characters printed.
 */
int put_rev(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}
	p = malloc(_slen(str) + 1);
	if (p == NULL)
		return (-1);
	j = _slen(str) - 1;
	for (i = 0; str[i]; j--, i++)
		p[i] = str[j];
	p[i + 1] = '\0';
	i = _puts(p);
	free(p);
	return (i);
}
/**
 * print_addr - converts and prints a memory address as a hexadecimal
 * @num: the memory address to convert and print
 * Return: number of characters printed
 */
int print_addr(uintptr_t num)
{
	char hexa_table[16] = "0123456789abcdef";
	char hex[256];
	int i = 0, count = 0;

	if (num == 0)
	{
		return (_puts("(nil)"));
	}

	for (; num > 0; i++)
	{
		hex[i] = hexa_table[num % 16];
		num /= 16;
	}
	hex[i] = '\0';
	count += _puts("0x");
	count += put_rev(hex);
	return (count);
}
