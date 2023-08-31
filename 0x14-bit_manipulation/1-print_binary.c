#include "main.h"

/**
 * print_binary - Entry point
 * Description: prints the binary of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int x, counter = 0;
	unsigned long int present;

	for (x = 63; x >= 0; x--)
	{
		present = n >> x;

		if (present & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
