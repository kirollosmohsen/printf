
#include "main.h"

/**
 * _putchar - write caracter
 *
 * @c: char
 *
 * Return: 1 success, -1 errorr
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
