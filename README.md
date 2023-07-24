# Printf project

## Description

This is a group project to implement a custom printf function in C programming language. The goal of this project is to create a function that
produces output similar to the standard C library printf function allowing users to print formatted text to the console or other output stream

The _printf project is divided into many files : the printf.c file, which contains the implementation of the _printf function, and the main.h
file, which contains the function prototype and other files that contains other functions used for formatting outputs.

## List of files and functions

########### _atoi.c ###########
_atoi

########### convert_number.c ###########
convert_binary
convert_octal
convert_hex
convert_hex_upper

########### main.c ###########
main

########### main.h ###########
hex struct and prototypes

########### printf.c ###########
switching
switching1
switching2
skipflags
_printf

########### print_numbers.c ###########
put_int_d
_pow
put_uint

########### put_char_str.c ###########
_slen
_puts
__putchar
_putS
rot13

########### README.md ###########

########### reverse.c ###########
put_rev
print_addr


## Tasks

    + Task 0:
        Implement the _printf function with basic functionality to handle %c, %s, and %% conversion specifiers.

    + Task 1:
        Extend _printf to handle %d and %i conversion specifiers.

    + Task 2:
        Implement custom conversion specifier %b to print unsigned integers in binary format.

    + Task 3:
        Extend _printf to handle %u, %o, %x, and %X conversion specifiers for unsigned integers and octal/hexadecimal formats.

    + Task 4:
        Optimize the implementation by using a local buffer of 1024 chars and minimizing calls to the write function.

    + Task 5:
        Implement custom conversion specifier %S to handle printing strings with non-printable characters in hexadecimal format.

    + Task 6:
        Handle the %p conversion specifier to print memory addresses.

    + Task 7:
        Handle the +, space, and # flag characters for non-custom conversion specifiers.

    + Task 8:
        Handle the l and h length modifiers for non-custom conversion specifiers.

    + Task 9:
        Handle the field width for non-custom conversion specifiers.

    + Task 10:
        Handle the precision for non-custom conversion specifiers.

    + Task 11:
        Handle the 0 flag character for non-custom conversion specifiers.

    + Task 12:
        Handle the - flag character for non-custom conversion specifiers.

    + Task 13:
        Implement custom conversion specifier %r to print the reversed string.

    + Task 14:
        Implement custom conversion specifier %R to print the ROT13'ed string.

    + Task 15:
        Ensure that all the implemented options work seamlessly together.
