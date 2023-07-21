#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints diagonal
 * @size: size of the triangle to be printed
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row = row + 1)
		{
			for (spaces = size - row; spaces >= 1; spaces = spaces + 1)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes = hashes + 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
