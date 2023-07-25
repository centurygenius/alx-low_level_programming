#include "main.h"

/**
 * print_rev - Entry point
 * Description: This funtion prints a string in reverse modet
 * @s: string
 * Return: void
 */

void print_rev(char *s)

{
	int lng = 0;
	int o;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	s--;
	for (o = lng; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
