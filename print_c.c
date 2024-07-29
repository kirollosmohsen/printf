#include "main.h"

/**
 * print_c - print char
 *
 * @val: arg
 *
 * Return: int
 */

int print_c(va_list val)
{
	char a;

	a = va_arg(val, int);
	_putchar(a);
	return (1);
}
