#include "main.h"

/**
 * print_array - Entry point
 * Description: This funtion prints n elements of an array of integers
 * followed by a new line
 * @a: array a
 * @n: number of elements in the array
 * Return: n and a
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
		if (x == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
