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

int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list args);
int print_c(va_list val);
int print_s(va_list val);
int print_37(void);
int _strlen(char *s);
int _strlenc(const char *s);

#endif
