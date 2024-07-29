#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
    int i, printed = 0;
    va_list args;
    int (*func)(va_list);

    va_start(args, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            switch (format[++i])
            {
                case 'c': func = print_char; break;
                case 's': func = print_string; break;
                case '%': func = print_percent; break;
                case 'd': case 'i': func = print_int; break;
                default: _putchar('%'); _putchar(format[i]); printed += 2; continue;
            }
            printed += func(args);
        }
        else
        {
            _putchar(format[i]);
            printed++;
        }
    }

    va_end(args);
    return printed;
} 
