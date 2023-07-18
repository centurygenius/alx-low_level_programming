#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to be considered
 *Return: value of the last digit of a number
 */

int print_last_digit(int n)

{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
