#include "main.h"

/**
 * print_c - Prints a character
 * @args: The argument list containing the character
 *
 * Return: The number of characters printed (1)
 */
int print_c(va_list args)
{
return _putchar(va_arg(args, int));
}

/**
 * print_s - Prints a string
 * @args: The argument list containing the string
 *
 * Return: The number of characters printed
 */
int print_s(va_list args)
{
int i;
char *str = va_arg(args, char *);

if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return i;
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list (unused)
 *
 * Return: The number of characters printed (1)
 */
int print_percent(va_list args)
{
(void)args;
return _putchar('%');
}

/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int num = n, len = 0;
char buffer[50];

if (n < 0)
{
_putchar('-');
n = -n;
len++;
}
else if (n == 0)
{
_putchar('0');
return 1;
}

while (n != 0)
{
buffer[len++] = (n % 10) + '0';
n /= 10;
}
while (len > 0)
_putchar(buffer[--len]);

return len + (num < 0 ? 1 : 0);
}
