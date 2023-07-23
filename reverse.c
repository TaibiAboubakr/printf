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
