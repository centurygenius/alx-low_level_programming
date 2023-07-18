#include "main.h"
/**
*print_alphabet_x10 - Entry point
*Description: prints lowercase alphabeth x 10
*
*Return: void(successful)
*/
void print_alphabet_x10(void)
{
	char lCase;
	int x;

	x = 0;
	lCase = 'a';

	while (x < 10)
	{
		while (lCase <= 'z')
		{
			_putchar(lCase);
			lCase++;
		}
		_putchar('\n');
		x++;
	}
}
