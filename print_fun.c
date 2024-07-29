#include "main.h"

/**
 * _putchar - Custom putchar function to write a single character
 * @c: The character to write
 * Return: On success 1, on error -1
 */
static int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_c - Print a character
 * @args: va_list containing the character
 * Return: Number of characters printed
 */
int print_c(va_list args)
{
    _putchar(va_arg(args, int));
    return 1;
}

/**
 * print_s - Print a string
 * @args: va_list containing the string
 * Return: Number of characters printed
 */
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

/**
 * print_37 - Print a percent sign
 * @args: va_list (unused)
 * Return: Number of characters printed
 */
int print_37(va_list args)
{
    (void)args;
    _putchar('%');
    return 1;
}

