#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;
	format_t formats[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(args, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int j = 0;

			while (formats[j].specifier)
			{
				if (format[i + 1] == *(formats[j].specifier))
				{
					count += formats[j].f(args);
					break;
				}
				j++;
			}

			if (!formats[j].specifier)
			{
				_putchar('%');
				count++;
			}

			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);

	return (count);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_char - Prints a character
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return 1;
}

/**
 * print_str - Prints a string
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}

	return count;
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return 1;
}
