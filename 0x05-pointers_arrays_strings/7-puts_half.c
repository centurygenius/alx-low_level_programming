#include "main.h"

/**
 * puts_half - Entry point
 * Description: This funtion prints half of a string followed by a new line
 * @str: string
 * Return: half of input
 */

void puts_half(char *str)

{
	int a, n, lng;

	lng = 0;

	for (a = 0; str[a] != '\0'; a++)
		lng++;

	n = (lng / 2);

	if ((lng % 2) == 1)
		n = ((lng + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
