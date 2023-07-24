#include "main.h"
#include <stdarg.h>

/**
 * switching2 -  switch between the placeholders.
 * @args: argument.
 * @plh: placeholder
 * Return: number of characters skipped.
 */
int switching2(va_list args, char plh)
{
void *ptr;
uintptr_t  addr;

case 'p':
ptr = va_arg(args, void*);
addr = (uintptr_t)ptr;
count += print_addr(addr);
break;
default:
__putchar('%');
__putchar(plh);
count += 2;
break;
}
return (count);
}
