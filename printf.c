#include "main.h"
#include <stdarg.h>

int put_str_s(char *p)
{
int j = 0;
int count = 0;
if (p == NULL){
_puts("(null)");
return (6);
}
/* printf("hello from putarg\n"); */
while (p[j] != '\0')
{
/* printf("hello %c\n",p[j]); */
_putchar(p[j]);
j++;
count++;
}
return (count);
}

int put_int_d(int n,int count)
{
if (n / 10 == 0)
{
_putchar(n + 48);
return (count + 1);
}
if (n / 10 > 0){
count = put_int_d(n / 10, count);
_putchar((n % 10) + 48);
return(count + 1);
}
}


/**
 * _printf -  function that produces output according to a format.
 * @format: pointer to a constant character (or string) data type(placeholders)
 * Return: number of characters printed (excluding the null byte
 *         used to end output to strings)
 */
int _printf(const char *format, ...)
{
int i, x, c = 0;
char plh;
char *parg;
va_list args;
va_start(args, format);
if (format == NULL || format[0]== '\0' || (format[0]=='%' && format[1] == '\0'))
return (-1);
printf("tst\n");
for (i = 0; format[i]; i++){
if (format[i] != '%'){
x = format[i];
_putchar(x);
c++;
}
if  (format[i] == '%' && format[i + 1] == '%'){
_putchar('%');
c++;
i+2;
}
if (format[i] == '%'){
i++;
plh = format[i];
if (plh == 's'){
parg = va_arg(args, char *);
c += _puts(parg);
}
if (plh == 'c'){
char cr = va_arg(args, int);
_putchar(cr);
c++;
}
if (plh == 'd'){
int d = va_arg(args, int);
if (d < 0){
d = -d;
_putchar('-');
c++;
}
c += put_int_d(d,0);
}
}
}
va_end(args);
return (c);

}
