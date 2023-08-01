#include "main.h"

/**
 * print_chessboard - Entry point
 * Description: prints chessboard
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])

{
	int x;
	int j;

	for (x = 0; x < 8; x++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[x][j]);
		_putchar('\n');
	}
}
