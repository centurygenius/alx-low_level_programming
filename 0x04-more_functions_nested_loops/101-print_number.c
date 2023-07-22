#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 * Return: 0(successful)
 */

void print_number(int n)
{
	unsigned int ix;

	ix = n;

	if (n < 0)
	{
		_putchar(45);
		ix = -ix;
	}
	if (ix / 10)
	{
		print_number(ix / 10);
	}
	_putchar(ix % 10 + '0');
}
