#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints a triangle
 * @size: size of the triangle to be printed
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		size = 10;
		for (x = 1; x <= size; x = x + 1)
		{
			for (y = 1; y < size; y = y + 1)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z = z + 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
