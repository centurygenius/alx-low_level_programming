#include "main.h"

/**
 * get_endianness - Entry point
 * Description: checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *) &x;

	return (*ch);
}
