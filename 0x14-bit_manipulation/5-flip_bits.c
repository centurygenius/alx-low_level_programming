#include "main.h"

/**
 * flip_bits - Entry point
 * Description: counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = exclusive >> x;
		if (present & 1)
			counter++;
	}
	return (counter);
}
