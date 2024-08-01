#include "main.h"

/**
 * print_s - print str
 *
 * @val: arg
 *
 * Return: strlen
 */

int print_s(va_list val)
{
	char *a;
	int n, length;

	a = va_arg(val, char *);
	if (a == NULL)
	{
		a = "(null)";
		length = _strlen(a);
		for (n = 0; n < length; n++)
			_putchar(a[n]);
		return (length);
	}
	else
	{
		length = _strlen(a);
		for (n = 0; n < length; n++)
			_putchar(a[n]);
		return (length);
	}
}
