#include "main.h"
#include <stdarg.h>

/**
 * switching -  switch between the placeholders.
 * @args: argument.
 * @plh: placeholder
 * Return: number of characters skipped.
 */
int switching(va_list args, char plh)
{
int count = 0;
int d;
char c;
char *str;
switch (plh)
{
case 's':
str = va_arg(args, char *);
count += _puts(str);
break;
case 'c':
c = va_arg(args, int);
_putchar(c);
count++;
break;
case 'd':
d = va_arg(args, int);
if (d < 0)
{
d = -d;
_putchar('-');
count++;
}
count += put_int_d(d, 0);
break;
default:
break;
}
return (count);
}
/**
 * skipflags -  function that skip all unused flags.
 * @f: pointer to format
 * @i: index
 * Return: number of characters skipped.
 */
int skipflags(const char *f, int i)
{
while (f[i] == '-' || f[i] == '+' || f[i] == ' ' || f[i] == '#' || f[i] == '0')
i++;
while (f[i] >= 48 && f[i] <= 57)
i++;
if (f[i] == '.')
{
i++;
while (f[i] >= 48 && f[i] <= 57)
i++;
}
while (f[i] == 'l' || f[i] == 'L' || f[i] == 'h' || f[i] == 'z' || f[i] == 't'
|| f[i] == 'j')
i++;
return (i);
}
/**
 * _printf -  function that produces output according to a format.
 * @format: pointer to a constant character (or string) data type(placeholders)
 * Return: number of characters printed (excluding the null byte
 *         used to end output to strings)
 */

int _printf(const char *format, ...)
{
int i, c = 0;
const char *f = format;
va_list args;
va_start(args, format);
if (f == NULL || f[0] == '\0' || (f[0] == '%' && f[1] == '\0'))
return (-1);
for (i = 0; f[i]; i++)
{
if (f[i] != '%')
{
_putchar(f[i]);
c++;
}
if  (f[i] == '%' && f[i + 1] == '%')
{
_putchar('%');
c++;
i++;
}
if (f[i - 1] != '%' && f[i] == '%')
{
i++;
i = skipflags(f, i);
c += switching(args, f[i]);
}
}
va_end(args);
return (c);

}
