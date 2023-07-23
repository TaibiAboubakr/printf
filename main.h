#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int __putchar(char);
int _puts(char *);
int _slen(char *);
int _printf(const char *format, ...);
int put_str_s(char *p);
int put_int_d(int n, int);
int switching(va_list, char);
int switching1(va_list args, char plh);
int skipflags(const char *f, int i);
int print_number(char *str);
int is_hex_oct_dec(char *str);
int _atoi(char *s);
int _pow(int base, int exp);
int convert_binary(unsigned int);
int put_uint(unsigned int n, int count);
int convert_octal(unsigned int n);

#endif /* MAIN_H */
