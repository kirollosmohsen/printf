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
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int printf_int(va_list args);
int printf_37(void);
int printf_dec(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);

#endif
