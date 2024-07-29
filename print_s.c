#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

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
		a = "(NULL)";
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
