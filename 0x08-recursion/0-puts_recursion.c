#include "main.h"

/**
 * _puts_recursion - Entry point
 * Description: prints a string
 * @s: input
 * Return: Always 0 (Successful)
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
