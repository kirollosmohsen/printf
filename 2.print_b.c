#include "main.h"

/**
 * print_bin - print bin no.
 *
 * @val: value
 *
 * Return: int
 */

int print_bin(va_list val)
{
	int f = 0;
	int cont = 0;
	int n, x = 1, y;
	unsigned int i = va_arg(val, unsigned int);
	unsigned int p;

	for (n = 0; n < 32; n++)
	{
		p = ((x << (31 - n)) & i);

		if (p >> (31 - n))
			f = 1;
		if (f)
		{
			y = p >> (31 - n);
			_putchar(y + 48);
			cont++;
		}
	}

	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
