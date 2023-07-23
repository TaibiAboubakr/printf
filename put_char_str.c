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
 * with your hexadecimal values.
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
	count += 4;
	c++;
	if (!*c)
	return (count);

	}
	__putchar(*c);
	c++;
	count++;
	}
	return (count);
}

/**
 * *rot13 - function that encodes a string using rot13..
 * @str: A pointer to a string
 * Return: a pointer to the result string
 */
int rot13(char *str)
{
char *p;
int i = 0, j = 0;
int len;
char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char r13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O'
, 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D'
, 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};


if (str == NULL)
{
	_puts("(null)");
	return (6);
}
len = _slen(str);
p = (char *)malloc(sizeof(char) * (len + 1));
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == letters[j])
{
p[i] = r13[j];
break;
}
}
}
p[len] = '\0';
return (_puts(p));

}
