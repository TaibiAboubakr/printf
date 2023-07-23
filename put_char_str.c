#include "main.h"
#include <unistd.h>

/**
 * _slen - function that calculate lenght of string
 * @s: pointer to string
 * Return: lenght of string
 */
int _slen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _puts - writes the character c to stdout
 * @c: pointer to string
 * Return: number of characters printed.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _puts(char *c)
{
	if (c == NULL)
	{
		_puts("(null)");
		return (6);
	}
	return (write(1, c, _slen(c)));
}
/**
 * __putchar - write the character c to stdout
 * @c: The character to print
 * Return: 1 : On success .
 *        -1 : is returned, and errno is set appropriately.
 */

int __putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putS - writes the character c to stdout with change no_printable characters
 * with hexadecimal values.
 * @c: pointer to string
 * Return: number of characters printed.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putS(char *c)
{
	int count = 0;

	if (c == NULL)
	{
		_puts("(null)");
		return (6);
	}
	while (*c)
	{
	if ((*c > 0 && *c < 32) || (*c >= 127))
	{
	_puts("\\x");
	if (*c < 15)
	__putchar(48);
	convert_hex_upper((*c), 0);
	count += 3;
	c++;
	}
	__putchar(*c);
	c++;
	count++;
	}
	return (count);
}
