#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct format - Struct format
 * @specifier: The conversion specifier
 * @f: The function associated with the specifier
 */
typedef struct format
{
	char *specifier;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */
