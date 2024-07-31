#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - convert in printf
 *
 * @ph: char pointer to specifier
 * @function: for conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list val);
int print_s(va_list val);
int print_37(void);
int print_i(va_list val);
int print_d(va_list val);
int print_unsigned(va_list val);
int print_oct(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_bin(va_list val);

#endif
