#include "main.h"

/**
 * puts2 - Entry point
 * Description: This funtion prints character of a string starting
 * with the first character followed by a new line
 * @str: string
 * Return: print
 */

void puts2(char *str)

{
	int lng = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lng++;
	}
	x = lng - 1;
	for (o = 0; o <= x; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
