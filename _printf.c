#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}
};
va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_c(va_list args)
{
    return _putchar(va_arg(args, int));
}

int print_s(va_list args)
{
    char *str = va_arg(args, char *);
    int length = 0;
    if (str == NULL)
        str = "(null)";
    while (*str)
    {
        _putchar(*str++);
        length++;
    }
    return length;
}

int print_37(va_list args)
{
    return _putchar('%');
}

int print_d(va_list args)
{
    int num = va_arg(args, int);
    int length = 0;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        length++;
    }

    if (num / 10)
        length += print_d((va_list) &num); /* Recursive call to handle multi-digit numbers */
    _putchar(num % 10 + '0');
    length++;
    return length;
}

int print_i(va_list args)
{
    return print_d(args); /* Similar to print_d, as i and d are treated the same */
}
