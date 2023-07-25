#include "main.h"

/**
 * _puts - Entry point
 * Description: This funtion prints a string to stdout
 * @str: string to be printed
 *
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
